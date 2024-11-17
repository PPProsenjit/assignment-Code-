#include<stdio.h>
int factorial(int n){
   int fact = 1, i = 1;
   //get factorial number 1 to n 
    while(i <= n){
        //factorial multiplication n! = n(n-1)......
        fact  *= i;
        i++;
    }     
    printf("Factorial is %d", fact);
    return 0;
}
int main (){
    int n;
    printf("Enter the factorial number :");
    scanf("%d",&n);
    //Function call
   factorial(n);
    return 0;
}