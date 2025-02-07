#include <stdio.h>
#include "p99.c"

int main() {
  // Test outtextxy() function
  outtextxy(10, 20, "Hello World!");
  
  // Test settextstyle() function
  settextstyle(DEFAULT_FONT, HORIZ_DIR, 4);
  
  // Test setcolor() function
  setcolor(YELLOW);
  
  // Test setbkcolor() function
  setbkcolor(BLUE);
  
  // Test settextjustify() function
  settextjustify(CENTER_TEXT, TOP_TEXT);
  
  return 0;
}