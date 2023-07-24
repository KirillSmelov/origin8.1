#include <iostream>
#include <string>
int function(std::string str, int forbidden_length)
{
    int length = 0;
    length = str.length();
    std::string bad_length = "Запретная длина";
    if (length != forbidden_length)
    {
        return length;
    }
    else
    {
        throw bad_length;
    }
}
int main(int argc, char** argv)
{
    system("chcp 1251");
    int a;
    std::string word;
    std::cout << "Введите запретную длину: ";
    std::cin >> a;
    do
    {
        std::cout << "Введите слово: ";
        std::cin >> word;
        try
        {
            function(word, a); 
            std::cout << "Длина слова " << word << " равна " << word.length() << std::endl;
        }
        catch (std::string)
        {
            std::cout << "Вы ввели слово запретной длины! До свидания";
        }
    } while (a != word.length());
}