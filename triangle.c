#include <stdio.h>
int main(){
    int angle1,angle2,angle3;
    printf("enter three angles of triangle:\n");
    scanf("%d", &angle1,&angle2,&angle3);
    
    if((angle1>0 && angle2>0 && angle3>0 )&&
       (angle1 + angle2 + angle3 == 180)) {
        printf("valid triangle\n");

    }else{
        printf("not a valid triangle\n");

    }

    return 0;
}