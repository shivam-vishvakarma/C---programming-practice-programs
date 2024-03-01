#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void drawRectangle(int x1, int y1, int x2, int y2, int color) {
    for (int y = y1; y <= y2; y++) {
        for (int x = x1; x <= x2; x++) {
            putpixel(x, y, color);
        }
    }
}

void drawBar(int x, int y, int width, int height, int color) {
    for (int i = 0; i < width; i++) {
        for (int j = 0; j < height; j++) {
            putpixel(x + i, y + j, color);
        }
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Program Files(x86)\\Dev-Cpp\\MinGW64"); // Change the path accordingly

    // Draw a rectangle at (100, 100) with size 200x100 and color YELLOW
    drawRectangle(100, 100, 300, 200, YELLOW);

    // Draw a bar at (400, 100) with size 20x80 and color RED
    drawBar(400, 100, 20, 80, RED);

    getch();
    closegraph();
    return 0;
}

