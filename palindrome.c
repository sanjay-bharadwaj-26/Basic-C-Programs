// palindrome

#include <stdio.h>

int main(){

    int n;
    int reversed = 0;
    int digit;

    while(1){

        printf("Enter a number : ");
        if(scanf("%d", &n)!=1 || n<0){

            printf("Invalid input ! please enter a positive integer \n");
            while(getchar()!='\n');
            continue;
        }break;
    }

    int temp = n;

    while(n>0){

        digit = n%10;

        reversed = reversed*10 + digit;

        n = n / 10;
    }

    printf("Reversed number is %d", reversed);

    if ( reversed == temp){

        printf("%d is an palindrome", temp);
    }else {

        printf("%d is not a palindrome", temp);
    }
}