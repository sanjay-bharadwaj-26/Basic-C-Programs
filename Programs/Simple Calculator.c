//simple calculator 

// plus, minus, product, division

#include <stdio.h>
#include <math.h>

void sum();
void minus();
void mult();
void divi();

int main(){

printf("Choose your calculation : \n");
printf("----- 1-addition ----- \n");
printf("----- 2-subtraction -----\n");
printf("----- 3-multplication -----\n");
printf("----- 4-division -----\n");

int choice ;

printf("enter your choice : ");

while (1){
    printf(" Enter a number (1 - 4) ");
    if(scanf("%d", &choice)!=1 || choice <1 || choice>4){
        printf("Invalid input ! enter between 1 - 4 \n");
        while(getchar()!='\n');
        continue;
    }break;
}

switch(choice){

    case 1: sum();
            break;
    case 2: minus();
            break;
    case 3: mult();
            break;
    case 4: divi();
            break;

}
       
}

void sum(){


printf("----- SUM CALCULATOR ----- \n");

int count = 0;
float num;
float sum = 0;
char cont;

while (1){

    printf(" Enter number %d : ", count + 1);

    if(scanf("%f", &num)!=1){
        printf("Invalid input ! enter a number : \n");
        while(getchar()!='\n');
        continue;
    }    

    sum = sum + num;
    count ++;

    printf("Add another number ? (y or n) ");

    while(1){
        
        if(scanf(" %c", &cont)!=1){
        printf("Invalid input ! please enter y or n : \n");
        while(getchar()!='\n');
        continue;
    }

    if(cont != 'y' && cont != 'Y' && cont != 'n' && cont != 'N'){
        printf("Please enter 'y' or 'n'.\n");
        continue;
    } break;

    }


    if(cont=='n' || cont== 'N'){

        break;
    }

}

printf("Total sum is %.2f\n", sum);

}

void minus(){

float result;
int count = 0;
float num;
float total_num = 0;
char cont;

printf("-----SUBTRACTION CALCULATOR-----\n");

printf("Enter starting number : ");

while(1){

    if(scanf("%f", &result)!=1){

        printf("Invalid input! Please enter a number \n");
        while(getchar()!='\n');
        continue;
    }break;
}

while(1){

    printf("Enter number %d to subtract : ", count + 1);

    if(scanf("%f", &num)!=1){

        printf("Invalid input! Please enter a number \n");
        while(getchar()!='\n');
        continue;
    }

    total_num += num;

    count++;



    printf("Do you want to subtract more numbers ? ( y or n) : ");

    while(1){

    if(scanf(" %c", &cont)!=1){

        printf("Invalid input! Please enter 'y' or 'n' \n");
        while(getchar()!='\n');
        continue;
    }

    if(cont != 'y' && cont != 'Y' && cont != 'n' && cont != 'N'){
        printf("Please enter 'y' or 'n'.\n");
        continue;
    }break;

    }

    if(cont=='n' || cont=='N'){

        break;
    }
}

printf("Result is %f", result - total_num );

}

void mult(){

int count=0;
float num;
float result=1;
char cont;


printf("-----MULTIPLICATION CALCULATOR \n");

while(1){
    
    printf("Enter %d number : ", count+1);

    if(scanf("%f", &num)!=1){

        printf("Invalid input! Please enter a number \n");
        while(getchar()!='\n');
        continue;
    }

    result = result * num;

    count++;

    printf("Do you want to continue ? ( y or n) : ");

    while(1){

    if(scanf(" %c", &cont)!=1){

        printf("Invalid input! Please enter y or n \n");
        while(getchar()!='\n');
        continue;
    }

    if(cont != 'y' && cont != 'Y' && cont != 'n' && cont != 'N'){
        printf("Please enter 'y' or 'n'.\n");
        continue;
    }break;
    
    }

    if(cont=='n' || cont=='N'){

        break;
    }
}

printf("Product is %f", result);

}

void divi(){

    float a,b,result;

printf("-----DIVISION-----\n");

while(1){
    
    printf("Enter dividend : ");

    if(scanf("%f", &a)!=1){

        printf("Invalid input or zero! Please enter a valid number \n");
        while(getchar()!='\n');
        continue;
    }break;
}

while(1){

    printf("Enter divisor : ");

    if(scanf("%f", &b)!=1 || b==0){

        printf("Invalid input or zero! Please enter a valid number \n");
        while(getchar()!='\n');
        continue;
    }break;
}    
    
result = a/b;

printf("Quotient is %.2f\n", result);

printf("Remainder is %.2f", fmod(a,b));

}

