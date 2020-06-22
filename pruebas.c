#include <stdio.h>
#include <stdlib.h>
#include <dos.h>

void ficha() {
FILE *fp;
   int c;
  
   fp = fopen("file.txt","r");
   if(fp == NULL) {
      perror("Error in opening file");
      return(-1);
   }
   
   while(1) {
      c = fgetc(fp);
      if( feof(fp) ) { 
         break ;
      }
      printf("%c", c);
   }
   fclose(fp);
}

int main()
{
   
struct initialState
{
    char user;
    int pass;
    int agua;
    int luz;
    float money;
    float adelanto;
    float transferencia;
    float claro;
    float movistar;
} initial[20];

   ficha();

    getch();
	return 0;
}