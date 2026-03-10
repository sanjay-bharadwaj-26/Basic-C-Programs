// conversion of days to seconds

#include <stdio.h>

int main(){
int D;
    float y,m,w,d,s;

    printf("Enter the number of days : ");

    while(1) {
        
        if(scanf("%d", &D)!= 1){

        printf("Invalid input ! please enter a number : ");
        while(getchar()!= '\n');
        continue;
    } break;

    }

    y = D/365;
    m = (D%365)/31;
    w = (D%365)/7;
    d = (D%365)%7;

    printf("%.2f Years %.2f Months %.2f Weeks %.2f Days", y,m,w,d);


}    