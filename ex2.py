ano_nascimento = int(input("Digite o ano de nascimento: "))

idade = 2023 - ano_nascimento

pode_dirigir = idade >= 18

print(f"Em 2023, você terá {idade} anos.")
if pode_dirigir:
    print("Você já pode fazer a carteira de motorista.")
else:
    print("Você ainda não pode fazer a carteira de motorista.")
