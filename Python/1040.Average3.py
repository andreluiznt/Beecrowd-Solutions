nota1, nota2, nota3, nota4 = map(float, input().split())

media = (nota1*2 + nota2*3 + nota3*4 + nota4*1)/10

print("Media: {:.1f}".format(media))

if(media >= 7.0):
    print("Aluno aprovado.")
elif(media < 5.0):
    print("Aluno reprovado.")
elif(media < 7.0 and media >= 5.0):
    print("Aluno em exame.")
    notaRec = float(input())
    print("Nota do exame: {:.1f}".format(notaRec))
    mediaFinal = (media+notaRec)/2
    if(mediaFinal >= 5.0):
        print("Aluno aprovado.")
        print("Media final: {:.1f}".format(mediaFinal))
    else:
        print("Aluno reprovado.")
        print("Media final: {:.1f}".format(mediaFinal))

