
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <graphics.h>
#include "login/index.h"
#include "login/validar.h"

struct BDF
{
    int pago;
    int precio;
} BDF[30];

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
    struct BDF bdf;
} initial[20];

int reducer(state)
{
    state = 0;
    return state;
    return 0;
}

int perfil(int i, char user)
{
    system("cls");
    initial[i].bdf.pago = 20;
    printf("Bienvendio %s\n", user);
    printf("tiene múltiples opciones");
    printf("\t\t\n1.Pagar Agua\t\t2.Pagar luz\n");
    printf("\t\t\n3.Recarga Claro\t\t4.Recarga Movistar\n");
    printf("\t\t\n5.Transferir\t\t6.Adelantar\n");
    printf("\t\t\n7.Cambiar PIN\t\t8.Salir\n");
    getch();
}

int validar(user, password)
{
    int i;
    int response;

    system("cls");
    sleep(1);
    printf("\n[=");
    sleep(1);
    printf("=");
    printf("===========");
    sleep(.5);
    printf("=================");
    sleep(.5);
    printf("==============================]");
    sleep(.5);
    system("cls");
    
    printf("\n Compiled Succefull!");
    printf("\n%i\n", initial[2].pass);
    printf("\n%s\n", initial[2].user);
    printf("\n%s\n", user);
    printf("\n%i\n", password);

    sleep(5);
    response = -1;
    for (i = 1; i <= 20; i++)
    {
        if (i == 1 && strcmp(user, initial[i].user) == 0 && password == initial[i].pass)
        {
            response = i;
            break;
        } else if(strcmp(user, initial[i].user) == 0 && password == initial[i].pass && strlen(initial[i-1].user) > 0) {
            response = i;
            break;
        }
    }

    if (response >= 0)
    {
        printf("\n\tBienvenido!!!, PAGA TUS DEUDAS >:V\n");
        sleep(2);
        perfil(i, initial[i].user);
    }
    else
    {
        printf("\n\n\tNo existe, no lo hay xd\n\n");
        printf("\tQuieres registrarte y empezar a endeudarte?\n");
        printf("\t1. Si\n");
        printf("\t2. No\n");
        scanf("%i", &response);
        if (response == 1)
        {
            login();
        }
        else
        {
            printf("Adios y no vuelva");
            getch();
        }
    }
}

int userNew(user, password)
{
    int i = 1;
    int hola;
    int response = -1;
    fflush(stdin);
    system("cls");
    printf("\n%s\n", user);
    sleep(1);
    for (i = 1; i<= 20; i++)
    {
        if (strlen(initial[i].user) == 0 && strlen(user) > 0)
        {
            break;
        }
    }
    printf("\n%i\n", i);
    if(i >= 1) {
        initial[i].user = user;
        initial[i].pass = password;
        printf("Bienvenido: %i cuenta creada con éxito!!", initial[i].pass);
        sleep(2);
        login();
    } else {
        printf("Ha ocurrido un error");
        printf("\nNo se preocupe puede volver a intentarlo\n");
        sleep(1);
        login();
    }
}

int main()
{
    login();
    return 0;
}
