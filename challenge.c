#include <stdio.h>
int main() {
    int first[50];
    int num;
    int count, counted;
    int a, b, c;

    printf("Input:\nEnter number of elements: ");
    scanf("%d", &num);

    printf("Enter %d integers: ", num);
    for (int i = 0; i < num; i++) {
        scanf("%d", &first[i]);
    }

    printf("Output:\n");
    for (a = 0; a < num; a++) {
        counted = 0;

        for (b = 0; b < a; b++) {
            if (first[b] == first[a]) {
                counted = 1;
                break;
            }
        }
        if (counted) {
            continue;
        }

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