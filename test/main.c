#include "../main.h"
#include <stdio.h>
/**
 * main - main function
 * 
 * 
 */
void main(void){
    char a = 'H';
    char * b = "Hello World!" ;
    int count = 0;
    int n =0;
    double c = 2.7;
    //_printf("Hello %c %c World %c %s %%\n", a, 'b', 'e', "dayo");
    n = printf("%s%c%c%d\n","dayonh",a,a, -5674);
    printf("%s%c%c%i\n","dayonh",a,a, -5674);
    printf("%d\n", n);
    count = _printf("%s%c%c%i\n","dayonh",a,a, -5674);
    _printf("%s%c%c%d\n","dayonh",a,a, -5674);
    printf("%d\n", count);
    
}