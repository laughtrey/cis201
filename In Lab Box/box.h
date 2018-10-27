#ifndef BOX_H
#define BOX_H
/*
class box
*/
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
#endif
