// NIM - NAMA
#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n, i;
    int numbers[100]; 
    double sum = 0.0; 
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i]; 
    }

    
    int min = numbers[0];
    int max = numbers[0];

    
    for(i = 1; i < n; i++) {
        if(numbers[i] < min) {
            min = numbers[i];
        }
        if(numbers[i] > max) {
            max = numbers[i];
        }
    }

    double average = sum / n; 

    
    int max_diff = abs(numbers[1] - numbers[0]);
    for(i = 2; i < n; i++) {
        int diff = abs(numbers[i] - numbers[i-1]);
        if(diff > max_diff) {
            max_diff = diff;
        }
    }

    printf("%d\n", min);
    printf("%d\n", max);
    printf("%.2f\n", average); 
    printf("%d\n", max_diff); 
    return 0;
}

