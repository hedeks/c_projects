#include <stdio.h>

int get__line(char line[]);
void print_line(char line[], int len);
void reverse(char line[], int len);

int main(){
   char current_line[100];
   int len;

   while ((len=get__line(current_line)) > 0){
      reverse(current_line, len);
      print_line(current_line, len);
   }   
}

int get__line(char line[]){
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

void print_line(char line[], int length){
   int i = 0;
   
   for (i=0; i < length - 1; i++){
      putchar(line[i]);  
   }
   
   putchar('\n');
}

void reverse(char line[], int length){
   char tmp[length - 1];
   int i, s;
   s = length - 2;

   for (i = 0; i < length - 2;){
      tmp[i] = line[s];
      s--;
      i++;
   }

   for (i = 0; i < length - 2; i++){
       line[i] = tmp[i];
   }
   line[i++] = '\0';
}
