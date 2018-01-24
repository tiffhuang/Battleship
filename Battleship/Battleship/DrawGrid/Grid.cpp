#include "Grid.h"


// FUNCTION: draw_grid()
// OBJECTIVE: draws the grid, passed to the fuction as a parameter
// RETURNS: no return
void draw_grid(char grid[DIMENSION][DIMENSION]) {
	int x, y;
	system("cls");
	cout << endl << endl << endl;
	cout << "    ";
	for (int i = 0; i < DIMENSION; i++)
		cout << "  " << setw(2) << i ;
	cout << endl;
	draw_line(TOP);
	for (x = 0; x < DIMENSION; x++)
	{
		cout << "  " << setw(2) << x << " ";
		for (y = 0; y < DIMENSION; y++)
		{
			if (y == 0)
				cout << char(186);
			cout << char(32) << grid[x][y] << char(32) << char(186);

		}
		cout << endl;
		if (x < (DIMENSION - 1)) {
			draw_line(MID);
		}
	}
	draw_line(BOTTOM);
	cout << endl;
}

// FUNCTION: draw_line()
// OBJECTIVE: draws an horizontal line:
//       - Top line, including the ASCII characters of a top line
//       - Mid line, including the corresponding ASCII characters
//       - Bottom line, including all characters for the bottom part of the table
// RETURNS: no return
void draw_line(int line_type) {
	char line[4 * DIMENSION + 2];
	cout << "     ";
	for (int i = 0; i < DIMENSION; i++) {
		switch (line_type) {
		case TOP: line[4 * i] = (char) 203;
			break;
		case MID: line[4 * i] = (char) 206;
			break;
		case BOTTOM: line[4 * i] = (char) 202;
			break;
		}
		line[4 * i + 1] = (char) 205;
		line[4 * i + 2] = (char) 205;
		line[4 * i + 3] = (char) 205;
	}
	switch (line_type) {
	case TOP: line[0] = (char) 201;
		line[sizeof(line) / sizeof(line[0]) - 2] = (char) 187;
		break;
	case MID: line[0] = (char) 204;
		line[sizeof(line) / sizeof(line[0]) - 2] = (char) 185;
		break;
	case BOTTOM: line[0] = (char) 200;
		line[sizeof(line) / sizeof(line[0]) - 2] = (char) 188;
		break;
	}
	line[sizeof(line) / sizeof(line[0]) - 1] = '\0';

	cout << line << endl;
}