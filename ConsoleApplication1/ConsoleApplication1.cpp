#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("t.txt"); // Відкриття файлу для читання
    if (!file.is_open()) {
        std::cerr << "Не вдалося відкрити файл." << std::endl;
        return 1;
    }

    std::string word;
    std::string longestWord;
    while (file >> word) { // Зчитування кожного слова з файлу
        if (word.length() > longestWord.length()) { // Перевірка, чи є слово найдовшим
            longestWord = word;
        }
    }

    file.close(); // Закриття файлу

    std::cout << "Word: " << longestWord << std::endl;
    std::cout << "Max lenght word: " << longestWord.length() << std::endl;

    return 0;
}
