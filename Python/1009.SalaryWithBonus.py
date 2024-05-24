nome = str(input())
salarioFixo = float(input())
valorVenda = float(input())

salarioBonuss = (valorVenda*0.15) + salarioFixo

print("TOTAL = R$ {:.2f}".format(salarioBonuss))