// Find Maximum of Two Numbers:
#include <stdio.h>
int main(){
    int num1,num2;
    printf("enter first number:");
    scanf("%d",&num1);

    printf("enter second number:");
    scanf("%d",&num2);

    if(num1>num2){
        printf("the larger number is : %d", num1);

    }else if(num2>num1){
        printf("the larger number is: %d", num2);

    }else{
        printf("both numbers are equal");

    }
    
    return 0;
}