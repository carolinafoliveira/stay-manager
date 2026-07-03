// STAYMANAGER - VERSAO 0.2.0
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

struct Quarto
{
    int16_t numero;
    string tipo;
    double diaria;
    bool ocupado;
};

int main(void)
{
    array<Hospede, 10> hospedes;
    array<Quarto, 10> quartos;

    size_t totalHospedes = 0;
    size_t totalQuartos = 0;

    int16_t opcao;

    do
    {
        cout << "\n==============================" << endl;
        cout << "        STAYMANAGER" << endl;
        cout << "==============================" << endl;
        cout << "1 - Cadastrar hospede" << endl;
        cout << "2 - Listar hospedes" << endl;
        cout << "3 - Cadastrar quarto" << endl;
        cout << "4 - Listar quartos" << endl;
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
        else if (opcao == 3)
        {
            if (totalQuartos < quartos.size())
            {
                cout << "\n=== CADASTRO DE QUARTO ===" << endl;

                cout << "Numero do quarto: ";
                cin >> quartos[totalQuartos].numero;
                cin.ignore(80, '\n');

                cout << "Tipo do quarto: ";
                getline(cin, quartos[totalQuartos].tipo);

                cout << "Valor da diaria: ";
                cin >> quartos[totalQuartos].diaria;
                cin.ignore(80, '\n');

                quartos[totalQuartos].ocupado = false;

                totalQuartos++;

                cout << "\nQuarto cadastrado com sucesso!" << endl;
            }
            else
            {
                cout << "\nLimite de quartos atingido!" << endl;
            }
        }
        else if (opcao == 4)
        {
            cout << "\n=== LISTA DE QUARTOS ===" << endl;

            if (totalQuartos == 0)
            {
                cout << "Nenhum quarto cadastrado." << endl;
            }
            else
            {
                for (size_t i = 0; i < totalQuartos; ++i)
                {
                    cout << "\nQuarto " << i + 1 << endl;
                    cout << "Numero..: " << quartos[i].numero << endl;
                    cout << "Tipo....: " << quartos[i].tipo << endl;
                    cout << "Diaria..: R$ " << quartos[i].diaria << endl;

                    if (quartos[i].ocupado)
                        cout << "Status..: Ocupado" << endl;
                    else
                        cout << "Status..: Livre" << endl;
                }
            }
        }
        else if (opcao != 0)
        {
            cout << "\nOpcao invalida!" << endl;
        }

    } while (opcao != 0);

    cout << "\nEncerrando o StayManager..." << endl;

    return 0;
}
