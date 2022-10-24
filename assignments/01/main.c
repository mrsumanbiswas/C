#include <stdio.h>

void gen_file(char const *words[]){}

int main(int argc, char const *argv[])
{
    if (argc > 1)
    {
        for (size_t i = 1; i < argc; i++)
        {
            printf("%s\n", argv[i]);
        }
        
    } else{
        printf("%d\n", argc);
    }
    return 0;
}
