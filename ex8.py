minutos = int(input("Digite a quantidade de minutos usados no estacionamento: "))

if minutos <= 60:
    valor_pagar = 8.00
    mensagem = "Valor mínimo, R$ 8,00"
else:
    horas_inteiras = minutos // 60
    minutos_restantes = minutos % 60

    valor_fracionado = 8.00 + minutos_restantes // 15 * 1.50

    valor_pagar = round(valor_fracionado, 2)
    mensagem = f"Valor a ser pago com acréscimo, R$ {valor_pagar:.2f}"

print(mensagem)
