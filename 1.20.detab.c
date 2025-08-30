/* 1.20) Write a program detab that replaces tabs in the input with the proper number
of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns.
Should n be a variable or a symbolic parameter? */

#include <stdio.h>
#define TABSTOP 8
#define MAXLINE 100

int get_line(char line[]);
void print_line(char line[], int len);
void print_blanks(int count);

int main(){
   char current_line[100];
   int len;

   for (int i = 0; i < 10; i++){
        print_blanks(7);
        putchar('*');
    }
    putchar('\n');
    while ((len=get_line(current_line)) > 0){
      print_line(current_line, len);
   }   
}


int get_line(char line[]){
   int c, i;

   for (i = 1; (c = getchar()) != EOF && c != '\n'; i++){
      line[i] = c;   
   }

   if (c == '\n'){
      line[i] = c;
      i++; 
   } 

   line[i] = '\0';
   return i;
}

void print_blanks(int count){
    int i;

    for (i = 0; i < count; i++){
        putchar(' ');
    }
}

void print_line(char line[], int length){
   int i = 0;
   int pt = 0;
   int curr_pos = 0;

   for (i = 0; i < length - 1; i++){
        if (line[i] == '\t'){
            if (pt == 1){
                continue;
            }
            int step;
            if (curr_pos < TABSTOP){
                step = TABSTOP - i;
                print_blanks(step); 
                curr_pos += step;
            } else {
                step = ((curr_pos / TABSTOP)+1)*TABSTOP - curr_pos;
                print_blanks(step);
                curr_pos += step;
            }
            pt = 1;
        } else {
            pt = 0;
            putchar(line[i]);
            curr_pos++;
        }
   }
   
   putchar('\n');
}