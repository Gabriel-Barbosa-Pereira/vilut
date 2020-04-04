#include <iostream>
#include <ctime>

#include "../Headers/functions.hpp" // Arquivo de cabeçalho com as funções do case 0 e case 2

void line(int n, char c = '-'); // Função que coloca uma linha na tela

void game(); // Função que joga um jogo

int main(){
    system("color 05");
    int chose{2};
    bool wh{true};
    std :: string msg;
    double pita[2];
    while(wh){
        std :: cout << "Bem vindo ao vilut, deseja fazer o que?\n";
        std :: cout << "[0] Testar internet\n[1] Contador de caracteres\n[2] Teorema de pitagoras\n[3] Jogo\n";
        std :: cout << "[4] Sair\n";
        std :: cin >> chose;
        line(39);
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
                game();
                break;
            case 4:
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

void line(int n, char c){
    for(int i{0}; i < n; i++){
        std :: cout << c;
    }
    std :: cout << "\n";
}

void game(){
    system("cls");
    std :: cout << "JOGO DE ADIVINHAR UM NUMERO\n";
    line(29);
    srand(time(0));
    int r, t{0}, c;
    r = rand() % 11;
    while(true){
        std :: cout << "Seu palpite: ";
        std :: cin >> c;
        t++;
        if(c < r){
            std :: cout << "MUITO FRIO\n";
        }
        else if(c > r){
            std :: cout << "MUITO QUENTE\n";
        }
        else{
            std :: cout << "ACERTOU EM " << t << " TENTATIVAS\n";
            break;
        }
    }
}