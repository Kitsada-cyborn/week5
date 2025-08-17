#include<stdio.h>
int main () {
    int num[8];
    int highest;
    int lowest;
    int i=0;
    int j=0;
    int x=0;
    int y=0;

    for(;i<8;) {
    printf("Enter number %d: ", i+1);
    scanf("%d", &num[i]);
    i++;
    }
    lowest = highest = num[0];
    for(;j<8;j++) {
    if (num[j] > highest) {
        highest = num[j];
    }
    if (num[j] < lowest) {
        lowest = num[j];
    }
    }
printf("Smallest number: %d\n", lowest);
printf("Largest number: %d\n", highest);
return 0;
}