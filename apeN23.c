#include <stdio.h>
const int FI = 2;
const int CO = 3;

//Funciones
void completarMatrices(int matriz[FI][CO]);
void sumaMatriz(int matriz1[FI][CO], int matriz2[FI][CO], int resultado[FI][CO]);
void restaMatriz(int matriz1[FI][CO], int matriz2[FI][CO], int resultado[FI][CO]);
void multiplicacionMatriz(int matriz1[FI][CO], int matriz2[FI][CO], int resultado[FI][CO]);
void mostrarResultado(int matriz[FI][CO]);

int main(){
    int matrizA[FI][CO];
    int matrizB[FI][CO];
    int suma[FI][CO];
    int resta[FI][CO];
    int multiplicacion[FI][CO];

    printf("====================================\n");
    printf("OPERACIONES CON MATRICES 2x3\n");
    printf("====================================\n");

    printf("\nIngrese los datos de la matriz A\n");
    completarMatrices(matrizA);

    printf("\nIngrese los datos de la matriz B\n");
    completarMatrices(matrizB);

    sumaMatriz(matrizA, matrizB, suma);
    restaMatriz(matrizA, matrizB, resta);
    multiplicacionMatriz(matrizA, matrizB, multiplicacion);

    printf("\n===============================\n");
    printf("\nRESULTADO DE LA SUMA\n");
    mostrarResultado(suma);

    printf("\n===============================\n");
    printf("\nRESULTADO DE LA RESTA\n");
    mostrarResultado(resta);

    printf("\n===============================\n");
    printf("\nRESULTADO DE LA MULTIPLICACION\n");
    mostrarResultado(multiplicacion);
    printf("\n===============================\n");

    return 0;
}

//Funcion de Ingresar los Datos
void completarMatrices(int matriz[FI][CO]){
    int x, y;
    for(x = 0; x < FI; x++){
        for(y = 0; y < CO; y++){
            printf("Ingrese el elemento [%i][%i]: ", x + 1, y + 1);
            scanf("%d", &matriz[x][y]);
        }
    }
}


//Funcion de Suma
void sumaMatriz(int matriz1[FI][CO], int matriz2[FI][CO], int resultado[FI][CO]){
    int x, y;
    for(x = 0; x < FI; x++){
        for(y = 0; y < CO; y++){
            resultado[x][y] = matriz1[x][y] + matriz2[x][y];
        }
    }
}

//Funcion de Resta
void restaMatriz(int matriz1[FI][CO], int matriz2[FI][CO], int resultado[FI][CO]){
    int x, y;
    for(x = 0; x < FI; x++){
        for(y = 0; y < CO; y++)
        {
            resultado[x][y] = matriz1[x][y] - matriz2[x][y];
        }
    }
}

//Funcion de Multiplicacion
void multiplicacionMatriz(int matriz1[FI][CO], int matriz2[FI][CO], int resultado[FI][CO]){
    int x, y;
    for(x = 0; x < FI; x++){
        for(y = 0; y < CO; y++){
            resultado[x][y] = matriz1[x][y] * matriz2[x][y];
        }
    }
}

//Funcion de Resultados
void mostrarResultado(int matriz[FI][CO]){
    int x, y;
    for(x = 0; x < FI; x++){
        for(y = 0; y < CO; y++){
            printf("[%d]\t", matriz[x][y]);
        }
        printf("\n");
    }
}
