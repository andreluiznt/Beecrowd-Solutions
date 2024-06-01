dinheiro = int(input())

print(dinheiro)

print(dinheiro//100, "nota(s) de R$ 100,00")
dinheiro %= 100
print(dinheiro//50, "nota(s) de R$ 50,00")
dinheiro %= 50
print(dinheiro//20, "nota(s) de R$ 20,00")
dinheiro %= 20
print(dinheiro//10, "nota(s) de R$ 10,00")
dinheiro %= 10
print(dinheiro//5, "nota(s) de R$ 5,00")
dinheiro %= 5
print(dinheiro//2, "nota(s) de R$ 2,00")
dinheiro %= 2
print(dinheiro//1, "nota(s) de R$ 1,00")