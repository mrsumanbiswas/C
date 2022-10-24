#include <stdio.h>

#define MODE "debug"

char* get_words(int);
void analyse(int ,const char[]);
void gen_file(int ,const char[]);

int main(int argc, char const *argv[])
{
    (argc > 1) ? analyse(argc,*argv):analyse(argc,get_words(argc));

    // for debug purpuse only
    if (MODE == "debug")
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            printf("%s\n", argv[i]);
        }        
    } else{
        printf("%d\n", argc);
    }

    return 0;
}

// gets words from console
char* get_words(int len){
    char text[]="asdf sdf s";
    for (int i = 0; i < 0; i++)
    {

        text[i] = 's';
        printf("%c\n",text[i]);
    }
    len = 5;
    // getline();
    // printf("%s",text);
    return text;
}

// analyse the words || this is the main logic 
void analyse(int len,const char words[]){
    printf("%d",len);
}

// generates a `files.txt` 
void gen_file(int len,const char words[]){

}