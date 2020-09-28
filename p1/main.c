#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    system("mode con:cols=100 ");
    setlocale(LC_ALL,"portuguese") ;
    printf("Olá mundo!\n");
    printf("Nova linha do Olá mundo!\n");
    printf("linha inserida pelo usuario A\n");
    printf("Inserindo uma linha usuario B\n");
//>>>>>>> 12adfa11d04477d0511c33924f9019a06800f4f4

    return 0;
}
