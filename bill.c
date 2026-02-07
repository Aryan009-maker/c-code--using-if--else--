// calculating electricity bill:
#include <stdio.h>
int main(){
    int bill;
    printf("enter bill:");
    scanf("%d",&bill);

    if(bill<100){
        printf("₹5 per unit\n");

    }else if(bill>101 && bill<=200){
        printf("₹7 per unit\n");

    }else if(bill<200){
        printf("₹10 per unit\n");

    }else{
        printf("invalid unit\n");

    }


    return 0;
}