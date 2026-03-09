//pairs of the input number 
// all the divisors of that number

#include <stdio.h>

int main(){

int n;

    while(1){

        printf("Enter a number : ");

        if(scanf("%d", &n)!=1 || n <= 0){

            printf("Invalid input! please enter a natural number : \n");
            while(getchar()!= '\n');
            continue;
        } break;
    }

    for(int i = 1; i <= n; i++ ){

        for( int j = 1; j <= n; j++){

            printf(" (%d , %d) \t", i, j);
        }

        printf("\n");
    }

    printf("\n\n");

    int m;

    while(1){

        printf("Enter a number : ");

        if(scanf("%d", &m)!=1){

            printf("Invalid input! please enter a natural number : \n");
            while(getchar()!= '\n');
            continue;
        } break;
    }

    if ( m < 0){

        m = -m;
    }

    if ( m == 0 ){

        printf("All the non zero numbers are divisors of 0");
        return 0;
    }

    printf("The divisors of %d are : ", m);

    for(int k = 1; k<= m; k++){

        if(m % k == 0){

            printf("%d , ",k);
        }
    }

}    