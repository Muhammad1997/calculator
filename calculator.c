#include<stdio.h>
#include <string.h>

long factorial_cal(int num);
float pow_func(float num,int power);
float sqr_root(float num);

int main(){

float sum;

while(1){
char  input1[2];
float input2;
float input3;
int input_2;
int input_3;


printf("enter operation: ");
gets(input1);

//factorial
if (strcmp(input1,"!") == 0){
    printf("number : ");
    scanf("%f",&input2);
    long fact = factorial_cal(input2);
    printf("factorial: ");
    printf("%ld \n",fact);
}
//addition
else if (strcmp(input1,"+") == 0){
    printf("first number space second number: ");
    scanf("%f %f",&input2,&input3);
    sum = input2 + input3;
    printf("add sum: ");
    printf("%f \n",sum);
}
//sub
else if (strcmp(input1,"-") == 0){
    printf("first number space second number: ");
    scanf("%f %f",&input2,&input3);
    sum = input2 - input3;
    printf("sub sum: ");
    printf("%f \n",sum);
}
//multi
else if (strcmp(input1,"*") == 0){
    printf("first number space second number: ");
    scanf("%f %f",&input2,&input3);
    sum = input2*input3;
    printf("multiplication sum: ");
    printf("%f \n",sum);
}
//div
else if (strcmp(input1,"/") == 0){
    printf("first number space second number: ");
    scanf("%f %f",&input2,&input3);
    sum = input2/input3;
    printf("division sum: ");
    printf("%f \n",sum);
}
//reminder
else if (strcmp(input1,"%") == 0){
    printf("first number space second number: ");
    scanf("%d %d",&input_2,&input_3);
    sum = input_2 % input_3;
    printf("reminder : ");
    printf("%f \n",sum);
}
//power
else if (strcmp(input1,"^") == 0){
    printf("number space power: ");
    scanf("%f %d",&input2,&input_3);
    printf("power sum : ");
    sum = pow_func(input2,input_3);
    printf("%f \n",sum);
}
//sqr_root
else if (strcmp(input1,"s") == 0){
    printf("number : ");
    scanf("%f",&input2);
    sum =  sqr_root(input2);
    printf("sqrt is : ");
    printf("%f \n",sum);
}
//quit
else if (strcmp(input1,"q") == 0){
    printf("good bye");
    break;
}


}
}


long factorial_cal(int num){
    long fact = 1;
    int i;
    for(i = num; i > 0; i--){
        fact = fact*i;
    }
    return fact;
}


float pow_func(float num,int power){
    int i;
    float num2 = 1;
    for(i = power;i>0;i--){
        num2 = num2*num;
    }
    return num2;
}

float sqr_root(float num){
float sqr_num = num;
float aprox = 1;
float accur = 0.000001;
while(sqr_num - aprox > accur){
sqr_num = (sqr_num + aprox)/2;
aprox = num/sqr_num;
}
return sqr_num;
}
