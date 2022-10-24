#include <stdio.h>

#define MODE "debug"

size_t len = 0;

char get_words();
void analyse(size_t ,const char[]);
void gen_file(size_t ,const char[]);

int main(int argc, char const *argv[])
{
    (argc > 1) ? analyse(argc,*argv):analyse(len,get_words());

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
char get_words(){
    char text[]="asdf sdf s";
    for (size_t i = 0; i < 0; i++)
    {

        text[i] = 's';
        printf("%c\n",text[i]);
    }
    
    // getline();
    printf("%s",text);
    return *text;
}

// analyse the words || this is the main logic 
void analyse(size_t len,const char words[]){

}

// generates a `files.txt` 
void gen_file(size_t len,const char words[]){

}