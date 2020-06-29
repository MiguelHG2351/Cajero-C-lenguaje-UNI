#include <stdio.h>

int main()
{
int array[100], n, c, d, swap;
int users[4] = {"Norwin", "Python", "React JS", "JavaScript", "NodeJS"};
float notas[4] = {0, 0, 0, 0, 0};
float media;
printf("Bienvenido a la escuela Dennis Ritchie\n");
printf("Ingrese el nombre del estudiante\n");
scanf("%d", &n);
printf("Enter %d integers\n", n);
for (c = 0; c < n; c++)
scanf("%d", &array[c]);
for (c = 0 ; c < ( n - 1 ); c++)
{
for (d = 0 ; d < n - c - 1; d++)
{
  if (array[d] > array[d+1]) /* For decreasing order use < */
  {
    swap       = array[d];
    array[d]   = array[d+1];
    array[d+1] = swap;
    }
  }
}

media = notas[0] + notas[1] + notas[2] + notas[3] + notas[4];
media = media / 5;
printf("La media de la nota es: ");
printf("%i", media);
getch();
printf("Sorted list in ascending order:\n");

for ( c = 0 ; c < n ; c++ )
 printf("%d\n", array[c]);
getch();
return 0;
}
