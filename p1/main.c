#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    system("mode con:cols=100 ");
    setlocale(LC_ALL,"portuguese") ;
    printf("Ol� mundo!\n");
    printf("Nova linha do Ol� mundo!\n");
    printf("Inserindo uma linha usuario B\n");

    return 0;
}
