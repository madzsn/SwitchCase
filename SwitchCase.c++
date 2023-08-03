#include <iostream>

int main () {
    int opcao;

    std::cout << "Digite uma opcao (1-4): ";
    std::cin >> opcao;
    

    switch (opcao) {
        case 1:
         std::cout << "So nos compiuter." << std::endl;
         break;
        case 2:
         std::cout << "Faco computacao." << std::endl;
         break;
        case 3:
         std::cout << "Sou garoto(a) de programa." << std::endl;
         break;
        case 4:
         std::cout << "Sou uma programadora jr." << std::endl; 
         break;
        default:
          std::cout << "Opcao invalida." << std::endl; 
    }

    return 0;
}