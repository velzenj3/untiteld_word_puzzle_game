#ifndef WORDFILTER_HPP
#define WORDFILTER_HPP

class WordFilter {
private:
    std::string readFile;
    char data[10000];
    
public:
    void WordListScanner(std::string inputFile, int minLetters, int maxLetters);

};
#endif