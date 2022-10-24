#include <stdio.h>

#define MODE "debugd"


char *get_words();
void analyse(const char *);
void gen_file(char *);

int main(int argc, char const *argv[])
{
    (argc > 1) ? analyse(*argv):analyse(get_words(*argv));

    // for debug purpuse only
    if (MODE == "debug")
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
    char text[5];
    // getline();
    return &text;
}

// analyse the words || this is the main logic 
void analyse(const char words[]){

}

// generates a `files.txt` 
void gen_file(char words[]){

}