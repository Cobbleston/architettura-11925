#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *fin;
    fin = fopen(argv[1], "r");
    FILE *fout;
    fout = fopen(argv[2], "w");
    char str[100];
    fgets(str, 100, fin);
    fprintf(fout, "%s", str);
    fclose(fin);
    fclose(fout);
}