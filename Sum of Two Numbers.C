/*Task 01: Sum of Two Numbers
Write a function add that takes two integers as parameters and returns their sum.*/

#include<stdio.h>
int add(int num1, int num2){
    int sum = num1 + num2;
    return sum;
                }

int main(){

   int a,b;
    scanf("%d %d",&a,&b);
int sum = add(a,b);
    printf("%d\n", sum);

    return 0;
}
