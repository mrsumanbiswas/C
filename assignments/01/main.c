#include <stdio.h>
#include <string.h>

#define MODE "debug"

void analyse(int, char *[]);
void gen_file(int, char *[]);

int main(int argc, char *argv[])
{
    (argc > 1) ? analyse(argc, argv) : printf("Please give the items as argument.\n");

    // for debug purpuse only
    if (MODE != "debug")
        if (argc > 1)
        {
            for (int i = 1; i < argc; i++)
            {
                printf("%s\n", argv[i]);
            }
        }
        else
        {
            printf("%d\n", argc);
        }

    return 0;
}

// analyse the words || this is the main logic
void analyse(int len, char *words[])
{
    for (int i = 1; i < len; i++)
    {
        if (words[i][0] == 'A')
        {
            words[i][0] = ' ';
            printf("Add -> %s\n", words[i]);
            words[i][0] = 'A';
        }
        else if (words[i][0] == 'D')
        {
            words[i][0] = ' ';
            printf("Delete -> %s\n", words[i]);
            words[i][0] = 'D';
        }
    }
    gen_file(len, words);
}

// generates a `files.txt`
void gen_file(int len, char *words[])
{
    FILE *fp;
    int col = 0;
    char lines[1000][1000];

    // reading the file
    fp = fopen("list.txt", "a+");
    if (fp)
    {
        char con[1000];
        while (fgets(con, 1000, fp) != NULL) // reading file content
        {
            strcpy(lines[col], con);
            col++;
        }
    }
    fclose(fp); // closing of file

    // manupulations
    int line = 0;
    char content[1000][1000];

    if (col)
    {
        for (int i = 0; i < col; i++)
        {
            for (int j = 0; j < len; j++)
            {

                if (words[j][0] == 'D')
                {
                    words[j][0] = ' ';
                    if (lines[i] == words[j])
                    {

                        printf("Delete -> %s\n", words[i]);
                    }
                }
                else if (words[j][0] == 'A')
                {
                    words[j][0] = ' ';
                    if (lines[i] != words[j])
                    {
                        strcpy(content[line], words[j]);
                    }
                    else
                    {
                        strcpy(content[line], words[j]);
                    }
                    line++;
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < len; i++)
        {
            if (words[i][0] == 'A')
            {
                words[i][0] = ' ';
                strcpy(content[line], words[i]);
                line++;
            }
        }
    }

    // updating the file
    fp = fopen("list.txt", "w+");
    for (int x = 0; x < line; x++)
    {
        fprintf(fp, "%s\n", content[x]); // giving conten
    }
    fclose(fp); // closing of file
}