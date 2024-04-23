#include<stdio.h>
int main(){

    float sp,cp;
    printf("Enter a cost price: ");
    scanf("%f",&cp);
    printf("Enter a selling price: ");
    scanf("%f",&sp);
    float pl = sp - cp;
    
    // if(sp<cp){
    //     printf("%f loss",pl);
    // }
    // else{
    //     printf("%f profit",pl);
    // }
    if(pl < 0 ){
        printf("%f loss",pl);
    }
    if(pl > 0){
        printf("%f profit",pl);
    }
    if(pl == 0){
        printf("%f profit",pl);
    }
    return 0;
}