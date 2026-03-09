//power
//quotient
//remainder
//divisibility & divisors


#include <stdio.h>
#include <math.h>

void sq_cub();
void quo_rem_divi_diviso();

int main(){

int choice;

printf("Choose your program \n ----- powering of a number(1) ----- \n ----- Quotient,Remainder,Divisibility,Divisor (2) ----- \n");

while (1){
    printf(" Enter a number (1 - 3) ");
    if(scanf("%d", &choice)!=1 || choice <1 || choice>2){
        printf("Invalid input ! enter a integer \n");
        while(getchar()!='\n');
        continue;
    }break;
}

if(choice==1){

    sq_cub();

}else if(choice==2){

    quo_rem_divi_diviso();

}

}

void sq_cub(){

float a,b,result;

while(1){

    printf("Enter a number to print it's power : ");

    if(scanf("%f", &a)!=1){
        printf("Invalid Input! please enter a number : ");
        while(getchar()!= '\n');
        continue;
    }break;
}

while(1){

    printf("Enter the power ");
    if(scanf("%f", &b)!=1){
        printf("Invalid Input! please enter a number : ");
        while(getchar()!= '\n');
        continue;
    }break;
}

result = pow(a,b);

printf("Answer is : %f", result);

}

void quo_rem_divi_diviso(){

int a,b,quotient,remainder;

while(1){

    printf("Enter a integer you want to divide :  ");
    if(scanf("%d", &a)!=1){
        printf("Invalid Input! please enter a number : ");
        while(getchar()!= '\n');
        continue;
    }break;
}

while(1){

    printf("Enter an integer divisor :  ");
    if(scanf("%d", &b)!=1){
        printf("Invalid Input! please enter a number : ");
        while(getchar()!= '\n');
        continue;
    }break;
}

quotient = a/b;

printf("Quotient is %d", quotient);

remainder = a%b;

printf("remainder is %d", remainder);

if(a%b==0){

    printf("%d is divsible by %d\n", a,b);
}

printf("Divisors are : ");

for(int i = 1; i<=a; i++){

    if(a%i==0){

        printf(" %d", i);
    }
}

}