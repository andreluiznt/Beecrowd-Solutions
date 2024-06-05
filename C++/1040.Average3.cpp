#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
    double nota1, nota2, nota3, nota4, notaRec, media, mediaFinal;

    cin >> nota1 >> nota2 >> nota3 >> nota4;

    media = (nota1*2 + nota2*3 + nota3*4 + nota4*1)/10;

    cout << "Media: " << fixed << setprecision(1) << media << endl;

    if(media >= 7.0){
        cout << "Aluno aprovado." << endl;
    }else if(media < 5.0){
        cout << "Aluno reprovado." << endl;
    }else if(media < 7.0 && media >= 5.0){
        cout << "Aluno em exame." << endl;
        cin >> notaRec;
        cout << "Nota do exame: " << fixed << setprecision(1) << notaRec << endl;
        mediaFinal = (media + notaRec)/2;
        if(mediaFinal >= 5.0){
            cout << "Aluno aprovado." << endl << "Media final: " << fixed << setprecision(1) << mediaFinal << endl;
        }else{
            cout << "Aluno reprovado." << endl << "Media final: " << fixed << setprecision(1) << mediaFinal << endl;
        }
    }

    return 0;
}