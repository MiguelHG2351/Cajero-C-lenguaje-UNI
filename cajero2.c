
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <graphics.h>
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

int perfil(int i, char user) {
    printf("Bienvendio %s\n", user);
    getch();
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
    printf("\n%i\n", initial[1].pass);
    printf("\n%i\n", initial[2].pass);
    printf("\n%s\n", initial[1].user);
    printf("\n%s\n", initial[2].user);

    sleep(5);
    response = -1;
    for ( i = 1; i <= 20; i++)
    {
        if (strcmp(user,initial[i].user) > 0 && password == initial[i].pass)
        {
            response = i;
            break;
        }
        
    }
    
    if (response >=0)
    {
        printf("\n\tBienvenido!!!, PAGA TUS DEUDAS >:V\n");
        sleep(2);
        perfil(i, initial[i].user);
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
            printf("\n%s\n", user);
            sleep(5);
    for ( i = 1; i <= 20; i++)
    {
        if(strcmp(user, initial[i].user) > 0 && strlen(initial[i].user) == 0) {
            initial[i].user = user;
            initial[i].pass = password;
            printf("Bienvenido: %s cuenta creada con éxito!!", initial[i].user);
            sleep(2);
            login();
            break;
        } else if(strlen(initial[i].user) > 0 && strlen(initial[i-1].user) > 0) {
            printf("El usuario ya existe");
            sleep(2);
            login();
        }
    }
    
}

int main() {
    login();
    return 0;
}