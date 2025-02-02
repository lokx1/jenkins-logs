
#include <graphics.h>

void test_outtextxy() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    setcolor(WHITE);
    outtextxy(100, 100, "Hello, World!");

    delay(2000);
    closegraph();
}

void test_settextstyle() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 3);
    outtextxy(100, 100, "Sans Serif Font");

    settextstyle(GOTHIC_FONT, HORIZ_DIR, 2);
    outtextxy(100, 150, "Gothic Font");

    delay(2000);
    closegraph();
}

void test_setcolor() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    setcolor(RED);
    outtextxy(100, 100, "Red Text");

    setcolor(GREEN);
    outtextxy(100, 150, "Green Text");

    delay(2000);
    closegraph();
}

void test_setbkcolor() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    setbkcolor(BLUE);
    setcolor(WHITE);
    outtextxy(100, 100, "White on Blue");

    setbkcolor(RED);
    outtextxy(100, 150, "White on Red");

    delay(2000);
    closegraph();
}

void test_settextjustify() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    setcolor(WHITE);

    settextjustify(LEFT_TEXT, TOP_TEXT);
    outtextxy(100, 100, "Left-Top Justified");

    settextjustify(CENTER_TEXT, CENTER_TEXT);
    outtextxy(200, 200, "Center-Center Justified");

    settextjustify(RIGHT_TEXT, BOTTOM_TEXT);
    outtextxy(300, 300, "Right-Bottom Justified");

    delay(2000);
    closegraph();
}

int main() {
    test_outtextxy();
    test_settextstyle();
    test_setcolor();
    test_setbkcolor();
    test_settextjustify();
    return 0;
}
