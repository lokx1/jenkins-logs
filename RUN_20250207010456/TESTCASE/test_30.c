#include <stdio.h>
#include "p99.c"

int main() {
    // Test outtextxy() function
    outtextxy(10, 20, "Hello World!");
    
    // Test settextstyle() function
    settextstyle(FONT_HERSHEY_SIMPLEX, HORIZ_DIR, 4);
    
    // Test setcolor() function
    setcolor(RED);
    
    // Test setbkcolor() function
    setbkcolor(BLUE);
    
    // Test settextjustify() function
    settextjustify(CENTER_JUSTIFY, TOP_JUSTIFY);
    
    return 0;
}