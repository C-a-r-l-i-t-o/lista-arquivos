#include <stdio.h>




int main()
{
    FILE *file, *entrada;

    if ((file = fopen("arquivo.txt", "w")) == NULL)
    {
        printf("Error :file not found\n");
        return 0;
    }
    char p[100] = "Beto 10 10";

    while (strlen(fgets(p)) > 0)
    {
        fputs(p, file);
        fputs("\n", file);
    }

    fclose(file);

    
    return 0;
}