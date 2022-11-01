#include <stdio.h>
#define numStringhe 2
#define maxChar 100
int main() {

    //Vettore di 2 stringhe (ogni stringa max 100 caratteri)
    //stringa[0] = {'C','i','a','o'}
    //stringa[1] = {'C','i','a','o',' ','M','o','n','d','o','!'}
    char stringa[numStringhe][maxChar];
    char continua;

    do{
        //s1 e s2 sono le lunghezze delle stringhe
        int s1 = 0, s2 = 0, i,j, isPrefisso = 0;

        for(i=0;i<numStringhe;i++)
        {
            printf("Inserisci %d* stringa: ", (i+1));
            scanf("%s", &stringa[i]);
        }

        //Vedo quale stringa ha meno caratteri, dato che se una stringa è prefisso
        //sicuramente avrà meno caratteri
        for(i=0;i<numStringhe; i++)
        {
            j = 0;
            while(j<maxChar)
            {
                //Finchè non c'è il carattere terminatore
                if(stringa[i][j] != '\0')
                    i == 0 ? s1++ : s2++;
                else
                    break;

                j++;
            }
        }
        //Da vedere se prima stringa è prefisso
        if(s1<s2)
        {
            for(i=0;i<s1;i++)
            {
                if(stringa[0][i] != stringa[1][i])
                    break;

                isPrefisso = 1;
            }
        }else if(s2<s1) //Da vedere se seconda stringa è prefisso
        {
            for(i=0;i<s2;i++)
            {
                if(stringa[1][i] != stringa[0][i])
                    break;

                isPrefisso = 1;
            }
        }else  //Hanno stessa lunghezza, vedere se sono uguali
        {
            for(i=0;i<s1;i++)
            {
                if(stringa[0][i] != stringa[1][i])
                    break;

                isPrefisso = 1;
            }
        }


        if(isPrefisso)
            printf("%s è prefisso di %s", (s1<s2 ? stringa[0] : stringa[1]), (s1<s2 ? stringa[1] : stringa[0]));
        else
            printf("Tra le stringhe non esiste un prefisso");

        printf("\nVuoi continuare? [s/n]");
        scanf(" %c", &continua);
    }while(continua == 's');

    return 0;
}
