valor_produto = float(input("Digite o valor do produto: "))

valor_vista_desconto = round(valor_produto - (valor_produto * 0.05), 2)
valor_parcela_2x = round(valor_produto / 2, 2)
valor_parcela_3x_acrescimo = round((valor_produto / 3) * 1.05, 2)

print("Valor à vista com desconto (5%):", valor_vista_desconto)
print("Valor da parcela em 2x:", valor_parcela_2x)
print("Valor da parcela em 3x com acréscimo (5%):", valor_parcela_3x_acrescimo)
