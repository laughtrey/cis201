#include "concordance.h"

Concordance::Concordance(std::string filename)
{
    m_filename = filename;
}

void Concordance::parse()
{
  std::ifstream file(m_filename.c_str());
  std::string line;
  int line_count = 1; // We start on line one, not line zero.
  while(std::getline(file, line))
  {
      std::istringstream stream(line);
      std::string word;
      while(stream >> word) //reads in each word, skipping over whitespace.
      {
        word.erase (std::remove_if (word.begin(), word.end(), ispunct), word.end()); //strip word of punct here. Thank you stackoverflow.
        std::transform(word.begin(), word.end(), word.begin(), ::tolower);//make the word lowercase here. Thanks again stackoverflow for <algorithm>.
        int word_count = find_word(word);
        if(word_count != -1) //adds a count of an occurance of a word if the word is found
        {
              m_word_stats[word_count].add_count(1);
              m_word_stats[word_count].add_line(line_count); //adds the line number it is on
        }
        else
        {
              Word new_word(word); //adds a word if the word isn't found.
              new_word.add_line(line_count); //adds the current line
              m_word_stats.push_back(new_word); //
        }
      }
      line_count++; //starting over, so we add one to the line_count
  }
  std::sort(m_word_stats.begin(), m_word_stats.end(),std::greater<Word>()); // This is another cool thing. In <functional> I can sort by the greater value. Special thanks to stackoverflow
}
int Concordance::find_word(std::string word) // search the Word vector, and return the index in the vector.
{
    for (size_t i = 0; i < m_word_stats.size(); i++)
    {
       if (word == m_word_stats[i].get_word())
       {
          return i;
       }
    }
    return -1;
}
void Concordance::print() // Prints the vector and the lines.
{
  std::cout << "WORD===TIMES OCCURED===LINES OCCURED" << '\n';
   for (size_t i = 0; i < m_word_stats.size(); i++)
   {
        //Prints the word and amount                           //Prints the lines it occured on.
        std::cout << m_word_stats[i].get_word() << " : " << m_word_stats[i].get_count() << " : ";
        m_word_stats[i].print();
        std::cout << std::endl;
   }
}
