#include <stdio.h>

int main(void)
{
   int ore,minuti,secondi,NumeroSecondi ;
    printf("inserisci un valore espresso in secondi : \n");
    scanf("%d",&NumeroSecondi);
    ore = NumeroSecondi/3600 ;
    NumeroSecondi =  NumeroSecondi-(ore*3600);
    minuti = NumeroSecondi /60 ;
    secondi = NumeroSecondi - (minuti*60);

    printf("%d:%d:%d",ore,minuti,secondi);
    return 0;
}
