// check marks to give student excellent,good ,not good :
#include <stdio.h>
int main(){
    int marks;
    printf("enter marks:");
    scanf("%d",&marks);

    if(marks>90){
        printf("excellent\n");

    }else if(marks>=75){
        printf("good\n");

    }else if(marks<20 && marks>=50){
        printf("not good\n");

    }else{
        printf("poor");

    }

    return 0;

}

