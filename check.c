#include <stdio.h>

int main() {
    int first[50]; // bigger size in case
    int num;
    int i, a, b, c;
    int count;
    int counted;

    printf("Input:\nEnter number of elements: ");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &first[i]);
    }

    printf("Output:\n");
    for (a = 0; a < num; a++) {
        counted = 0;

        // Check if already counted
        for (b = 0; b < a; b++) {
            if (first[b] == first[a]) {
                counted = 1;
                break;
            }
        }

        if (counted) {
            continue; // skip duplicates
        }

        // Count occurrences
        count = 0;
        for (c = 0; c < num; c++) {
            if (first[c] == first[a]) {
                count++;
            }
        }

        printf("Element %d occurs %d times\n", first[a], count);
    }

    return 0;
}
