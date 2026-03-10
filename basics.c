// average of numbers 
// simple interest & compound interest
// temperature conversion


#include <stdio.h>
#include <math.h>


void average();
void convert();
void interest();

int main(){

printf("Choose your program \n ----- average (1) ----- \n ----- temp convert(2) ----- \n ----- SI & CI (3) -----");

int prog;

while (1){
    printf(" Enter a number (1 - 3) ");
    if(scanf("%d", &prog)!=1 || prog <1 || prog>3){
        printf("Invalid input ! enter a integer \n");
        while(getchar()!='\n');
        continue;
    }break;
}

if(prog==1){

    average();

}else if(prog==2){

    convert();

}else {

    interest();
}

}


void average(){
int n;
float sum = 0;
float numbers;
float average;

while (1){
    printf(" How many numbers do you want to average : ");
    if(scanf("%d", &n)!=1){
        printf("Invalid input ! enter a integer \n");
        while(getchar()!='\n');
        continue;
    }break;
}

for(int i=1; i<=n; i++){

    printf("Enter number %d ", i);
    scanf("%f", &numbers);
    sum = sum + numbers;

}

average = sum/n;

printf("Average is %.2f", average);

}


void convert(){
int a;
float temperature, celcuis, fahrenheit;

printf(" 1 for C to F \n 2 for F to C");
while (1){
    printf(" Enter a number : ");
    if(scanf("%d", &a)!=1 || a<1 || a>2 ){
        printf("Invalid input ! enter a integer \n");
        while(getchar()!='\n');
        continue;
    }break;
}

printf("Enter a temperature : ");
scanf("%f", &temperature);

if(a==1){

    fahrenheit = temperature*(9.0/5) + 32;
    printf("%f", fahrenheit);

}else{

    celcuis = (5.0/9)*(temperature-32);
    printf("%f", celcuis);
}

}


void interest(){
int z;
float p,r,t, si, ci;

printf("Enter principle amount : ");
scanf("%f", &p);
printf("Enter rate of interest : ");
scanf("%f", &r);
printf("Enter time in years : ");
scanf("%f", &t);

while (1){
    printf(" Enter a number ( 1 for si 2 for ci) : ");
    if(scanf("%d", &z)!=1 || z<1 || z>2 ){
        printf("Invalid input ! enter a integer \n");
        while(getchar()!='\n');
        continue;
    }break;
}

if(z==1){

    si = (p*r*t)/100;
    printf("si is %f", si);
}else {

    ci = p*(pow(1+(r/100),t));
    printf("%f", ci);
}

}


















