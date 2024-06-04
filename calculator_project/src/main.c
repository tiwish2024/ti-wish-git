#include <stdio.h>
#include <stdint.h>
#include "../inc/add.h"
#include "../inc/sub.h"
#include "../inc/mul.h"
#include "../inc/div.h"
#include "../inc/menu.h"



int main()
{
    int32_t num1,num2,choice;
    
    printf("\n\rWelcome to the Calculator Project\n\r");
    while(1){
        printf("Enter num1 and num2 : ");
        scanf("%d %d",&num1,&num2);
        printCalculatorMenu();
        scanf("%d",&choice);
        if (choice ==1){
            printf("Result is : %d \n",addition(num1,num2));
        }
        else if (choice ==2){
            printf("Result is : %d \n",subtraction(num1,num2));
        }
        else if (choice ==3){
            printf("Result is : %d \n",division(num1,num2));
        }
        else if (choice ==4){
            printf("Result is : %d \n",multiplication(num1,num2));
        }
        else{
            printf("Invalid choice\n");
        }
    }
    return 0;
}