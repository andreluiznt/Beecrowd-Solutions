x, y = map(int, input().split())

if(x == 1):
    total = y * 4.00
    print("Total: R$ {:.2f}".format(total))
elif(x == 2):
    total = y * 4.50
    print("Total: R$ {:.2f}".format(total))
elif(x == 3):
    total = y * 5.00
    print("Total: R$ {:.2f}".format(total))
elif(x == 4):
    total = y * 2.00
    print("Total: R$ {:.2f}".format(total))
elif(x == 5):
    total = y * 1.50
    print("Total: R$ {:.2f}".format(total))
else:
    print("Produto invalido")