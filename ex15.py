num1 = int(input("Digite o primeiro número inteiro: "))
num2 = int(input("Digite o segundo número inteiro: "))
num3 = int(input("Digite o terceiro número inteiro: "))

numeros = [num1, num2, num3]

numeros.sort(reverse=True)

print("Números em ordem decrescente:", numeros)
