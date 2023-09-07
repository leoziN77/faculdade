massa = float(input("Digite a massa do cidadão em quilogramas: "))
altura = float(input("Digite a altura do cidadão em metros: "))

imc = massa / (altura ** 2)

if imc < 18.5:
    condicao = "abaixo do peso"
elif 18.5 <= imc < 25:
    condicao = "no peso normal"
elif 25 <= imc < 30:
    condicao = "acima do peso"
else:
    condicao = "obeso"

print(f"O IMC é: {imc:.2f}")
print(f"Condição: {condicao}")
