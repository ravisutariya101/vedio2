#include<stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    if(n % 3 ==0 || n % 5 == 0){
        printf("yes divisible by 5 and 3");
    }
    else{
        printf("no divisible by 5 and 3");
    }

    return 0;
}