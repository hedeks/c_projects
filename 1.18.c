#include <stdio.h>

#define MAXLINE 100

int get__line(char line[], int limit);
void print_line(char line[], int len);

int main (){
    char current_line[MAXLINE];
    int len; 
    while ((len = get__line(current_line, MAXLINE)) > 0){
        // if (len > 80){
            print_line(current_line, len);
        // }
    }
    return 0;
}


int get__line(char s[], int limit){
    int c, i;
    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
        s[i] = c;
    }

    if (c == '\n'){
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}

void print_line(char line[], int len){
    int i = 0;
    int isFirstSpace = 1;
    int isStrStart = 1;
    for (i = 0; i < len - 1; ++i){
        if (line[i] == ' ' && isFirstSpace == 1){
            putchar(' ');
            isFirstSpace = 0;
        } 
        else if (line[i] == '\t' && isFirstSpace == 1){
            putchar(' ');
            isFirstSpace = 0;
        }
        else if (line[i] == '\n' && isStrStart == 0){
            putchar('\n');
            isStrStart = 1;
            isFirstSpace = 1;
        }
        else if (line[i] != '\t' && line[i] != ' ' && line[i] != '\n'){
            isStrStart = 0;
            isFirstSpace = 1;
            putchar(line[i]);
        }
    }
    putchar('\n');
}