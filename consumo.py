distancia_percorrida = float(input("Digite a distância total percorrida em KM: "))
volume_combustivel = float(input("Digite o volume de combustível consumido em litros: "))

consumo_medio = distancia_percorrida / volume_combustivel

print(f"O consumo médio do automóvel é de {consumo_medio:.2f} km/l.")
