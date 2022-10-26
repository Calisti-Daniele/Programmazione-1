#include <stdio.h>
#include <math.h>

int main() {

    int n, nR, i = -1, appoN;
    const int divisore = 10;
    char continua;

    do{
        nR = 0;
        do
        {
            printf("Inserisci numero: ");
            scanf("%d",&n);
        }while(n<0);

        appoN = n;

        //Conto le cifre di n
        while(appoN != 0)
        {
            appoN /= divisore;
            i++;
        }


        while(n != 0)
        {
            //Prendo l'ultima cifra
            int appo = n % divisore;

            //Aggiorno n per il test loop
            n /= divisore;

            //Aggiungo la cifra cambiandola di posizione
            nR += appo * pow(10,i);
            i--;
        }

        printf("Inverso: %d\n", nR);

        printf("Si desidera inserire un nuovo numero? [s/n]");
        scanf(" %c", &continua);

    } while (continua == 's');


}
