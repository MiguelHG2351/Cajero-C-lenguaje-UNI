#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include "login/index.h"
// #include <graphics.h>

// Métodología LIFO Last-in, first-out

struct initialState
{
    char user;
    char pass;
    int agua; // Recibos pagados
    int luz; // recibos pagados
    float money; // Dinero total
    float adelanto; // Saldo total menos el adelanto
    float claro; // gasto en recarga
    float movistar; // gasto en recarga
    char bancos[4]; // deposito de los bancos
    /* O es BANPRO, 1 BDF, 2 LAFISE, AVANZ, FICOHSA */
    
}initialState[20];

int reducer(int state, char action) {
    state = 0; // El estado en 0 es Log out y 1 Login
    return state; // return response
}



        // printf("%s\n", submit.user);
void createStore(user, password) {
    
    int i;
    int response;

    system("cls");
    sleep(1);
    printf("\n[#");
    sleep(1);
    printf("#");
    printf("###########");
    sleep(1);
    printf("##########################]");
    sleep(1);
    system("cls");
    system("color 2");
    printf("\n Compiled Succefull!");
    sleep(1);
    system("color 3");

    for ( i = 0; i <= 20; i++)
    {
        if(initialState[i].user == user && initialState[i].pass == password ){
            response = 1;
        } else {
            response = 0;
        }
    }
    if (response)
    {
        printf("Bienvenido, PAGA TUS DEUDAS >:V\n");
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
        }
    }
}


int main() {

    login();
    // printf("\nLa clave es: %s\n", password);

    return 0;
}