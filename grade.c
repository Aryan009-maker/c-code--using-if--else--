// getting grades based on marks:
#include <stdio.h>
int main(){
    int marks;
    printf("enter marks:");
    scanf("%d", &marks);


    if(marks>=90){
        printf("Grade A\n");

    }else if(marks>=80 && marks<=89){
        printf("Grade B\n");
        
    }else if(marks>=70 && marks<=79){
        printf("Grade C\n");


    }else if(marks>=60 && marks<=69){
        printf("Grade D\n");

    }else if(marks<60){
        printf("Grade F\n");

    }else{
        printf("fail\n");
        
    }





    return 0;

}