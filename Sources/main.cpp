#include <iostream>

#include "../Headers/functions.hpp"

int main(){
    system("05");
    int chose{2};
    bool wh{true};
    std :: string msg;
    double pita[2];
    while(wh){
        std :: cout << "Bem vindo ao vilut, deseja fazer o que?\n";
        std :: cout << "[0] Testar internet\n[1] Contador de caracteres\n[2] Teorema de pitagoras\n[3] Sair\n";
        std :: cin >> chose;
        switch(chose){
            case 0:
                net();
                break;
            case 1:
                std :: cout << "Informe a frase para contar quantos caracteres\n";
                std :: cin.ignore();
                std :: getline(std :: cin, msg);
                std :: cout << "Quantidade de caracteres: " << msg.size() << "\n";
                break;
            case 2:
                std :: cout << "Valor de B: ";
                std :: cin >> pita[0];
                std :: cout << "Valor de C: ";
                std :: cin >> pita[1];
                std :: cout << "Hipotenusa = " << pit(pita[0], pita[1]) << "\n"; 
            case 3:
                wh = false;
                break;
            default:
                std :: cout << "Ops, algum erro ocorreu, tente novamente\n";
                break;
        }
        system("pause");
        system("cls");
    }
    system("pause > nul");
    return 0;
}