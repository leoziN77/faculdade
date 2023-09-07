num_copias = int(input("Digite o número de cópias desejadas: "))

if num_copias < 100:
    valor_total = num_copias * 0.25
else:
    valor_total = num_copias * 0.20

print(f"O valor a pagar pelo serviço de {num_copias} cópias é R$ {valor_total:.2f}")
