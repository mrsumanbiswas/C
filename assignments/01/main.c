#include <stdio.h>

char *get_words(){}
void analyse(char const words[]){}
void gen_file(char const words[]){}

int main(int argc, char const *argv[])
{
    (argc > 1) ? analyse(*argv):analyse(get_words(*argv));

    // for debug purpuse only
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

// gets words from console
char *get_words(){

}

// analyse the words || this is the main logic 
void analyse(char const words[]){

}

// generates a `files.txt` 
void gen_file(char const words[]){

}