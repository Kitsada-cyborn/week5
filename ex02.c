#include<stdio.h>
int main () {
    int original[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int reverse[9];
    int x=10;
    int i=0;
    int y=1;
    for(;i<x;) {
        reverse[i] = original[x-1-i];
        i++;
    }
        printf("Reversed Array: ");

    for(;y<10;) {
    printf("%d", reverse[y]);
    printf(" ");
    y++;
    }
    if (y=9) {
        printf("\n");
    }

return 0;
}