
#include <graphics.h>

void test_text_rendering() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Set text style
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);

    // Set text color
    setcolor(WHITE);

    // Set background color
    setbkcolor(BLUE);

    // Set text justification
    settextjustify(CENTER_TEXT, CENTER_TEXT);

    // Render text at specified coordinates
    outtextxy(getmaxx() / 2, getmaxy() / 2, "Hello, World!");

    // Wait for a key press
    getch();

    // Close the graphics mode
    closegraph();
}

int main() {
    test_text_rendering();
    return 0;
}
