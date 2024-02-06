// NIM - NAMA

#include <stdio.h>
#include <limits.h> 

int main() {
  int n, i;
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
    }
    printf("%d\n", min);
    printf("%d\n", max);

    return 0;
}
