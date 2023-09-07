
custo_lata = 50.00  
capacidade_lata = 5  
cobertura_litro = 3  

altura_cilindro = float(input("Digite a altura do cilindro em metros: "))
raio_cilindro = float(input("Digite o raio do cilindro em metros: "))

area_base = 2 * 3.14159 * raio_cilindro**2  
area_lateral = 2 * 3.14159 * raio_cilindro * altura_cilindro  
area_total = area_base + area_lateral

quantidade_litros = area_total / cobertura_litro
quantidade_latas = quantidade_litros / capacidade_lata
custo_total = quantidade_latas * custo_lata

print(f"Quantidade de latas necessárias: {quantidade_latas:.2f}")
print(f"Custo total em reais: R$ {custo_total:.2f}")


