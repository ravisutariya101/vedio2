#include<stdio.h>
int main(){

    int a,b,c;
    printf("Enetr 1st number: ");
    scanf("%d",&a);
    printf("Enetr 2nd number: ");
    scanf("%d",&b);
    printf("Enetr 3th number: ");
    scanf("%d",&c);

    if(a>b){
        if(a>c)
        printf("%d is gretest number",a);
        else{
            printf("%d is gretest number",c);
        }
    }
    if(b>a){
        if(b>c){
            printf("%d is gretest numbre",b);
        }
        else{
            printf("%d is gretest number",c);
        }
    }
    else{
        printf("%d is grtest number",c);
    }

    return 0;
}