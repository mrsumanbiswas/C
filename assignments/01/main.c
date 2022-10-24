#include <stdio.h>
#include <string.h>

#define MODE "debug"
char** get_words(int);
void analyse(int , char *[]);
void gen_file(int , char[]);

int main(int argc, char  *argv[])
{
    (argc > 1) ? analyse(argc,argv):analyse(argc,get_words(argc));

    // for debug purpuse only
    if (MODE != "debug")
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
 char** get_words(int len){
    char text[]="asdf sdf s";
    char* words = strtok(text," ");
    while( strtok != NULL){
        words = strtok(NULL," ");
        printf("%s\n",words);
        printf("%d\n",len);
        len++;
    }
    // return &words;
}

// analyse the words || this is the main logic 
void analyse(int len, char *words[]){
    for (int i = 1; i < len; i++)
    {
        printf("at %d -> %s\n",i,words[i]);
    }
    
}

// generates a `files.txt` 
void gen_file(int len, char words[]){

}