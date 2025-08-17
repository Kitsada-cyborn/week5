#include<stdio.h>
int main () {
    int num[5];
    int total = 0;
    int highest = 0;
    int x=0;
    int i=0;
    int y=0;
    for (i = 0; i < 5; i++) {
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &num[i]);

        total += num[i];

        if (num[i] > highest) {
            highest = num[i];
        }
    }

printf("Total Marks: %d\n", total);
printf("Highest Marks: %d\n", highest);
return 0;
}