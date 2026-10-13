#include <iostream>

int main()
{

    std::cout << "Шифрование Цезаря" << std::endl;
    // char arr_ru[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    std::string word;
    std::cin >> word;
    for (int i = 0; i < word.size(); i++)
    {
        int pos = word[i] - 'a';
        int new_pos = (pos + 3) % 26;
        word[i] = new_pos + 'a';
    }
    std::cout << word << std::endl;
    return 0;
}