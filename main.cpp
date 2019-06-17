#include <iostream>
#include <SFML/Graphics.hpp>
#include <ncurses.h>

using namespace std;
using namespace sf;

int main(){
  int i;
  initscr();
  noecho();
  printw("jejeje");
  getch();
  RenderWindow w(VideoMode(600,600),"JEJEJEJE");
  VertexArray l(Lines,164);
  for(i=0;i<164;i++) l[i].color=Color::Black;
  for(i=0;i<80;i+=2){
    l[i].position=Vector2f(7.5*i,295);
    l[i+1].position=Vector2f(7.5*i,305);
  }
  for(i=0;i<80;i+=2){
    l[i+80].position=Vector2f(295,7.5*i);
    l[i+81].position=Vector2f(305,7.5*i);
  }
  l[160].position=Vector2f(300,0);
  l[161].position=Vector2f(300,600);
  l[162].position=Vector2f(0,300);
  l[163].position=Vector2f(600,300);

  VertexArray p(Points,500);
  for(i=0;i<500;i++){
    p[i].position=Vector2f(300+i,300-i);
    p[i].color=Color::Blue;
  }

  while(w.isOpen()){
    Event e;
    while(w.pollEvent(e)) if(e.type==Event::Closed) w.close();
    w.clear(Color(250,250,250));
    w.draw(l);
    w.draw(p);

    w.display();
  }
  endwin();
  
  
  return 0;
}
