#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]){
    char ch;
    
    while((ch = getopt(argc, argv, "a:d")) != EOF){ //a and d will be the options which I will provide from my command line
        switch (ch) {
            case 'a':
                printf("Got a and it's argument: %s\n", optarg);// optarg is the value that I will provide after specifying the a option
                break;
            case 'd':
                printf("Got the d option from the cmd");
                break;
            default:
                printf("No good option stranger");
                break;
        }
    }
    argc-= optind;
    argv += optind;

    return 0;
}