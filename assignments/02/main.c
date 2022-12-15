#include <stdio.h>
#include <string.h>

int main()
{
    int lines = 0;
    char text[lines][1024], fileName[25];
    char YN;

    printf("How many lines do you want to write ?\n> ");
    scanf("%d", &lines);

    if (lines)
    {
        char temp[256];
        for (int i = 0; i < lines; i++)
        {
            printf("%d | ", i + 1);
            scanf("%s", temp);
            strcpy(text[i], temp);
        }
    }
    else
    {
        printf("No lines to write\n");
    }

    printf("Do you want to save it ?(Y/N)\n> ");
    scanf("%s", &YN);

    if (YN == 'N' || YN == 'n')
    {
        printf("s");
    }

    return 0;
}