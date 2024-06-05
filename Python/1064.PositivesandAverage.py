positive=0
soma = 0

for i in range(6):
    n = float(input())
    if(n > 0):
        positive += 1
        soma += n

media = soma/positive if positive > 0 else 0
print(f"{positive} valores positivos")
print(round(media, 1)) # round arredonda a media para uma casa decimal
