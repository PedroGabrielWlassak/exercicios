#include <iostream>

using namespace std;

class Curso {
    private:
        string nomeDoProfessor;
        int numeroMaximoDeAlunos;

    public:
        void setNomeDoProfessor (string nome) {
            nomeDoProfessor = nome;
        }

        void setNumeroMaximoDeAlunos(int quantidade) {
            numeroMaximoDeAlunos = quantidade;
        }

        string getNomeDoProfessor (){
            return nomeDoProfessor;
        }

        int getNumeroMaximoDeAlunos () {
            return numeroMaximoDeAlunos;
        }

};

int main()
{
    Curso objeto;
    string input;
    cout << "Entre com o nome do professor: " << endl;
    getline(cin, input);
    objeto.setNomeDoProfessor(input);
    cout << "Entre com o número máximo de alunos: " << endl;
    int entrada;
    cin >> entrada;
    objeto.setNumeroMaximoDeAlunos(entrada);
    cout << "O nome do professor do curso é" << objeto.getNomeDoProfessor() << "e o número máximo de alunos é" << objeto.getNumeroMaximoDeAlunos() << endl;

    return 0;
}
