#include "nshort.h"

void start(){
  start_color();
  init_pair(1,COLOR_BLACK,COLOR_BLACK);
  init_pair(2,COLOR_RED,COLOR_BLACK);
  init_pair(3,COLOR_YELLOW,COLOR_BLACK);
  init_pair(4,COLOR_GREEN,COLOR_BLACK);
  init_pair(5,COLOR_CYAN,COLOR_BLACK);
  init_pair(6,COLOR_BLUE,COLOR_BLACK);
  init_pair(7,COLOR_WHITE,COLOR_BLACK);
}

void printc(char s[],int x){
  int i,y=sizeof(s);
  attron(COLOR_PAIR(x));
  for(i=0;i<y;i++)printw("%c",s[i]);
  attroff(COLOR_PAIR(x));
}
