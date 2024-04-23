#include<stdio.h>
int main(){

    int x;
    printf("Enter a number: ");
    scanf("%d",&x);

    if(x % 5 == 0 && x % 3 == 0){
        printf("yes divisible by 5 and 3");
    }
    else{
        printf("no divisible by 5 and 3");
    }
    return 0;
}