#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    system("mode con:cols=100 ");
    setlocale(LC_ALL,"portuguese") ;
    printf("Olá mundo!\n");
    printf("Nova linha do Olá mundo!\n");

    return 0;
}
