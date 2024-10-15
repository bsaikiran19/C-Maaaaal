#include <stdio.h>

int main(){
char operator;
int a, b ;
printf("Enter the Operator: "); //First entereing the operator
scanf("%c", &operator);


printf("Enter the number one after one: ");//Takijg two inputs of the number between which we have to perform operations
scanf("%d %d",&a,&b);
switch(operator){
    case '+':
    printf("The addition between the number is %d",(a+b));
    break;
    case'-':
    printf("The subtraction between the number is %d",(a - b));
    break;
    case'*':
    printf("The multiplication between the number is %d",(a*b));
    break;
    case '/':
    if(b==0){
        printf("The division is not possible as the denominator value is Zero.");
    }
    else{
    printf("The division between the number is %f",(a%b));
    }
    break;
    default:
    printf("The entered is not a valid operator");
    break;
     return 0;
}
}
