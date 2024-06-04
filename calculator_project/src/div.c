#include "../inc/div.h"

int32_t division(int32_t num1, int32_t num2)
{
    if(num2 == 0){
        return -1;
    }
    else{
        return num1/num2;
    }
}