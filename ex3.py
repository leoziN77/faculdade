import math

numero = int(input("Digite um número inteiro: "))

if numero < 0:
    print("Valor inválido. Não é possível calcular a raiz quadrada de um número negativo.")
else:
    raiz_quadrada = math.sqrt(numero)
    print(f"A raiz quadrada de {numero} é {raiz_quadrada:.2f}")
