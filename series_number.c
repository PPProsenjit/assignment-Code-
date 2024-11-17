#include<stdio.h>

long series(int n){
    int i = 0, sum = 0;
    if (n % 2 == 0){
        printf("please inter the odd number.\n");
        return 1;
    }
   //get number 1 to n 
    while(i <= n){
        //multiplication 1.2+3.4+5.6+...n(n+1)
        sum += i*(i*1);
        i++;
    }   
    return sum;
}

int main (){
    int n, r;
    printf("Enter the number n :");
    scanf("%d",&n);
    //Function call
    printf("Series of odd number is : %ld", series(n));
    return 0;
}