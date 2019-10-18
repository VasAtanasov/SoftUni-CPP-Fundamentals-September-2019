#include <iostream>
#include <vector>
#include <sstream>

void readInput(std::string &, std::string &, std::string &, double &);

bool areMatch(std::string &firstWord, std::string &secondWord, double matchIndex);

std::vector<std::string> getWordsFromText(std::string &tex);

int main() {
    std::string firstLine, secondLine, matchWord;
    double matchIndex;

    readInput(firstLine, secondLine, matchWord, matchIndex);

    int matchCount = 0;
    std::vector<std::string> words = getWordsFromText(firstLine);
    for (auto &word : words) {
        if (areMatch(word, matchWord, matchIndex)) {
            ++matchCount;
        }
    }

    std::cout << matchCount;

    return 0;
}

void readInput(std::string &firstLine,
               std::string &secondLine,
               std::string &word,
               double &matchIndex) {

    std::getline(std::cin, firstLine);
    std::getline(std::cin, secondLine);

    std::istringstream stringStream(secondLine);
    stringStream >> word >> matchIndex;
    stringStream.clear();
}

bool areMatch(std::string &firstWord,
              std::string &secondWord,
              double matchIndex) {

    if (firstWord.length() != secondWord.length()) {
        return false;
    }

    if (firstWord[0] != secondWord[0]) {
        return false;
    }

    const size_t SIZE = firstWord.length();
    size_t matchCount = 0;

    for (size_t i = 0; i < SIZE; ++i) {
        if (firstWord[i] == secondWord[i]) {
            ++matchCount;
        }
    }

    double match = ((double) matchCount / (double) SIZE) * 100.0;

    return match >= matchIndex;
}

std::vector<std::string> getWordsFromText(std::string &text) {
    std::vector<std::string> words;
    std::string const delimiters{" .,:;!?"};

    size_t beg, pos = 0;
    while ((beg = text.find_first_not_of(delimiters, pos)) != std::string::npos) {
        pos = text.find_first_of(delimiters, beg + 1);
        words.push_back(text.substr(beg, pos - beg));
    }
    return words;
}
