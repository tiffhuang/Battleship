#include <iostream>
#include <ctime>
#include <vector>
#include <string>
using namespace std;
#include <iomanip>


const int DIMENSION = 8;
const int TOP = 0;
const int MID = 1;
const int BOTTOM = 3;

void draw_line(int line_type);
void draw_grid(char grid[DIMENSION][DIMENSION]);