// to check a number is prime or not
// print prime numbers in a range

#include <stdio.h>

int one();
int two();

int main(){

    int a;

    printf("----- 1 - To check a prime number -----\n----- 2 - Prime numbers in range -----\n");
    while(1){

        printf("Choose an operation : ");

        if(scanf("%d", &a)!=1 || a <= 0 || a> 2){

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

        printf(" Enter a number : ");

        if(scanf("%d", &n)!=1 || n <= 0){

            printf("Invalid input! please enter a positive number : ");
            while(getchar()!= '\n');
            continue;
        } break;
    }

    if( n==1){

        printf("1 is neither prime nor composite");
        return 0;
    } else if( n== 2){

        printf("2 is a prime number ");
    }

    for(int i = 2; i <n; i++){

        if(n%i==0){

            printf("%d is not a prime number ", n);
            return 0;
        }
    }

    printf("%d is a prime number ", n);
}

int two(){

    int n;

    while(1){

        printf(" Enter a number : ");

        if(scanf("%d", &n)!=1 || n <= 0){

            printf("Invalid input! please enter a positive number : ");
            while(getchar()!= '\n');
            continue;
        } break;
    }

    if( n==1){

        printf("1 is neither prime nor composite");
        return 0;

    } else if( n== 2){

        printf("2 is the only prime number ");
        return 0;
    }

    printf("Prime numbers upto %d are : ", n);

    int i,j;

    for(i = 2; i<=n ; i++){

        for(j = 2; j< i; j++ ){
            
            if (i % j == 0){

                break;   
            }
        }

        if(i == j){

            printf("%d ", i);
        }
    }


}