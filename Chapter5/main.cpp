#include <iostream>
#include <string>
#include <cassert>
#include "box.h"
using namespace std;

class box
{
private:
  int m_width, m_height;
public:
  box(int width, int height); // constructor with parameters
  void set_width(int width); // mutating function
  void set_height(int height); // mutating function
  void get_width(); // accessor function
  void get_height(); // accessor function
  void display(); // display
  void draw_line(string end,string mid);
  void draw_vertices();
  void draw_wall();
};

Box::Box(int width, int height)
{
  set_width(width);
  set_height(height);
}

void Box::set_width(int width)
{
  assert(width > 0);
    m_width = width;

}

void Box::set_height(int height)
{

  assert(height > 0);
    m_height = height;
}

void Box::get_width()
{
    return m_width;
}

void Box::get_height()
{
     return m_height;
}
/*
box(6,3).display();
+-----+
|     |
|     |
|     |
+-----+
*/
void Box::display()
{
  draw_line("+","--");
  for (int i = 0; i < m_height; i++)
  {
    draw_line("|"," ");
  }
  draw_line("+","--");
}

void Box::draw_line(string end,string mid)
{
  cout << end;
  for (int i = 0; i < m_width-1; i++)
  {
    cout << mid;
  }
  cout << end << endl;
}
int main()
{
  //Box box(6,6);
  Box(6,3).display();


  return 0;
}
