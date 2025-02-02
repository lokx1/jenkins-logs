
#include <graphics.h>

void test_text_rendering_functions() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Test settextstyle
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(100, 100, "Hello, World!");

    // Test setcolor
    setcolor(RED);
    outtextxy(100, 150, "This is red text");

    // Test setbkcolor
    setbkcolor(YELLOW);
    outtextxy(100, 200, "Yellow background");

    // Test settextjustify
    settextjustify(CENTER_TEXT, CENTER_TEXT);
    outtextxy(200, 250, "Centered Text");

    getch();
    closegraph();
}

int main() {
    test_text_rendering_functions();
    return 0;
}
