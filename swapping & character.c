#include <stdio.h>
int main(){

    float a,b,result,temp;

    printf("Enter a number : ");
    scanf("%f", &a);
    printf("\n");
    printf("Enter a number : ");
    scanf("%f", &b);

    if(b>a){

        temp = a;
        a = b;
        b = temp;
    }

    result = a - b;

    printf("%f", result);

    printf("\n");

    char ch;
    printf("Enter anything you like ");
    scanf(" %c", &ch);

    printf("the ASCII value of %c is %d", ch, ch);

    if(ch>='a' && ch<='z'){

        printf("It is a lower case");
    }else if(ch>='A' && ch<='Z'){

        printf(" It is a upper case ");
    }else if (ch>='0' && ch <= '9'){

        printf("it is a digit");
    }else {

        printf("it is a symbol");
    }

    


}