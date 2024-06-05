n = int(input())

inn = 0
out = 0

for i in range(1, n+1, 1):
    x = int(input())
    if(x >= 10 and x <= 20):
        inn += 1 # in não pode ser usado pois é uma palavra reservada em python
    else:
        out += 1

print(inn,"in")
print(out,"out")