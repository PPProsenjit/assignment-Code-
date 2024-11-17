#include<stdio.h>
long permutation(int n, int r);
long combination(int n, int r);
long factorial(int n);

//nPr = n!/(n-r)!
long permutation(int n, int r){
    return factorial(n)/factorial(n-r);
}

//nCr = n!/r!(n-r)!
long combination(int n, int r){
    // r!(n-r)!
    long multiplication = factorial(r) * factorial(n-r);
    
    return factorial(n)/multiplication;
}

long factorial(int n){
   long long fact = 1;
   //get factorial number 1 to n 
    while(n > 0){
        //factorial multiplication n! = n(n-1)......
        fact  *= n;
        n--;
    }   
    return fact;
}

int main (){
    int n, r;
    printf("Enter the number n :");
    scanf("%d",&n);
    printf("inter the number of r :");
    scanf("%d",& r);
    //Function call
    printf("Permutation = %ld\n", permutation(n, r));    
    printf("Combination = %ld", combination(n, r));
    return 0;
}