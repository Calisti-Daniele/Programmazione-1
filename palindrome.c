#include <stdio.h>
#define maxChar 100

int main() {

    char stringa[maxChar];
    int i,j, lengthStringa, isPalindrome;
    char continua;

    do{

        isPalindrome = 0;
        lengthStringa = 0;

        printf("Inserisci la stringa: ");
        scanf("%s", &stringa);

        //Conto il numero di caratteri effettivi della stringa
        i=0;
        while(i<maxChar)
        {
            if(stringa[i] == '\0')
                break;

            lengthStringa++;
            i++;
        }


        //Controllo se è palindroma
        //Divido la stringa in due
        //Parto dall'inizio e dalla fine
        //Arrivo fino a metà della stringa
        //otto
        //|  |
        // ||
        for(i = 0, j = lengthStringa-1; i<lengthStringa/2 && j>=lengthStringa/2 ;i++,j--)
        {
            if(stringa[i] != stringa[j])
                break;

            isPalindrome = 1;
        }

        printf("La stringa %s %s",stringa, isPalindrome ? "è palindroma" : "non è palindroma");

        printf("\nVuoi continuare? [s/n]");
        scanf(" %c", &continua);

    } while (continua == 's');


    return 0;
}
