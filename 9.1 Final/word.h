#ifndef WORD_H
#define WORD_H
#include<iostream>
#include<vector>
#include<string>
#include <functional>

class Word
{
public:
   Word(std::string  word);
   std::string get_word();
   void add_line(int line);
   void add_count(int count);
   int get_count() const;
   void print() const;
private:
   int m_count;
   std::string m_word;
   std::vector<int> m_line;
};
bool operator >(const Word &a, const Word &b);

#endif
