#include <stdio.h>

struct corre {
    char core[20];
} corre[2];

int login() {
    char err[16];
    int holas;
    FILE * me;
    me = fopen("users.txt", "r");
    for(holas = 1; holas <= 2; holas++) {
        fscanf(me, "%s", corre[holas].core);
    }
        fclose(me);
		printf("%s\n" ,corre[2].core);
        getch();
}

int main() {
    
    printf("Este proyect re escribe un archivo");
    login();

    return 0;
}