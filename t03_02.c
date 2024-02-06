// NIM - NAMA

#include <stdio.h>
#include <limits.h> 

int main() {
  int n, i;
  float sum = 0;
  scanf("%d", &n);
    int min = INT_MAX;
    int max = INT_MIN;

    for (i = 0; i < n; i++) {
        int anggka;
        scanf("%d", &anggka);

        if (anggka < min) {
            min = anggka;
        }
        if (anggka > max) {
            max = anggka;
        }
        sum += anggka;
    }
    printf("%d\n", min);
    printf("%d\n", max);
    printf("%.2f\n", sum/n);

    return 0;
 
}
