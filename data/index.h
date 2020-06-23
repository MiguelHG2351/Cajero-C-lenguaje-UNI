


int  pago(pago, i) {
    int pin = 0;
    switch (pago)
    {
    case 1:
        printf("\nUsted tiene una cuota de 32 recibos pendientes\n");
        if(initial[i].agua == 0) {
            printf("Felicidades! no debe nada\n");
        } else {
        initial[i].money = initial[i].money - initial[i].agua;
        initial[i].agua = 0;
        perfil(i, initial[i].user);
        }
        break;
    case 2:
        printf("\nUsted tiene una cuota de 32 recibos pendientes\n");
        printf("Casi no haya servicio ");
        if(initial[i].luz == 0) {
            printf("Felicidades! no debe nada\n");
            system("pause");
            perfil(i, initial[i].user);
        } else {
            initial[i].money = initial[i].money - initial[i].luz;
            initial[i].luz = 0;
            system("pause");
            perfil(i, initial[i].user);
        }
        break;
    case 3:
        printf("\nIngrese el precio de la recarga\n");
        scanf("%i", &pin);
        pin = pin;
        initial[i].claro++;
        initial[i].money = initial[i].money - pin;
        printf("\nSe ha debitado el 90 de su recarga por deuda pendiente\n");
        perfil(i, initial[i].user);
        break;
    case 4:
        printf("\nIngrese el precio de la recarga\n");
        scanf("%i", &pin);
        pin = pin;
        initial[i].movistar = initial[i].money - pin;
        initial[i].money = initial[i].money;
        printf("\nSe ha debitado el 90 de su recarga por deuda pendiente\n");
        perfil(i, initial[i].user);
        break;
    case 5:
        initial[i].transferencia = initial[i].money - 50;
        initial[i].money = initial[i].money;
        perfil(i, initial[i].user);
        break;
    case 6:
        initial[i].adelanto = initial[i].money - 50;
        initial[i].money = initial[i].money;
        perfil(i, initial[i].user);
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
