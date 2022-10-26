/*
 *  Dato un numero intero in input, verificare che sia primo
 */
#include <stdio.h>
#include <math.h>


int main() {

    int n, isPrimo, i;
    char continua;

    do{

        isPrimo = 1;

        do {
            printf("Inserisci il numero: ");
            scanf("%d", &n);
        }while(n<2);

        //Scorro tutti i multipli di n
        for(i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                isPrimo = 0;
                break;
            }
        }

        if(isPrimo)
            printf("Il numero %d è primo\n", n);
        else
            printf("Il numero %d non è primo\n", n);

        printf("Si desidera inserire un nuovo numero? [s/n]");
        scanf(" %c", &continua);

    }while(continua == 's');

    return 0;
}
