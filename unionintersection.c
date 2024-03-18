//  Write a program to find the union and intersection of the two sets of integers (store it in two arrays)

#include <stdio.h>

// Function to find the union of two sets
void findUnion(int set1[], int set2[], int size1, int size2) {
    int unionSet[size1 + size2];
    int unionSize = 0;

    // Add elements from set1 to unionSet
    for (int i = 0; i < size1; i++) {
        unionSet[unionSize++] = set1[i];
    }

    // Add unique elements from set2 to unionSet
    for (int i = 0; i < size2; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < size1; j++) {
            if (set2[i] == set1[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unionSet[unionSize++] = set2[i];
        }
    }

    // Display unionSet
    printf("Union: ");
    for (int i = 0; i < unionSize; i++) {
        printf("%d ", unionSet[i]);
    }
    printf("\n");
}

// Function to find the intersection of two sets
void findIntersection(int set1[], int set2[], int size1, int size2) {
    int intersectionSet[size1];
    int intersectionSize = 0;

    // Check each element in set1 for intersection with set2
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (set1[i] == set2[j]) {
                intersectionSet[intersectionSize++] = set1[i];
                break;
            }
        }
    }

    // Display intersectionSet
    printf("Intersection: ");
    for (int i = 0; i < intersectionSize; i++) {
        printf("%d ", intersectionSet[i]);
    }
    printf("\n");
}

int main() {
    int size1, size2;

    // Input size of the first set
    printf("Enter the size of set 1: ");
    scanf("%d", &size1);

    // Input elements of the first set
    int set1[size1];
    printf("Enter elements of set 1: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &set1[i]);
    }

    // Input size of the second set
    printf("Enter the size of set 2: ");
    scanf("%d", &size2);

    // Input elements of the second set
    int set2[size2];
    printf("Enter elements of set 2: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &set2[i]);
    }

    // Find and display union and intersection
    findUnion(set1, set2, size1, size2);
    findIntersection(set1, set2, size1, size2);

    return 0;
}