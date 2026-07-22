import java.util.Scanner;

public class ApeN {
    static final int FI = 2;
    static final int CO = 3;
    static Scanner leer = new Scanner(System.in);

    public static void main(String[] args) {

        int[][] matrizA = new int[FI][CO];
        int[][] matrizB = new int[FI][CO];
        int[][] suma = new int[FI][CO];
        int[][] resta = new int[FI][CO];
        int[][] multiplicacion = new int[FI][CO];

        System.out.println("====================================");
        System.out.println("OPERACIONES CON MATRICES 2x3");
        System.out.println("====================================");

        System.out.println("\nIngrese los datos de la matriz A");
        completarMatrices(matrizA);

        System.out.println("\nIngrese los datos de la matriz B");
        completarMatrices(matrizB);

        sumaMatriz(matrizA, matrizB, suma);
        restaMatriz(matrizA, matrizB, resta);
        multiplicarMatriz(matrizA, matrizB, multiplicacion);
        
        System.out.println("\nLA SUMA DE MATRICES ES: ");
        mostrarResultado (suma);

        System.out.println("\nLA SUMA DE MATRICES ES: ");
        mostrarResultado (resta);

        System.out.println("\nLA SUMA DE MATRICES ES: ");
        mostrarResultado (multiplicacion);

    }



    //Funciones ================================================================================================================================
    //Funcion para ingresar datos--------------------------------------------------------------
    public static void completarMatrices(int[][] matriz) {
        for (int x = 0; x < FI; x++) {
            for (int y = 0; y < CO; y++) {
                System.out.print("Fila " + (x + 1) + ", Columna " + (y + 1) + ": ");
                matriz[x][y] = leer.nextInt();
            }
        }
    }

    //Funcion para sumar matrices ----------------------------------------------------------------
    public static void sumaMatriz (int[][] MatrizA, int [][] MatrizB, int[][] resultado){
        for (int x =0; x < FI; x++){
            for(int y = 0; y < CO; y++){
                resultado [x][y] = MatrizA[x][y] + MatrizB[x][y];
            }
        }
    }

    //Funcion para restar matrices ----------------------------------------------------------------
    public static void restaMatriz(int[][] MatrizA, int [][] MatrizB, int[][] resultado){
        for (int x =0; x < FI; x++){
            for(int y = 0; y < CO; y++){
                resultado [x][y] = MatrizA[x][y] - MatrizB[x][y];
            }
        }
    }
    

    //Funcion para multiplicar Funciones ----------------------------------------------------------
    public static void multiplicarMatriz(int[][] MatrizA, int [][] MatrizB, int[][] resultado){
        for (int x =0; x < FI; x++){
            for(int y = 0; y < CO; y++){
                resultado [x][y] = MatrizA[x][y] * MatrizB[x][y];
            }
        }
    }

    //Funcion para Mostrar Resultados ================================================================
    public static void mostrarResultado (int[][] matriz){
        for(int x = 0; x < FI; x++){
            for (int y = 0; y < CO; y++){
                System.out.print("[" + matriz[x][y] + "]\t");
            }
            System.out.println();
        }
    }

}
