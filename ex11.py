idade = int(input("Digite a idade do nadador: "))

if 5 <= idade <= 7:
    categoria = "Infantil A"
elif 8 <= idade <= 10:
    categoria = "Infantil B"
elif 11 <= idade <= 13:
    categoria = "Juvenil A"
elif 14 <= idade <= 17:
    categoria = "Juvenil B"
else:
    categoria = "Adulto"

print(f"A categoria do nadador de {idade} anos é: {categoria}")
