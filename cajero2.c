#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include <string.h>
#include "login/index.h"

struct BDF
{
    int pago;
    int deuda;
} BDF[20];
struct Ficohsa
{
    int pago;
    int deuda;
} Ficohsa[20];
struct Lafise
{
    int pago;
    int deuda;
} Lafise[20];
struct Avanz
{
    int pago;
    int deuda;
} Avanz[20];
struct Banpro
{
    int pago;
    int deuda;
} Banpro[20];

struct initialState
{
    char user[20];
    int pass;
    float agua;
    float luz;
    float money;
    float adelanto;
    float transferencia;
    float claro;
    float movistar;
    struct BDF bdf;
    struct Ficohsa ficohsa;
    struct Lafise lafise;
    struct Avanz avanz;
    struct Banpro banpro;
} initial[20];

int water(i, lenguaje) {
    if (lenguaje == 1)
    {
        initial[i].agua == 50 * lenguaje;
        printf("\n\n");
        initial[i].money = initial[i].money -  initial[i].agua;
        printf("Lo sentimos el límite de pago fue ayer, quiere pagar reconexiom?");
        return 0;
    } else {
        initial[i].agua = 50;
        return 0;
    }


    return 0;
}

int pago(pago, leng, i) {
    int pin = 0;
    switch (pago)
    {
    case 1:
        printf("\nUsted tiene una cuota de 32 recibos pendientes\n");
        initial[i].agua = initial[i].money - 50;
        initial[i].money = initial[i].money * leng;
        break;
    case 2:
        printf("\nUsted tiene una cuota de 32 recibos pendientes\n");
        initial[i].luz = initial[i].money - 50;
        initial[i].money = initial[i].money * leng;
        break;
    case 3:
        printf("\nIngrese el precio de la recarga\n");
        scanf("%i", &pin);
        pin = pin * leng;
        initial[i].claro = initial[i].money - pin;
        initial[i].money = initial[i].money * leng;
        printf("\nSe ha debitado el 90 de su recarga por deuda pendiente\n");
        break;
    case 4:
        printf("\nIngrese el precio de la recarga\n");
        scanf("%i", &pin);
        pin = pin * leng;
        initial[i].movistar = initial[i].money - pin;
        initial[i].money = initial[i].money * leng;
        printf("\nSe ha debitado el 90 de su recarga por deuda pendiente\n");
        break;
    case 5:
        initial[i].transferencia = initial[i].money - 50;
        initial[i].money = initial[i].money * leng;
        break;
    case 6:
        initial[i].adelanto = initial[i].money - 50;
        initial[i].money = initial[i].money * leng;
        break;
    case 7:
        printf("Ingrese el nuevo pin");
        scanf("%i", &pin);
        initial[i].pass = pin;
        printf("Pin cambiado");
        login();
        break;
    default:
        break;
    }
}

int perfil(i, user)
{
    int option;
    int lenguaje;
    system("cls");
    printf("\t\tAntes de inicar tu cuenta, como quieres configurarla?\n");
    printf("1. Cordoba");
    printf("2. Dolar");
    scanf("%i", &option);
    system("cls");
    switch (option)
    {
    case 1:
        lenguaje = 34.32;
        break;
    case 2:
        lenguaje = 1;
        break;
    default:
        lenguaje = 1;
        break;
    }
    option = 0;
    initial[i].money = 5000 * lenguaje;
    printf("\t\tBienvendio %s\n", initial[i].user);
    printf("\t\ttiene múltiples opciones\n");
    printf("\t\t\n1.Pagar Agua\t\t2.Pagar luz\n");
    printf("\t\t\n3.Recarga Claro\t\t4.Recarga Movistar\n");
    printf("\t\t\n5.Transferir\t\t6.Adelantar\n");
    printf("\t\t\n7.Cambiar PIN\t\t8.Salir\n");
    scanf("%i", &option);
    switch (option)
    {
    case 1:
        pago(1, lenguaje, i);
        break;
    case 2:
        pago(2, lenguaje, i);
        break;
    case 3:
        pago(3, lenguaje, i);
        break;
    case 4:
        pago(4, lenguaje, i);
        break;
    case 5:
        pago(5, lenguaje, i);
        break;
    case 6:
        pago(6, lenguaje, i);
        break;
    case 7:
        pago(7, lenguaje, i);
        break;
    case 8:
        login();
    default:
        break;
    }
    getch();
}

int validar(name, password)
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
    sleep(1);
    printf("==============================]");
    sleep(2);
    system("cls");
    printf("\n Compiled Succefull!");
    printf("\n%i\n", initial[3].pass);
    printf("\n%s\n", initial[3].user);
    printf("\n%s\n", name);
    printf("\n%i\n", password);

    sleep(5);
    response = -1;
    for (i = 1; i <= 20; i++)
    {
        if (i == 1 && strcmp(name, initial[i].user) == 0 && password == initial[i].pass)
        {
            response = i;
            break;
        } else if(strcmp(name, initial[i].user) == 0 && password == initial[i].pass && strlen(initial[i-1].user) > 0) {
            response = i;
            break;
        }
    }

    if (response >= 0)
    {
        printf("\n\tBienvenido!!!, PAGA TUS DEUDAS >:V\n");
        printf("%i", i);
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

int userNew(user, key)
{
    int i = 1;
    int hola;
    int response = -1;
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
    if(i >= 1) {
    printf("\n%i\n", i);
        strcpy(initial[i].user, user);
        initial[i].pass = key;
        printf("Bienvenido: %s cuenta creada con éxito!!", initial[i].user);
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