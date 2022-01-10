// Scrivere un programma che prende un parametro da linea di comando e:
// - crea una lista di caratteri contenente i caratteri del parametro
// - elimina dalla lista il carattere in una posizione scelta dall’utente
// - stampa a video la lista risultante

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct lista
{
    char carattere;
    struct lista *next;
};

typedef struct lista *p_lista;


void stampalista(p_lista h)
{
    p_lista backup = h;
    while(backup != NULL)
    {
        printf("%c\n", backup->carattere);
        backup = backup->next;
    }
}


int main(int argc, char *argv[])
{
    // verifico di avere argv[1]
    if (argc < 2)
    {
        printf("POCHI ARGOMENTI");
        return 1;
    }
    p_lista head, tmp = malloc(sizeof(p_lista));

    // genero la lista
    for(int i = strlen(argv[1]); i >= 0; i--)
    {
        tmp = malloc(sizeof(p_lista));
        tmp->carattere = argv[1][i];
        tmp->next = head;
        head = tmp;
    }

    // prendo in input il valore da cancellare
    int n;
    scanf("%d", &n);

    // elimino il carattere in posizione n
    p_lista backup = head;
    int j = 0;
    bool fatto = false;
    // primo elemento?
    if (n == 0)
    {
        head = head->next;
    }
    else
    {
        while (backup->next != NULL && !fatto && j < strlen(argv[1])-1)
        {
            printf("%d", j);
            if(j == n - 1)
            {
                tmp = backup->next;
                backup->next = backup->next->next;
                free(tmp);
                fatto = true;
            }
            j++;
            backup = backup->next;
        }
    }
    

    stampalista(head);

    return 0;
}