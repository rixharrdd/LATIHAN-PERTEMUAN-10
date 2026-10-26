#include <stdio.h>

int main() {
    float suhu[7];
    float total = 0;
    float rataRata, terdingin, terpanas;

    for (int i = 0; i < 7; i++) {
        printf("Masukkan suhu hari ke-%d: ", i + 1);
        scanf("%f", &suhu[i]);
        total = total + suhu[i];
    }

    terdingin = suhu[0];
    terpanas = suhu[0];

    for (int i = 1; i < 7; i++) {
        if (suhu[i] < terdingin) {
            terdingin = suhu[i];
        }

        if (suhu[i] > terpanas) {
            terpanas = suhu[i];
        }
    }

    rataRata = total / 7;

    printf("\nSuhu rata-rata: %.2f\n", rataRata);
    printf("Suhu paling dingin: %.2f\n", terdingin);
    printf("Suhu paling panas: %.2f\n", terpanas);

    return 0;
}