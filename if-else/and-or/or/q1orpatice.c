#include<stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n % 5 == 0){
        printf("%d yes divisible by 5",n);
    }
    if(n % 3 == 0){
        printf("%d yes divisible by 3",n);
    }
    // if(n % 5 == 0 && n % 3 ==0){
    //     printf("%d yes divisible by 5 and 3",n);
    // }
    if(n % 5 != 0 && n % 3 != 0){
        printf("%d not divisible by 5 and 3",n);
    }
    return 0;
}