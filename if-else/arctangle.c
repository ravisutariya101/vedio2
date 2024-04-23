#include<stdio.h>
int main(){

    float b,l;
    printf("Enter a rectangle Width: ");
    scanf("%f",&b);
    printf("Enter a rectangle Length:");
    scanf("%f",&l);
    float a,p;
    a = b * l;
    p = 2 * (b + l);
    if(a > p){
        printf("yes");
    }
    if(a < p){
        printf("no");
    }
    if (a == p){
        printf("ecavel");
    }
    return 0;
}