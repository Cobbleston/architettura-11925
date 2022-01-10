// Scrivere un programma che prende da linea di comando il nome di 2 file di testo, legge il primo e scrive sul secondo la lunghezza delle parole del primo, separate da uno spazio e con un a capo ogni volta il primo file va a capo. In questo esercizio una parola è una sequenza massimale di caratteri non spazio/tab/a capo.
// 
// | Es. file input            | Es. file output   |
// | :---                      | :---              |
// | Ciao mamma,               | 4 6               |
// | Guarda come mi diverto!   | 6 4 2 8           |


#include <stdio.h>

int main(int argc, char *argv[])
{
    // prima verifica, numero di argomenti abbastanza alto
    if (argc < 3)
    {
        printf("pochi argomenti");
        return 1;
    }

    FILE *fout = fopen(argv[2], "w"); // file aperto in scrittura
    FILE *fin = fopen(argv[1], "r"); // file aperto in lettura

    // seconda verifica, il file in input deve esistere
    if (fin == NULL)
    {
        printf("FILE NOT FOUND!");
        return 1;
    }

    // terza verifica, il file in input non deve essere vuoto
    if (feof(fin))
    {
        printf("file in input vuoto");
        return 1;
    }
    
    // metto nel file di output il numero di caratteri come richiesto
    int cont = 0;
    char c;
    while (!feof(fin))
    {
        fscanf(fin, "%c", &c);
        if (c == '\t')
        {
            printf("%d", cont);
            fprintf(fout, "%d", cont);
            printf("\t");
            fprintf(fout, "%c", c);
            cont = 0;
        }
        else if (c == ' ')
        {
            printf("%d", cont);
            fprintf(fout, "%d", cont);
            printf(" ");
            fprintf(fout, "%c", c);
            cont = 0;
        }
        else if (c == '\n')
        {
            printf("%d", cont);
            fprintf(fout, "%d", cont);
            printf("\n");
            fprintf(fout, "%c", c);
            cont = 0;
        }
        else
        {
            cont++;
        }
    }

    // chiudo i file
    fclose(fin);
    fclose(fout);
    return 0;
}