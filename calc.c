/*
Title: Simple Calculator
Date: 26/11/2021
Author: harry caldwell
Description: Create a simple calculator to add and subtract
*/



#include <stdio.h>
#include <string.h>



//Function to add 2 numbers together
int addNums(int num1, int num2){
int total;
total=num1+num2;
return total;
}



//Function to minus 2 numbers
int subNums(int num1, int num2){
int answer;
answer=num1-num2;
return answer;
}



//Function to multiply 2 numbers
int multiplyNums(int num1,int num2){
int response;
response=num1*num2;
return response;
}



//Function to divide 2 numbers
int divideNums(int num1,int num2){
int answer;
answer=num1/num2;
return answer;
}

//Main Function
int main(void){
int firstNum,secondNum;
char symbol[2];
printf("Enter First Number: ");
scanf("%d", &firstNum);
printf("Enter Symbol(+ or - or * or /): ");
scanf("%s", &symbol);
printf("Enter Second Number: ");
scanf("%d", &secondNum);

//check if a + symbol has been entered
if(strcmp(symbol,"+")==0){
int getResult;
getResult=addNums(firstNum,secondNum);
printf("%d",getResult);
}
//check if a - symbol has been entered
if(strcmp(symbol,"-")==0){
int getResult;
getResult=subNums(firstNum,secondNum);
printf("%d",getResult);
}
//check if a * symbol has been entered
if(strcmp(symbol,"*")==0){
int getResult;
getResult=multiplyNums(firstNum,secondNum);
printf("%d", getResult);
}
//check if a / symbol has been entered
if(strcmp(symbol,"/")==0){
int getResult;
getResult=divideNums(firstNum,secondNum);
printf("%d", getResult);
}
return 0;
}