#include <stdio.h>

/*
 * Program: 01_loop_for.c
 * Tujuan : Memperagakan perulangan for, termasuk iterasi naik (increment),
 *          iterasi turun (decrement), serta penggunaan break dan continue.
 */

int main(void) {
    printf("=== 1. PERULANGAN FOR NAIK (1 SAMPAI 5) ===\n");
    for (int i = 1; i <= 5; i++) {
        printf("Iterasi ke-%d\n", i);
    }

    printf("\n=== 2. PERULANGAN FOR TURUN (COUNTDOWN 5 KE 1) ===\n");
    for (int hitung = 5; hitung >= 1; hitung--) {
        printf("%d... ", hitung);
    }
    printf("Mulai!\n");

    printf("\n=== 3. PERULANGAN DENGAN KONTROL BREAK & CONTINUE ===\n");
    printf("Menampilkan angka 1 - 10, lewati angka 4, berhenti jika bertemu 8:\n");
    for (int n = 1; n <= 10; n++) {
        if (n == 4) {
            printf("[Angka 4 dilewati oleh continue] ");
            continue;
        }

        if (n == 8) {
            printf("\n[Loop dihentikan oleh break pada angka 8]\n");
            break;
        }

        printf("%d ", n);
    }

    // Menghitung total jumlah deret 1 + 2 + ... + 10
    int total = 0;
    for (int k = 1; k <= 10; k++) {
        total += k;
    }
    printf("\nTotal penjumlahan angka 1 sampai 10 = %d\n", total);

    return 0;
}
