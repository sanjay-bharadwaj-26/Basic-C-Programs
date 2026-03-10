// small & large in a given number


#include <stdio.h>

int main(){

    int n;
    int small = 9;
    int large = 0;
    int digit = 0;
    while(1){

        printf("Enter a number : ");

        if(scanf("%d", &n)!=1){

            printf("Invalid input! please enter a natural number : \n");
            while(getchar()!= '\n');
            continue;
        } break;
    }

    if(n < 0){

        n = -n;
    }

    if(n == 0){

        printf("0 is the largest as well as smallest");
        return 0;
    }

    for (; n>0; n = n/10){


        digit = n%10;
        if(digit >= large){

            large = digit;
        }
        if(digit <= small){

            small = digit;
        }
    }

    printf("Largest is %d \n Smallest is %d", large, small);
}