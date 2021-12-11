// Scrivere un programma che prende da linea di comando il nome di 2 file di testo e copia il primo sul secondo (il secondo viene creato se non esiste)

#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc < 3)
    {
        printf("pochi argomenti");
        return 1;
    }

    FILE *fin = fopen(argv[1], "r"); // file aperto in lettura
    FILE *fout = fopen(argv[2], "w"); // file aperto in scrittura
    
    if (fin == NULL)
    {
        printf("FILE NOT FOUND!");
        return 1;
    }
    while (!feof(fin))
    {
        char c;
        fscanf(fin, "%c", &c);
        printf("%c", c);
        fprintf(fout, "%c", c);
    }

    fclose(fin);
    fclose(fout);
    return 0;
}