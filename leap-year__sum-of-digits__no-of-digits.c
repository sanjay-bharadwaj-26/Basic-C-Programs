// leap year check
// sum of digits in that number 
// total numbver of digits in that number

#include <stdio.h>

int one();
int two();

int main(){

    int a;

    printf("----- 1 - Leap Year Check -----\n----- 2 - SUm of digits -----\n");
    while(1){

        printf("Choose an operation : ");

        if(scanf("%d", &a)!=1 || a <= 0 || a > 2){

            printf("Invalid input! please enter a positive number : \n");
            while(getchar()!= '\n');
            continue;
        } break;
    }

    if(a==1){

        one();
    } else{

        two();
    }

    return 0;
}

int one(){

    int n;

    while(1){

        printf("Enter a number : ");

        if(scanf("%d", &n)!=1 || n <= 0){

            printf("Invalid input! please enter a positive number : \n");
            while(getchar()!= '\n');
            continue;
        } break;
    }

    if(n%400 == 0 || (n%4 == 0 && n%100 != 0)){

        printf("%d is leap year ", n);
    }else{

        printf("%d is not a leap year", n);
    }

}

int two(){

    int n;
    int sum = 0;
    int digit;
    int count = 0;

    while(1){

        printf("Enter a number : ");

        if(scanf("%d", &n)!=1){

            printf("Invalid input! please enter a positive number : \n");
            while(getchar()!= '\n');
            continue;
        } break;
    }

    int original = n;

    if(n<0){

        n = -n;
    }

    for( n; n>0; n = n/10){

        digit = n%10;
        sum = sum + digit;
        count++;
    }

    printf("Total number of digits in %d is %d\n", original, count);

    printf("%d is the total sum of the digits in %d ", sum, original);

}
