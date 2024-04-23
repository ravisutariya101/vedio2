#include<stdio.h>
int main(){

int a,b,c;
printf("Enter 1st age: ");
scanf("%d",&a);
printf("Enter 2nd age: ");
scanf("%d",&b);
printf("Enter 3rd age: ");
scanf("%d",&c);

if(a<b && a<c){
    printf("%d age is youngest",a);
}
if(b<c && b<a){
    printf("%d age is youngest",b);
}
if(c<a && c<b){
    printf("%d age is youngest",c);
}
    return 0;
}