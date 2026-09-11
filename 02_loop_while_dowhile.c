#include <stdio.h>

/*
 * Program: 02_loop_while_dowhile.c
 * Tujuan : Memperagakan perbedaan mendasar antara while loop
 *          (entry-controlled) dan do-while loop (exit-controlled).
 */

int main(void) {
    // 1. Contoh perulangan while
    printf("=== 1. CONTOH WHILE LOOP ===\n");
    int hitungWhile = 1;
    while (hitungWhile <= 3) {
        printf("while: hitungan ke-%d\n", hitungWhile);
        hitungWhile++; // Pembaruan variabel kondisi
    }

    // 2. Pembuktian perbedaan saat kondisi awal sudah bernilai False
    printf("\n=== 2. PERBANDINGAN SAAT KONDISI AWAL BERNILAI SALAH (x > 10) ===\n");
    int nilaiUji = 5; // Jelas nilai 5 TIDAK lebih besar dari 10

    // Uji pada while: kondisi diperiksa di awal
    printf("Menguji pada while (nilaiUji = 5):\n");
    while (nilaiUji > 10) {
        printf("Pesan ini TIDAK AKAN PERNAH dicetak.\n");
    }
    printf("-> while loop langsung dilewati karena kondisi awal False.\n");

    // Uji pada do-while: badan loop dieksekusi dulu sebelum kondisi diperiksa
    printf("\nMenguji pada do-while (nilaiUji = 5):\n");
    do {
        printf("-> Pesan ini TETAP DICETAK SATU KALI pada do-while!\n");
    } while (nilaiUji > 10);

    // 3. Studi kasus nyata do-while: Validasi input angka positif
    printf("\n=== 3. VALIDASI INPUT DENGAN DO-WHILE ===\n");
    int angkaPositif = 5; // Nilai simulasi demonstrasi
    printf("Nilai tervalidasi: %d (harus lebih besar dari 0)\n", angkaPositif);

    return 0;
}
