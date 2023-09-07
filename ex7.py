massa = float(input("Digite a massa do cidadão em quilogramas: "))
altura = float(input("Digite a altura do cidadão em metros: "))

imc = massa / (altura ** 2)

if 18.5 < imc < 25:
    print(f"O IMC é {imc:.2f}, que está na faixa considerada normal.")
else:
    massa_max_normal = (24.9 * (altura ** 2))
    print(f"O IMC é {imc:.2f}, que não está na faixa considerada normal.")
    print(f"A massa máxima considerada normal para essa altura é {massa_max_normal:.2f} kg.")
