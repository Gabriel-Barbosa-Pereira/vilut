#include <iostream>

int main(){
    system("color 05");
    int chose{2};
    bool wh{true};
    while(wh){
        std :: cout << "Bem vindo ao vilut, deseja fazer o que?\n";
        std :: cout << "[0] Mudar cor do terminal\n[1] Testar internet\n[2] Sair";
        switch(chose){
            case 0:
                break;
            case 1:
                system("ping www.google.com");
                break;
            case 2:
                wh = false;
                break;
            default:
                std :: cout << "Ops, algum erro ocorreu, tente novamente\n";
        }
    }
    system("pause > nul");
    return 0;
}