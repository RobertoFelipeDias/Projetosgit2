#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    system("mode con:cols=100 ");
    setlocale(LC_ALL,"portuguese") ;
    printf("Ol� mundo!\n");
    printf("Nova linha do Ol� mundo!\n");
    printf("linha inserida pelo usuario A\n");

    return 0;
}
