#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    system("mode con:cols=100 ");
    setlocale(LC_ALL,"portuguese") ;
    printf("Ol� Mundo!\n");
    return 0;
}
