odd = 0
even = 0
positive = 0
negative = 0

for i in range(1, 6, 1):
    n = int(input())
    if(n % 2 == 0):
        even += 1
    else:
        odd += 1

    if(n > 0):
        positive += 1
    elif(n < 0):
        negative += 1

print(f"{even} valor(es) par(es)")
print(f"{odd} valor(es) impar(es)")
print(f"{positive} valor(es) positivo(s)")
print(f"{negative} valor(es) negativo(s)")