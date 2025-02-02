
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Test settextstyle()
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);

    // Test setcolor()
    setcolor(RED);

    // Test setbkcolor()
    setbkcolor(WHITE);

    // Test settextjustify()
    settextjustify(CENTER_TEXT, CENTER_TEXT);

    // Test outtextxy()
    outtextxy(200, 200, "Hello, World!");

    delay(5000);
    closegraph();
    return 0;
}
