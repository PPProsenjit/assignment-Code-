#include<stdio.h>

// 
int evenNumber(int n){
    int i = 1 ;
    while(i <= n){
       if (i % 2 == 0){
           printf("%d\n", i);
       }
       i++;
    }  
    
    return 0;
}

int main (){
    int n;
    printf("Enter the number of n :");
    scanf("%d",&n);
    //Function call
    evenNumber(n);
    return 0;
}