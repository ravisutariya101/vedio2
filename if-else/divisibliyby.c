#include<stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    n%3==0 ? printf("yes"): printf("no");

    return 0;
}