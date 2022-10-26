/*
 * Dato un numero maggiore di 0, indicare se è perfetto o no
 */

#include <stdio.h>

int main() {

    int sommaN = 1, i, n;
    char continua;

    do{

        do {
            printf("Inserisci un numero maggiore o uguale a 0: ");
            scanf("%d", &n);
        }while(n<0);

        sommaN += (!(n%2) ? 2 : 0);

        for(i=3; i<=n/2;i++)
            sommaN += (!(n%i) ? i : 0);
        //se sommaN == n allora stampa perfetto altrimenti non perfetto
        printf("%d è un numero %s", n, (sommaN == n ? "perfetto\n" : "non perfetto\n"));

        //chiedo all'utente se vuole continuare
        printf("Vuoi continuare? [s/n] ");
        scanf(" %c", &continua);

    } while (continua == 's');



    return 0;
}
