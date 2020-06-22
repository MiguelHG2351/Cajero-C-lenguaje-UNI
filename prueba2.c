#include <stdio.h>


int regis(hola) {
    int elige;
    printf("Hoola");
    scanf("%i", &elige);
    switch (elige)
    {
    case 1:
        login();
        break;
    
    default:
    return 0;
        break;
    }
    getch();
    return 0; 
}

int login() {
    char hola[16];
    FILE * me;
    
    printf("Añade texto");
    scanf("%s", &hola);
    me = fopen("FILE.txt", "w");
    fprintf(me, "Anida esto we %s\n", hola);
    fclose(me);
    regis();
}

int main() {
    
    printf("Este proyect re escribe un archivo");
    login();

    return 0;
}