```C
#include <graphics.h>
#include <conio.h>

void outtextxy(int x, int y, char *text);
void settextstyle(int font, int direction, int charsize);
void setcolor(int color);
void setbkcolor(int color);
void settextjustify(int horiz, int vert);

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    setcolor(RED);
    setbkcolor(WHITE);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    settextjustify(LEFT_TEXT, TOP_TEXT);
    outtextxy(100, 100, "Hello, World!");

    getch();
    closegraph();
    return 0;
}
```
This test case initializes a graphics window, sets the text color to red and the background color to white, sets the text style and justification, and then outputs the text "Hello, World!" at the coordinates (100, 100). It waits for a key press before closing the graphics window and ending the program.