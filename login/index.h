
void login() {
    char caracter;
    int i = 0;
    char password[16];
    int option;
    char users[20];

    // Defino el estado de la aplicació

    system("cls");
    system("color 3");
    printf("\n\n\t\tBienvenido al cajero ;)");
    printf("\n\n1. Iniciar Sesion\n");
    printf("\n\n2. Registrarse\n\n");

    scanf("%i", &option);

    switch (option)
    {
    case 1:

    printf("\nIngrese usuario\n");
    scanf("%s", &users);
    printf("\nIngrese su password\n");
    while (caracter = getch())
    {
        if (caracter == 13) 
        {
            password[i] = "\0";
            break;
        } else if (caracter == 8)
        {
        if (i > 0)
        {
            i--;
            printf("\b \b");
        }
        } else
        {
            if (i <= 16)
            {
                password[i] = caracter;
                printf("*");
                i++;
            }
                
            }
            
        }

        createStore(users, password);
        // getch();


        break;
    case 2:
        printf("\nIngrese usuario\n");
        scanf("%s", &users);
        printf("\nIngrese su password\n");
            while (caracter = getch())
            {
                if (caracter == 13) 
                {
                    password[i] = "\0";
                    break;
                } else if (caracter == 8)
                {
                if (i > 0)
                {
                    i--;
                    printf("\b \b");
                }
                } else
                {
                if (i <= 16)
                {
                    password[i] = caracter;
                    printf("*");
                    i++;
                }
                
            }
            
        }
        break;
    }

}