#include <ncurses.h>

int main() {
    initscr(); // Initialize the ncurses library
    printw("ASCII Table\n\n");

    for (int i = 0; i < 128; i++) {
        printw("%3d: %c   ", i, i);
        if ((i + 1) % 8 == 0) {
            printw("\n");
        }
    }

    refresh(); // Refresh the screen
    getch();    // Wait for user input
    endwin();   // End the ncurses session

    return 0;
}
