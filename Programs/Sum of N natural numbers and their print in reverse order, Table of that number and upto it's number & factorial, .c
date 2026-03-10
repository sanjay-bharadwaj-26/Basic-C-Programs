// sum of n natural numbers and their prints in reverse order
// table of that number
// tables upto that number
// factorial

#include <stdio.h>

int main(){

    int n;
    int sum = 0;
    int fact = 1;

    while(1){

        printf("Enter a number : ");
        if(scanf("%d", &n)!=1 || n<=0){

            printf("Invalid input ! please enter a positive integer \n");
            while(getchar()!='\n');
            continue;
        }break;
    }

    printf("\n");

    //factorial

    for(int m=n; m>=1; m--){
        fact = fact*m;
    }
    printf("factorial is %d", fact);



    printf("-----Reverse order-----\n ");

    for(int i = n; i >= 1; i--){

        if(i%10==0){

            printf("\n");
        }

        sum = sum + i;
        printf("%d\n ", i);

    }

    printf("\ntotal sum is  %d \n\n", sum);

    // nth table

    for(int j=1; j<=10; j++){

        printf("%d * %d = %d \n", n, j, n*j);

    }
        printf("\n");

    // upto that n

    for(int k = 1; k <= n; k++){

        for(int l = 1; l <= 10; l++){

            printf(" %d ", k*l);
        }
 
        printf("\n\n");
    }

}

