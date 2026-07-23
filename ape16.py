# Constantes
FI = 2
CO = 3

# Función para ingresar los datos de una matriz
def completar_matriz():
    matriz = []

    for x in range(FI):
        fila = []
        for y in range(CO):
            valor = int(input(f"Ingrese el elemento [{x + 1}][{y + 1}]: "))
            fila.append(valor)
        matriz.append(fila)

    return matriz


# Función para sumar matrices
def suma_matriz(matriz1, matriz2):
    resultado = []

    for x in range(FI):
        fila = []
        for y in range(CO):
            fila.append(matriz1[x][y] + matriz2[x][y])
        resultado.append(fila)

    return resultado


# Función para restar matrices
def resta_matriz(matriz1, matriz2):
    resultado = []

    for x in range(FI):
        fila = []
        for y in range(CO):
            fila.append(matriz1[x][y] - matriz2[x][y])
        resultado.append(fila)

    return resultado


# Función para multiplicar matrices elemento a elemento
def multiplicacion_matriz(matriz1, matriz2):
    resultado = []

    for x in range(FI):
        fila = []
        for y in range(CO):
            fila.append(matriz1[x][y] * matriz2[x][y])
        resultado.append(fila)

    return resultado


# Función para mostrar una matriz
def mostrar_resultado(matriz):
    for fila in matriz:
        for elemento in fila:
            print(f"[{elemento}]\t", end="")
        print()


# Programa principal
def main():
    print("=" * 36)
    print("OPERACIONES CON MATRICES 2x3")
    print("=" * 36)

    print("\nIngrese los datos de la matriz A")
    matrizA = completar_matriz()

    print("\nIngrese los datos de la matriz B")
    matrizB = completar_matriz()

    suma = suma_matriz(matrizA, matrizB)
    resta = resta_matriz(matrizA, matrizB)
    multiplicacion = multiplicacion_matriz(matrizA, matrizB)

    print("\n===============================")
    print("RESULTADO DE LA SUMA")
    mostrar_resultado(suma)

    print("\n===============================")
    print("RESULTADO DE LA RESTA")
    mostrar_resultado(resta)

    print("\n===============================")
    print("RESULTADO DE LA MULTIPLICACIÓN")
    mostrar_resultado(multiplicacion)
    print("===============================")


if __name__ == "__main__":
    main()