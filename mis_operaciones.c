import suma
import resta
import potencia
import logaritmo

def pedir_numeros():
    a = float(input("Introduce el primer número: "))
    b = float(input("Introduce el segundo número: "))
    return a, b

def main():
    while True:
        print("\nElige una operación:")
        print("1. Sumar")
        print("2. Restar")
        print("3. Potencia")
        print("4. Logaritmo Natural del primer número")
        print("5. Salir")
        opcion = input("Opción: ")

        if opcion == "1":
            a, b = pedir_numeros()
            print(f"Resultado: {suma.sumar(a, b)}")
        elif opcion == "2":
            a, b = pedir_numeros()
            print(f"Resultado: {resta.restar(a, b)}")
        elif opcion == "3":
            a, b = pedir_numeros()
            print(f"Resultado: {potencia.potencia(a, b)}")
        elif opcion == "4":
            a = float(input("Introduce el número: "))
            print(f"Resultado: {logaritmo.logaritmo_natural(a)}")
        elif opcion == "5":
            break
        else:
            print("Opción no válida")

if __name__ == "__main__":
    main()
