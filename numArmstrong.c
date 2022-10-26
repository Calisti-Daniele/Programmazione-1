/*
 * Dato un numero, verificare che sia di armstrong
 *
 * k = numCifre
 *
 * n = 153
 * k = 3
 * armstrong = 1^3 + 5^3 è 3^3 = 153
 *
 * */
#include <stdio.h>
#include <math.h>

int main() {

    int n, appoN, daConfrontare, armstrong = 0, i, k = 0;
    char continua;  //Lo uso per far verificare più volte che il num sia di armstrong

    //Ciclo che continua fin quando l'utente vuole inserire un numero
    do{
        //Prendo l'input con vari check
        do{
            printf("Inserisci un numero maggiore o uguale di 0: ");
            scanf("%d", &n);
            appoN = n;  //appoN la uso per contare il num di cifre
            daConfrontare = n;  //Lo uso per la condizione finale
        }while(n<0);

        //Prendo il numero di cifre

        //Se il numero è tra 0 e 9 è sicuramente un numero di armstrong
        if(n>=0 && n<=9)
            printf("%d è un numero di armstrong!\n", n);
        else
        {
            //Prendo il num di cifre
            while(appoN != 0)
            {
                appoN /= 10;
                k++;
            }

            //k sarà il num di cifre

            //Per ogni cifra la elevo a k e la aggiungo ad armstrong
            while(n != 0)
            {
                armstrong += pow(n%10,k);
                n /= 10;
            }

            if(armstrong == daConfrontare)
                printf("%d è un numero di armstrong!\n",daConfrontare);
            else
                printf("%d non è un numero di armstrong!\n",daConfrontare);

        }

        //chiedo all'utente se vuole continuare
        printf("Vuoi continuare? [s/n] ");
        scanf(" %c", &continua);
    }while(continua == 's');

    return 0;
}
