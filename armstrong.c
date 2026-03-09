// Armstromg Number or not

#include <stdio.h>
#include <math.h>

int main(){

    int n;
    int count = 0;
    int sum = 0;
    int digit;

    while(1){

        printf("Enter a number : ");
        if(scanf("%d", &n)!=1 || n<=0){

            printf("Invalid input ! please enter a positive integer \n");
            while(getchar()!='\n');
            continue;
        }break;
    }

    int temp = n;
    int i = n;

    for(i; i>0; i=i/10){

        count++;
    }

    for(n; n>0; n = n/10){

        digit = n%10;
        sum += pow(digit,count);
    }

    if(sum == temp){

        printf("%d is an armstromg number ", temp);
    }else {

        printf("%d is not an armstromg number ", temp);
    }
}

