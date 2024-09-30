#include <stdio.h>

int main() {
    int T; // Jumlah test case
    scanf("%d", &T); // Baca jumlah test case

    int N[T], M[T]; // Array untuk menyimpan N dan M untuk setiap test case

    // Membaca seluruh input N dan M terlebih dahulu
    for (int i = 0; i < T; i++) {
        scanf("%d %d", &N[i], &M[i]);
    }

    // Menghasilkan output setelah seluruh input dibaca
    for (int i = 0; i < T; i++) {
        long long acquaintances = (long long) N[i] * M[i]; // Hitung jumlah perkenalan

        // Cek apakah jumlah perkenalan ganjil atau genap
        if (acquaintances % 2 == 0) {
            printf("Case #%d: Party time!\n", i + 1);
        } else {
            printf("Case #%d: Need more frogs\n", i + 1);
        }
    }

    return 0;
}