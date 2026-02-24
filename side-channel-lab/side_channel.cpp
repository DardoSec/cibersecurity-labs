#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <cstdlib>

int main(int argc, char* argv[]) {
    if (argc < 3) {
        std::cout << "Uso: side_channel.exe <password_real> <ms_por_caracter>\n";
        return 1;
    }

    std::string secret = argv[1];
    int ms_sleep = std::stoi(argv[2]);

    system("cls");

    std::string attempt;
    bool found = false;
    std::cout << "Ingresa el password: ";
    std::cin >> attempt;

    while (!found) 
    {
    auto start = std::chrono::high_resolution_clock::now();

    bool correct = true;
    for (size_t i = 0; i < secret.size(); i++) {
        if (i >= attempt.size() || attempt[i] != secret[i]) {
            correct = false;
            break;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(ms_sleep));
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;

    if (correct && attempt.size() == secret.size()) {
        std::cout << "Correcto!\n";
        found = true;
    }
    else {
        std::cout << "Incorrecto\n";
    }

    std::cout << "Tiempo transcurrido: " << elapsed.count() << " segundos\n";

    if (!found)  
    {
    std::cout << "Ingresa el password: ";
    std::cin >> attempt;
    }
    }
    return 0;
}