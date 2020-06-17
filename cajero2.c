#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include "login/index.h"


struct initialState
{
    char user;
    int pass;
    int agua; 
    int luz; 
    float money; 
    float adelanto; 
    float claro; 
    float movistar;     
} initial[20];


int reducer(int state, char action) {
    state = 0;
    return state;
    return 0;
}

void perfil() {
    printf("Bienvendio\n");

}

int validar(char user, int password) {
    int i;
    int response;

    system("cls");
    sleep(1);
    printf("\n[=");
    sleep(1);
    printf("=");
    printf("===========");
    sleep(1);
    printf("=================");
    sleep(1);
    printf("==============================]");
    sleep(1);
    system("cls");
    textcolor(GREEN);printf("\n Compiled Succefull!");
    printf("%i", password);    
    sleep(2);

    for ( i = 0; i < 20; i++)
    {
        if (strcmp(user,initial[i].user) == 0&& password == initial[i].pass)
        {
            response = 1;
        }
        
    }
    
    
    if (response  >0)
    {
        printf("\nBienvenido, PAGA TUS DEUDAS >:V\n");
        sleep(2);
        perfil();
    } else
    {
        printf("\n\n\tNo existe, no lo hay xd\n\n");
        printf("\tQuieres registrarte y empezar a endeudarte?\n");
        printf("\t1. Si\n");
        printf("\t2. No\n");
        scanf("%i", &response);
        if (response == 1)
        {
            login();
        } else {
            printf("Adios y no vuelva");
            getch();
        }
    }

}

int userNew(char user, int password) {
    int i = 1;
    system("cls");
    initial[i].user = user;
    initial[i].pass = password;
    printf("\n%i\n", password);
    printf("Bienvenido: %s cuenta creada con éxito!!", initial[i].user);
    sleep(2);
    login();
}

int main() {
    login();
    return 0;
}