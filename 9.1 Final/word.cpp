#include "word.h"

Word::Word(std::string  word)
{
   m_word = word;
   m_count = 1;
}
bool operator >(const Word &a, const Word &b)
{
    return (a.get_count() > b.get_count());
}
std::string Word::get_word()
{
  return m_word;
}
void Word::add_count(int count)
{
   m_count++;
}
int Word::get_count() const
{
  return m_count;
}
void Word::add_line(int line)
{
  for (int i = 0; i < m_line.size(); i++)
  {
    if (m_line [i] == line)
    return;
  }
   m_line.push_back(line);
}
void Word::print() const
{
  for (int i = 0; i < m_line.size(); i++)
  {
    std::cout << m_line[i];
    if (i < m_line.size() - 1)
    {
      std::cout << ",";
    }
  }
}
