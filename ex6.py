altura = float(input("Digite a altura da pessoa em metros: "))

sexo = int(input("Digite o sexo da pessoa (1 para masculino, 2 para feminino): "))

if sexo == 1:  
    peso_ideal = (72.7 * altura) - 58
elif sexo == 2:  
    peso_ideal = (62.1 * altura) - 44.7
else:
    print("Opção de sexo inválida. Use 1 para masculino e 2 para feminino.")
    exit()

print(f"O peso ideal para a altura {altura:.2f}m e sexo {sexo} é {peso_ideal:.2f} kg.")
