#include <stdio.h>

#define MODE "debug"


char *get_words();
void analyse(const char[]);
void gen_file(const char[]);

int main(int argc, char const *argv[])
{
    (argc > 1) ? analyse(*argv):analyse(get_words());

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
    char text[]="";
    for (size_t i = 0; i < 10; i++)
    {

        text[i] = 's';
        printf("%c\n",text[i]);
    }
    
    // getline();
    printf("%s",text);
    return text;
}

// analyse the words || this is the main logic 
void analyse(const char words[]){

}

// generates a `files.txt` 
void gen_file(const char words[]){

}