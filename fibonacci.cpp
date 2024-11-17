#include<stdio.h>
int fibonicies(int a){
    if(a == 0){
        printf("Invalid number of Item.");
        return 0;
    }
    //If the number gatter than 0
    int item1= 0;
    int item2 = 1;
    //initialze 3rd item
    int nextItem = item1 + item2;
    //print first two item 
    printf("The febonacci serics is %d %d ", item1, item2);
    //3rd Item to nth Item
    for(int i = 3; i <= a; i++){
        printf("%d ", nextItem);
       item1 = item2;
       item2 = nextItem;
       nextItem =item1+item2;
    }
    return 0;
}
int main (){
    int a;
    printf("Enter the series of number :");
    scanf("%d",&a);
    //Function call
   fibonicies(a);
    return 0;
}