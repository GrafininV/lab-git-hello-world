#include <iostream>
#include <string>

// Основная функция программы
int main() {
    std::string name;  // Переменная для хранения имени пользователя

    // Запрос имени у пользователя
    std::cout << "Enter your name: ";
    std::cin >> name;  // Считываем имя

    // Вывод приветствия с именем
    std::cout << "Hello world from " << name << std::endl;

    return 0;
}