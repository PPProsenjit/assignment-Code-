#include<stdio.h>

long multiplicationTabli(int n){
    int i = 1;
    
   //get number 1 to 10
    while(i <= 10){
        //multiplication n * 1 = ? ....n*10 = ?
        printf("%d * %d = %d\n", n, i, n*i);
        i++;
    }   
    return 0;
}

int main (){
    int n, r;
    printf("Enter the number n :");
    scanf("%d",&n);
    //Function call
    multiplicationTabli(n);
    return 0;
}