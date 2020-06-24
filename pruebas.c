#include <stdio.h>

#include <stdlib.h>
#include <dos.h>

struct initialState
{
    char user[100];
    int pass;
    int agua;
    int luz;
    float money;
    float adelanto;
    float transferencia;
    float claro;
    float movistar;
} initial[20];

void ficha() {
FILE *fp;
   int c;
   char array[100];
   char array2[100];
   int i = 1;
  
   fp = fopen("users.txt","r");
   if(fp == NULL) {
      perror("Error in opening file");
      return(-1);
   }
   
   fscanf(fp, "%s %s", initial[1].user, initial[2].user);
   printf("%s\n", initial[1].user);
   printf("%s", initial[2].user);
   fclose(fp);
   sleep(1);
   newUser();
}

int newUser() {
   FILE * new;
   system("cls");
   new = fopen("users.txt", "w");
   fprintf(new, "Hola Mundo\n");
   fclose(new);
   sleep(5);
   ficha();
}

int main()
{
   

   ficha();

    getch();
	return 0;
}