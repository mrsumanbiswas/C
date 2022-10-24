#include <stdio.h>

char *get_words(){}
void analyse(char const words[]){}
void gen_file(char const words[]){}

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
        analyse(get_words());
    }
    (argc > 1) ? analyse(*argv):analyse(get_words(*argv));
    return 0;
}

// gets words from console
char *get_words(){

}

void analyse(char const words[]){

}

void gen_file(char const words[]){

}