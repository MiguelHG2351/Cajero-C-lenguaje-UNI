#include<string.h>

void login() {
    int i = 0;
    int password;
    int option;
    char caracter;
    char users[20];


    system("cls");
    printf("\n\n\t\tBienvenido al cajero ;)");
    printf("\n\n1. Iniciar Sesion\n");
    printf("\n\n2. Registrarse\n\n");
    printf("\n-->3. Salir\n");

    scanf("%i", &option);

    switch (option)
    {
    case 1:
    system("cls");
    printf("\n\n\t\tBienvenido al cajero ;)");
    printf("\n\n-->1. Iniciar Sesion\n");
    printf("\n\n2. Registrarse\n\n");
    printf("\n3. Salir\n");
    sleep(1);
    printf("\nIngrese usuario\n");
    scanf("%s", &users);
    printf("\nIngrese su password\n");
    scanf("%i", &password);
    validar(users, password);


    break;
    case 2:
        system("cls");
        printf("\n\n\t\tBienvenido al cajero ;)");
        printf("\n\n1. Iniciar Sesion\n");
        printf("\n\n-->2. Registrarse\n\n");
        printf("\n3. Salir\n");
        sleep(1);
        printf("\nIngrese usuario\n");
        scanf("%s", &users);
        printf("\nIngrese su password\n");
        scanf("%i", &password);
        sleep(2);
        userNew(users, password);
        break;
    }
}