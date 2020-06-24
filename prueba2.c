#include <stdio.h>

struct corre {
    float core;
} corre[2];

int login() {
    char err[16];
    int holas;
    FILE * me;
    me = fopen("riales.txt", "r");
    for(holas = 1; holas <= 2; holas++) {
        fscanf(me, "%f", &corre[holas].core);
    }
    fclose(me);
	printf("%.2f\n" , corre[1].core);
    getch();
}

int main() {
	int response = 1;
	system("cls");
    printf("Este proyect re escribe un archivo");

            response ? printf("error\n") : printf("hola\n");
  getch();
    return 0;
}