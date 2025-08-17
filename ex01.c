#include<stdio.h>
int main () {
    int num[10];
    int x = 0;
    int y = 1;
    int z = 0;
    for(;x<=9;) {
    printf("Enter the value %d here: ", y);
    scanf("%d", &num[x]);
    y++;
    x++;
    }
        printf("Values in array are: ");
        for(;z<10;) {
            printf("%d",num[z]);
            if(z<9) {
                printf(", ");
            }
            z++;
        }

printf("\n");
return 0;
}