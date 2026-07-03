// STAYMANAGER - VERSAO 0.1.0
// Sistema de gerenciamento de hotel em C++23

#include <iostream>
#include <array>
#include <string>

using namespace std;

struct Hospede
{
    string nome;
    string cpf;
    string telefone;
};

int main(void)
{
    array<Hospede, 10> hospedes;
    size_t totalHospedes = 0;
    int opcao;

    do
    {
        cout << "\n==============================" << endl;
        cout << "        STAYMANAGER" << endl;
        cout << "==============================" << endl;
        cout << "1 - Cadastrar hospede" << endl;
        cout << "2 - Listar hospedes" << endl;
        cout << "0 - Sair" << endl;
        cout << "\nEscolha uma opcao: ";
        cin >> opcao;
        cin.ignore(80, '\n');

        if (opcao == 1)
        {
            if (totalHospedes < hospedes.size())
            {
                cout << "\n=== CADASTRO DE HOSPEDE ===" << endl;

                cout << "Nome: ";
                getline(cin, hospedes[totalHospedes].nome);

                cout << "CPF: ";
                getline(cin, hospedes[totalHospedes].cpf);

                cout << "Telefone: ";
                getline(cin, hospedes[totalHospedes].telefone);

                totalHospedes++;

                cout << "\nHospede cadastrado com sucesso!" << endl;
            }
            else
            {
                cout << "\nLimite de hospedes atingido!" << endl;
            }
        }
        else if (opcao == 2)
        {
            cout << "\n=== LISTA DE HOSPEDES ===" << endl;

            if (totalHospedes == 0)
            {
                cout << "Nenhum hospede cadastrado." << endl;
            }
            else
            {
                for (size_t i = 0; i < totalHospedes; ++i)
                {
                    cout << "\nHospede " << i + 1 << endl;
                    cout << "Nome.....: " << hospedes[i].nome << endl;
                    cout << "CPF......: " << hospedes[i].cpf << endl;
                    cout << "Telefone.: " << hospedes[i].telefone << endl;
                }
            }
        }
        else if (opcao != 0)
        {
            cout << "\nOpcao invalida!" << endl;
        }

    } while (opcao != 0);
    
    cout << "\nEncerrando o StayManager..." << endl;
    cin.get();
    return 0;
}
