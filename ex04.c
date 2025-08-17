#include<stdio.h>
int main () {
    int num[10];
    int i=0;
    int x=0;
    int even=0;
    int odd=0;

    for(;i<10;) {
    printf("Enter Value %d: ", i+1);
    scanf("%d", &num[i]);
    i++;
    if (num[x]%2 == 0) {
        even++;
        x++;
    }
    else {
        odd++;
        x++;
    }
    }
    printf("Even numbers: %d\n",even);
    printf("Odd numbers: %d\n", odd);

return 0;
}