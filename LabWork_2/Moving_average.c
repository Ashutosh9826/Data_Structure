#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of terms for the array: ");
    scanf("%d", &n);
    
    int array[n];  

    printf("Enter the terms: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int array2[n];  
    int n2;

    printf("Enter window size: ");
    scanf("%d", &n2);

    for (int i = 0; i < n; i++) {
        int sum = 0;

        if (i < n2) {
            for (int j = 0; j <= i; j++) {
                sum += array[j];
            }
        } else {
            for (int j = i - n2 + 1; j <= i; j++) {
                sum += array[j];
            }
        }

        if ((i + 1) < n2) {
            array2[i] = sum / (i + 1);
        } else {
            array2[i] = sum / n2;
        }
    }

    printf("Moving average array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", array2[i]);
    }

    return 0;
}

