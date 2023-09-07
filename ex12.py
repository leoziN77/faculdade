massa_kg = float(input("Digite a massa em kg do boxeador: "))

massa_lbs = massa_kg * 2.20462262

if massa_lbs >= 201:
    categoria = "Peso-pesado"
elif 176 <= massa_lbs <= 200:
    categoria = "Cruzador"
elif 169 <= massa_lbs <= 175:
    categoria = "Meio-pesado"
elif 161 <= massa_lbs <= 168:
    categoria = "Super-médio"
else:
    categoria = "Categoria inferior a Super-médio"

print(f"A categoria do boxeador com massa de {massa_kg} kg é: {categoria}")
print(f"A massa em libras do boxeador é de: {massa_lbs:.2f}")