#include <stdio.h>

int main() {
    int datos[100];
    int n = 0;
    int opcion;
    int datosIngresados = 0;

   do {
    printf("\n===== MENU =====\n");

    if(datosIngresados == 0) {
        printf("1. Registrar datos\n");
        printf("6. Salir\n");
    } else {
        printf("1. Registrar datos\n");
        printf("2. Mostrar arreglo\n");
        printf("3. Ordenar por Burbuja\n");
        printf("4. Ordenar por Seleccion\n");
        printf("5. Ordenar por Insercion\n");
        printf("6. Salir\n");
    }

    printf("Seleccione una opcion: ");  
    scanf("%d", &opcion);              
    switch(opcion) {

           case 1:
    printf("Cuantos datos desea ingresar: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Ingrese numero %d: ", i + 1);
        scanf("%d", &datos[i]);
    }

    datosIngresados = 1; 

    break;
            case 2:
                if(datosIngresados) {
                    printf("Arreglo: ");
                    for(int i = 0; i < n; i++) {
                        printf("%d ", datos[i]);
                    }
                    printf("\n");
                } else {
                    printf("Primero debe ingresar datos.\n");
                }
                break;

            case 3: // BURBUJA
                if(datosIngresados) {
                    for(int i = 0; i < n - 1; i++) {
                        for(int j = 0; j < n - i - 1; j++) {
                            if(datos[j] > datos[j + 1]) {
                                int temp = datos[j];
                                datos[j] = datos[j + 1];
                                datos[j + 1] = temp;

                                printf("Intercambio: ");
                                for(int k = 0; k < n; k++) {
                                    printf("%d ", datos[k]);
                                }
                                printf("\n");
                            }
                        }
                        printf("Fin de pasada %d: ", i + 1);
                        for(int k = 0; k < n; k++) {
                            printf("%d ", datos[k]);
                        }
                        printf("\n");
                    }
                } else {
                    printf("Primero debe ingresar datos.\n");
                }
                break;

            case 4: // SELECCION
                if(datosIngresados) {
                    for(int i = 0; i < n - 1; i++) {
                        int min = i;

                        for(int j = i + 1; j < n; j++) {
                            if(datos[j] < datos[min]) {
                                min = j;
                            }
                        }

                        if(min != i) {
                            int temp = datos[i];
                            datos[i] = datos[min];
                            datos[min] = temp;

                            printf("Intercambio: ");
                            for(int k = 0; k < n; k++) {
                                printf("%d ", datos[k]);
                            }
                            printf("\n");
                        }

                        printf("Fin de pasada %d: ", i + 1);
                        for(int k = 0; k < n; k++) {
                            printf("%d ", datos[k]);
                        }
                        printf("\n");
                    }
                } else {
                    printf("Primero debe ingresar datos.\n");
                }
                break;

            case 5: // INSERCION
                if(datosIngresados) {
                    for(int i = 1; i < n; i++) {
                        int key = datos[i];
                        int j = i - 1;

                        while(j >= 0 && datos[j] > key) {
                            datos[j + 1] = datos[j];
                            j--;

                            printf("Movimiento: ");
                            for(int k = 0; k < n; k++) {
                                printf("%d ", datos[k]);
                            }
                            printf("\n");
                        }

                        datos[j + 1] = key;

                        printf("Insercion: ");
                        for(int k = 0; k < n; k++) {
                            printf("%d ", datos[k]);
                        }
                        printf("\n");
                    }
                } else {
                    printf("Primero debe ingresar datos.\n");
                }
                break;

            case 6:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opcion invalida.\n");
        }

    } while(opcion != 6);

    return 0;
}