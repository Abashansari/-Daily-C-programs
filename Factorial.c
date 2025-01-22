#include<stdio.h>
int main(){
    //-------------------Declaring a variable------------------------------------------------------------->
    int num,i,fact=1;
    //-------------------Asking user for input--------------------------------------------------------->
    printf("Enter the number to find the factorial: ");
    //-----------------------user input------------------------------------------------------------->
    scanf("%d",&num);

    //-----------------For Loop------------------------------------------------------------------->
    for(i=1;i<=num;i++){
        fact= fact*i;
    }
     printf("The factroial of %d is %d",num,fact);
}