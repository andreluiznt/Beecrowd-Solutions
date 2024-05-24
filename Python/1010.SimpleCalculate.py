codProd, uniProd, precoProd = map(float, input().split())

codProd2, uniProd2, precoProd2 = map(float, input().split())

precoTotal = (uniProd*precoProd) + (uniProd2*precoProd2)

print("VALOR A PAGAR: R$ {:.2f}".format(precoTotal))