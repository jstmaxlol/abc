#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <escape.ansi> // github.com/jstmaxlol/escape.ANSI.sux

int main() {
    std::cout << "[ "<< red <<"a"<< green <<"b"<< blue <<"c"<< def <<" ]\n";

    std::vector<std::string> words;

    std::cout << "enter word list ("<< red <<"type \""<< yellow <<"&fin"<< red <<"\" to finish"<< def <<")\n";
    std::string input;
    while (true) {
        std::cout << "> ";
        std::getline(std::cin, input);
        if (input == "&fin") break;
        if (!input.empty()) words.push_back(input);
    }

    // sort *magically*
    std::sort(words.begin(), words.end());
    // output *magically*
    for (const auto& word : words) std::cout << word << "\n"; 
    // return....... *magically* (i guess)
    return 0;
}
