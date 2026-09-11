#include <stdio.h>

/*
 * Program: 03_nested_loop.c
 * Tujuan : Memperagakan perulangan bersarang (nested loop)
 *          untuk mencetak tabel perkalian dan pola segitiga bintang.
 */

int main(void) {
    // 1. Pola Persegi Bintang (4 x 5)
    printf("=== 1. POLA PERSEGI BINTANG (4 Baris, 5 Kolom) ===\n");
    for (int baris = 1; baris <= 4; baris++) {
        for (int kolom = 1; kolom <= 5; kolom++) {
            printf("* ");
        }
        printf("\n"); // Pindah ke baris baru setelah satu baris selesai
    }

    // 2. Pola Segitiga Siku-Siku
    printf("\n=== 2. POLA SEGITIGA SIKU-SIKU BINTANG ===\n");
    int tinggi = 5;
    for (int i = 1; i <= tinggi; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // 3. Tabel Matriks Angka Perkalian Sederhana (1 sampai 4)
    printf("\n=== 3. TABEL PERKALIAN KECIL (1 - 4) ===\n");
    for (int r = 1; r <= 4; r++) {
        for (int c = 1; c <= 4; c++) {
            printf("%4d", r * c); // %4d untuk penataan kolom rata
        }
        printf("\n");
    }

    return 0;
}
