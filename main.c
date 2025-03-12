#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // Para usar getch()

// Prototipo de la función
void opcionesMenu();

int main()
{
    char opcion;

    do
    {
        opcionesMenu();
        opcion = getch(); // Captura la opción sin necesidad de presionar Enter

        system("cls"); // Limpia pantalla en Windows

        switch(opcion)
        {
            case '1':
                printf("\n 1 - Ejercicio 1 \n\n");
                printf("\n 1.- Sumar los elementos de una pila (usar variables enteras) \n\n");
                break;
            case '2':
                printf("\n 2 - Ejercicio 2 \n\n");
                printf("\n 2.- Contar los elementos de una pila (usar variables enteras) \n\n");
                break;
            case '3':
                printf("\n 3 - Ejercicio 3 \n\n");
                printf("\n 3.- Calcular el promedio de los valores de una pila (usar variables) \n\n");
                break;
            case '4':
                printf("\n 4 - Ejercicio 4 \n\n");
                printf("\n 4.- Determinar si un elemento buscado está dentro de una pila. \n\n");
                break;
            case '5':
                printf("\n 5 - Ejercicio 5 \n\n");
                printf("\n 5.- Eliminar un elemento de una pila y mantener el resto en el mismo orden. \n\n");
                break;
            case '6':
                printf("\n 6 - Ejercicio 6 \n\n");
                printf("\n 6.- Verificar si una pila dada es capicúa. \n\n");
                break;
            case '7':
                printf("\n 7 - Ejercicio 7 \n\n");
                printf("\n 7.- Calcular la unión de dos pilas A y B que simulan conjuntos. \n\n");
                break;
            case '8':
                printf("\n 8 - Ejercicio 8 \n\n");
                printf("\n 8.- Sumar los elementos de una pila (usar variables enteras). \n\n");
                break;
            case '9':
                printf("\n 9 - Ejercicio 9 \n\n");
                printf("\n 9.- Sumar los elementos de una pila (usar variables enteras). \n\n");
                break;
            case 27: // Código ASCII de la tecla ESC
                printf("Bye Bye!\n");
                break;
            default:
                printf("\n Opción no válida. Intente de nuevo.\n");
        }

        printf("\nPresione cualquier tecla para continuar...\n");
        getch(); // Espera que el usuario presione una tecla para continuar
        system("cls"); // Limpia pantalla en Windows

    } while (opcion != 27);

    return 0;
}

void opcionesMenu()
{
    printf("\n\t\t\t Trabajo Práctico 2 - Pilas Avanzado \n");
    printf("\n 1 - Ejercicio 1 \n");
    printf(" 2 - Ejercicio 2 \n");
    printf(" 3 - Ejercicio 3 \n");
    printf(" 4 - Ejercicio 4 \n");
    printf(" 5 - Ejercicio 5 \n");
    printf(" 6 - Ejercicio 6 \n");
    printf(" 7 - Ejercicio 7 \n");
    printf(" 8 - Ejercicio 8 \n");
    printf(" 9 - Ejercicio 9 \n");
    printf("\n Ingrese una opción, o presione ESC para salir...\n");
}






