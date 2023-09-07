idade = int(input("Digite a idade da pessoa: "))

if idade < 16:
    classe_eleitoral = "Não votante"
elif 16 <= idade < 18 or idade >= 65:
    classe_eleitoral = "Eleitor facultativo"
else:
    classe_eleitoral = "Eleitor obrigatório"

print(f"A classe eleitoral da pessoa de {idade} anos é: {classe_eleitoral}")
