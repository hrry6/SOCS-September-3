#include <stdio.h>

int main() {
    // Deklarasi variabel untuk menyimpan budget daging, sayur, telur
    int d, s, t;
    
    // Input tiga bilangan untuk budget d, s, t
    scanf("%d %d %d", &d, &s, &t);
    
    // Mengurutkan budget dari terbesar ke terkecil
    if (d > s && d > t) {
        printf("Daging\n");
        if (s > t) {
            printf("Sayur\n");
            printf("Telur\n");
        } else {
            printf("Telur\n");
            printf("Sayur\n");
        }
    } else if (s > d && s > t) {
        printf("Sayur\n");
        if (d > t) {
            printf("Daging\n");
            printf("Telur\n");
        } else {
            printf("Telur\n");
            printf("Daging\n");
        }
    } else if (t > d && t > s) {
        printf("Telur\n");
        if (d > s) {
            printf("Daging\n");
            printf("Sayur\n");
        } else {
            printf("Sayur\n");
            printf("Daging\n");
        }
    }

    return 0;
}