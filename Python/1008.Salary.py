numEmpregado = int(input())
horasTrab = int(input())
salarioHoras = float(input())

salarioMes = horasTrab * salarioHoras

print("NUMBER =", numEmpregado)
print("SALARY = U$ {:.2f}".format(salarioMes))