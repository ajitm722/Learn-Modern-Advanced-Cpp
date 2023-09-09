#include "cell.h"

// Draw the cell on the grid
void cell::draw(int row, int col) const {
  // ANSI control command
  // escape[n;mH moves the cursor to row n, column m
  // These are 1-based, i.e. row 1 is the first row
  std::cout << "\x1b[" << row + 1 << ";" << col + 1 << "H"; //
  std::cout << (alive ? live_cell : dead_cell);
}

// Ansi defined a set of commands for controlling terminals
// Programs can use these commands to change the way output is displayed
// These begin with the escape character followed by a square bracket 0x1b[         ESC = '\x1b'
// Move the cursor to row n, column m and display a character 0x1b[n;mH
// Clear the screen and return the cursor to "home" 0x1b[2J
