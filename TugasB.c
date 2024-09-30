#include <stdio.h>

int main() {
    int T;  // jumlah testcase
    scanf("%d", &T);  // input T
    
    // Array untuk menyimpan hasil output
    char results[T][10];  // Kita asumsikan "yes" atau "no" maksimal 10 karakter
    
    for (int i = 1; i <= T; i++) {
        int K, N, M;
        scanf("%d %d %d", &K, &N, &M);  // input K, N, M untuk setiap testcase

        // cek apakah total mie instan cukup untuk memperbaiki wastafel
        if (N + M >= K) {
            sprintf(results[i - 1], "yes");  // Simpan hasil "yes" ke array
        } else {
            sprintf(results[i - 1], "no");  // Simpan hasil "no" ke array
        }
    }

    // Setelah semua input diproses, cetak hasilnya
    for (int i = 1; i <= T; i++) {
        printf("Case #%d: %s\n", i, results[i - 1]);  // Cetak hasil berdasarkan urutan
    }

    return 0;
}