#include<stdio.h>

//
long getDigit(int n){
    int sum = 0;
    while(n != 0){
        // n%10 = vagsesh 
        sum += n%10;
        // n= n/10;
        n /=10;
    }  
    
    return sum;
}

int main (){
    int n;
    printf("Enter the digit n :");
    scanf("%d",&n);
    //Function call
    printf("Sum of the Digits %d", getDigit(n));
    return 0;
}