#include<stdio.h>

int oddNumbers(int n){
    int i = 1, sum = 0 ;
    while(i <= n){
        //check Odd number
       if (i % 2 != 0){
           //Add odd number 
           sum += i;
       }
       i++;
    }  
    
    return sum;
}

int main (){
    int n;
    printf("Enter the number of n :");
    scanf("%d",&n);
    //Function call
    printf("Sum of the odd number : %d", oddNumbers(n));
    return 0;
}