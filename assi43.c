//   Write a program to find the union and intersection 
//of the two sets of integers (store it in two arrays).
 
#include <stdio.h>

int main() {
    int m, n;

    // Accept the size of the two sets
    printf("Enter the size of set1: ");
    scanf("%d", &m);

    int set1[m];
    printf("Enter the elements of set1:\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &set1[i]);
    }

    printf("Enter the size of set2: ");
    scanf("%d", &n);

    int set2[n];
    printf("Enter the elements of set2:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &set2[i]);
    }

    // Find and print the union
    printf("Union of the two sets is:\n");
    for (int i = 0; i < m; i++) {
        printf("%d ", set1[i]);
    }
    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < m; j++) {    //  int j
            if (set2[i] == set1[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            printf("%d ", set2[i]);
        }
    }
    printf("\n");

    // Find and print the intersection
    printf("Intersection of the two sets is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (set1[i] == set2[j]) {
                printf("%d ", set1[i]);
                break;
            }
        }
    }
    printf("\n");

    return 0;
}