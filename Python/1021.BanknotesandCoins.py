dinheiro = float(input())

dinheiro = int(100*dinheiro)

print("NOTAS:")
print(dinheiro//10000, "nota(s) de R$ 100.00")
dinheiro = dinheiro%10000
print(dinheiro//5000, "nota(s) de R$ 50.00")
dinheiro = dinheiro%5000
print(dinheiro//2000, "nota(s) de R$ 20.00")
dinheiro = dinheiro%2000
print(dinheiro//1000, "nota(s) de R$ 10.00")
dinheiro = dinheiro%1000
print(dinheiro//500, "nota(s) de R$ 5.00")
dinheiro = dinheiro%500
print(dinheiro//200, "nota(s) de R$ 2.00")
dinheiro = dinheiro%200
print("MOEDAS:")
print(dinheiro//100, "moeda(s) de R$ 1.00")
dinheiro = dinheiro%100
print(dinheiro//50, "moeda(s) de R$ 0.50")
dinheiro = dinheiro%50
print(dinheiro//25, "moeda(s) de R$ 0.25")
dinheiro = dinheiro%25
print(dinheiro//10, "moeda(s) de R$ 0.10")
dinheiro = dinheiro%10
print(dinheiro//5, "moeda(s) de R$ 0.05")
dinheiro = dinheiro%5
print(dinheiro//1, "moeda(s) de R$ 0.01")
