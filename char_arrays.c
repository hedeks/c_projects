#include <stdio.h>

#define MAXLINE 1000

int getline_custom(char line[], int limit);
void copy(char to[], char from[]);

int char_arrays_main(){
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    max = 0;

    while ((len = getline_custom(line, MAXLINE)) > 0){
        if (len > max){
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0){
        printf("the longest string has length: %d\n%s", max, longest);
    }
    return 0;
}


int getline_custom(char s[], int limit){
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


void copy(char to[], char from[]){
    int i;
    i = 0;
    while((to[i] = from[i]) != '\0'){
        ++i;
    }
}