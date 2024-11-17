#include<stdio.h>

int reverseNumbers(int n){
    int i = n;
    int num = 0;
    //check for reverse number 
    for( n ; i > 0; i = i/10 ){
        
        num = num * 10 + i % 10;
    }
    
    return num;
}

int main (){
    int n;
    printf("Enter the number of n :");
    scanf("%d",&n);
    //Function call
    printf("\nReverse number is : %d", reverseNumbers(n));
    return 0;
}