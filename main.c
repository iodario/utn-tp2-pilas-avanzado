#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char opcion;


    do
    {

        opcionesMenu();



        opcion = getch();

        system("cls");

    switch(opcion)
        {
        case 27:
            printf("Bye Bye !\n");

            break;
        case 49:

            codigoAscii();
            break;
        case 50:
            printf("\n\n\t\t\t Archivos de la carpeta actual");
            system("dir");


            }

    system("pause");
    system("cls");
   }while (opcion !=27);



return 0;
}
// suma

void opcionesMenu() {
        printf("\n\t\t\t Menu de opciones \n");
        printf("\n 1 - Tabla ASCII \n");
        printf("\n 2 - Ejercicio 1 \n");
        printf("\n 3 - Ejercicio 2 \n");
        printf("\n 4 - Ejercicio 3 \n");
        printf("\n 5 - Ejercicio 4 \n");
        printf("\n 6 - Ejercicio 5 \n");
        printf("\n 7 - Ejercicio 6 \n");
        printf("\n 8 - Ejercicio 7 \n\n");
        printf("\n Ingrese una opcion, o ESC para salir ...\n");
}

int suma(int uno, int dos){
 return uno + dos;
}

void codigoAscii(){
printf("\n\n\t\t-------Tabla de caracteres ASCII -------\n");
            for (int i=0; i<256 ; i++)
            {
                printf("Nro: %d - %c |", i, i);   //i como entero, y luego i como caracter
                if(i%5==0)
                {
                printf("\n");
            }
        }
}





