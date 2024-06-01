import sys
import math

a, b, c = map(float, input().split())

if(a == 0):
    print("Impossivel calcular")
    sys.exit()

delta = pow(b, 2) - (4*a*c)

if(delta < 0):
    print("Impossivel calcular")
else:
    r1 = (-b + math.sqrt(delta))/(2*a)
    r2 = (-b - math.sqrt(delta))/(2*a)
    print("R1 = {:.5f}".format(r1))
    print("R2 = {:.5f}".format(r2))