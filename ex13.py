print(f"|  Opção   |   Condição    |                    Cálculo                |") 
print(f"|    1     |    à vista    |               8% de desconto              |")
print(f"|    2     | em 2 parcelas |   4% de desconto, dividido em duas vezes  |")
print(f"|    3     | em 3 parcelas |    sem desconto, dividido em três vezes   |")
print(f"|    4     | em 4 parcelas | 4% de acréscimo, dividido em quatro vezes |")
print()

opcao = int(input("Digite a opção desejada (1 a 4): "))
preco_tabela = float(input("Digite o preço de tabela do produto: "))

parcelas = 1

if opcao == 1:
    valor_final = preco_tabela * 0.92
elif opcao == 2:
    valor_final = preco_tabela * 0.96
    parcelas = 2
elif opcao == 3:
    valor_final = preco_tabela
    parcelas = 3
elif opcao == 4:
    valor_final = preco_tabela * 1.04
    parcelas = 4
else:
    valor_final = None
    print("Opção inválida!")

if valor_final is not None:
    print()
    print(f"O valor final do produto é: R$ {valor_final:.2f}")
    print(f"Parcelas: {parcelas}x de R$ {valor_final / parcelas:.2f}")
