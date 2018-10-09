#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;
class Product
{
private:
   string name;
   double price;
   int score;
public:
   Product ();
   void read();
   bool is_better_than(Product b) const;
   void print() const;
};
Product::Product()
{
   price = 1;
   score = 0;
}
void Product::read()
{
   cout << "MOdel name: ";
   getline(cin,name);
   cout << "price: ";
   cin >> price;
   cout << "enter score: ";
   cin >> score;
   string remainder;
   getline(cin, remainder);
}
bool Product::is_better_than(Product b) const
{
   if (price == 0) return true;
   if (b.price == 0) return false;
   return score / price > b.score /b.price;
}
void Product::print() const
{
   cout << name
        << " Price: " << price
        << " Score: " << score;
}

int main()
{
   Product best;

   bool more = true;
   while (more)
   {
      Product next;
      next.read();
      if (next.is_better_than(best))
         best = next;

      cout << "More data? y/n ";
      string answer;
      getline(cin, answer);
      if (answer !="y")
         more = false;
   }
   cout << "The best value is ";
   best.print();
   return 0;
}
