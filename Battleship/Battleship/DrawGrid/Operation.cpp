#include "Grid.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>

char my_grid[DIMENSION][DIMENSION];
char key_grid[DIMENSION][DIMENSION];

int main() {

	//Declaring Variables
	int score = 0;
	string name;
	char choice;

	char aircraft_carrier[6] = {};
	char battleship_1[4] = {};
	char battleship_2[4] = {};
	char destroyer_1[3] = {};
	char destroyer_2[3] = {};
	char destroyer_3[3] = {};
	char submarine_1[2] = {};
	char submarine_2[2] = {};
	char submarine_3[2] = {};
	char submarine_4[2] = {};

	int row_1;
	int row_2;
	int row_3;
	int row_4;
	int row_5;
	int row_6;
	int row_7;
	int row_8;
	int row_9;
	int row_10;
	int col_1;
	int col_2;
	int col_3;
	int col_4;
	int col_5;
	int col_6;
	int col_7;
	int col_8;
	int col_9;
	int col_10;
	int direct_1;
	int direct_2;
	int direct_3;
	int direct_4;
	int direct_5;
	int direct_6;
	int direct_7;
	int direct_8;
	int direct_9;
	int direct_10;

	//Draw Grid
	draw_grid(my_grid);
	bool game_end = true;
	bool win = true;
	int x, y;


	//Randomization
	int row, col, a, b, z;
	bool shipFilled = true;
	srand(time(0));

	while (game_end) {

		win = true;

		for (int i = 0; i < 8; ++i) {
			for (int j = 0; j < 8; ++j) {
				my_grid[i][j] = (char)00;
				key_grid[i][j] = (char)00;
				score = 0;
			}
		}

	//Aircraft Carrier Randomization
	row = rand() % 3;
	col = rand() % 3;
	z = rand() % 2;

	//Redeclaring row and column for aircraft carrier
	row_1 = row;
	col_1 = col;
	direct_1 = z;

	if (z == 0) {
		for (int i = 0; i < sizeof(aircraft_carrier); ++i) { // If ship is horizontal, then place aircraft carrier equal to 'x' on the keygrid.
			key_grid[row][col] = 'x';
			row += 1;
		}
	}
	else if (z == 1) {
		for (int j = 0; j < sizeof(aircraft_carrier); ++j) { // If ship is vertical, then place aircraft carrier equal to 'x' on the keygrid.
			key_grid[row][col] = 'x';
			col += 1;
		}
	}
	 

	//Battleship 1 Randomization
	while (shipFilled == true) {
		shipFilled = false;
		row = rand() % 5;
		col = rand() % 5;
		z = rand() % 2;
		a = row;
		b = col;

		//Redeclaring row and column for battleship_1
		row_2 = row;
		col_2 = col;
		direct_2 = z;

		for (int i = 0; i < sizeof(battleship_1); ++i) { // If ship is horizontal and the grid spot is equal to 'x' then a ship is already there. 
			if (z == 0) {
				
				if (key_grid[a][b] == 'x') {
					shipFilled = true;
				}
				a += 1;
			}
			if (z == 1) {
				
				if (key_grid[a][b] == 'x') {  // If ship is vertical and the grid spot is equal to 'x' then a ship is already there. 
					shipFilled = true;
				}
				b += 1;
			}
		}

	}
	if (z == 0) {
		for (int i = 0; i < sizeof(battleship_1); ++i) { //After checking if a ship is at the spot, if it is available assign the ship (horizontal)
			key_grid[row][col] = 'x';
			row += 1;
		}
	}
	else if (z == 1) {
		for (int j = 0; j < sizeof(battleship_1); ++j) { //After checking if a ship is at the spot, if it is available assign the ship (vertical)
			key_grid[row][col] = 'x';
			col += 1;
		}
	}
	shipFilled = true;


	//Battleship 2 Randomization
	while (shipFilled == true) {
		shipFilled = false;
		row = rand() % 5;
		col = rand() % 5;
		z = rand() % 2;
		a = row;
		b = col;

		//Redeclaring row and column for battleship_2
		row_3 = row;
		col_3 = col;
		direct_3 = z;

		for (int i = 0; i < sizeof(battleship_2); ++i) { 
			if (z == 0) {

				if (key_grid[a][b] == 'x') { // If ship is horizontal and the grid spot is equal to 'x' then a ship is already there. 
					shipFilled = true;
				}
				a += 1;
			}
			if (z == 1) {

				if (key_grid[a][b] == 'x') { // If ship is vertical and the grid spot is equal to 'x' then a ship is already there. 
					shipFilled = true;
				}
				b += 1;
			}
		}

	}
	if (z == 0) {
		for (int i = 0; i < sizeof(battleship_2); ++i) { //After checking if a ship is at the spot, if it is available assign the ship (horizontal)
			key_grid[row][col] = 'x';
			row += 1;

		}
	}
	else if (z == 1) {
		for (int j = 0; j < sizeof(battleship_2); ++j) { //After checking if a ship is at the spot, if it is available assign the ship (vertical)
			key_grid[row][col] = 'x';
			col += 1;
		}
	}
	shipFilled = true;

	//Destroyer 1 Randomization
	while (shipFilled == true) {
		shipFilled = false;
		row = rand() % 6;
		col = rand() % 6;
		z = rand() % 2;
		a = row;
		b = col;

		//Redeclaring row and column for destroyer_1
		row_4 = row;
		col_4 = col;
		direct_4 = z;

		for (int i = 0; i < sizeof(destroyer_1); ++i) {
			if (z == 0) {
				if (key_grid[a][b] == 'x') { // If ship is horizontal and the grid spot is equal to 'x' then a ship is already there. 
					shipFilled = true;
				}
				a += 1;
			}
			if (z == 1) {
				if (key_grid[a][b] == 'x') { // If ship is vertical and the grid spot is equal to 'x' then a ship is already there. 
					shipFilled = true;
				}
				b += 1;
			}
		}
	}
	if (z == 0) {
		for (int i = 0; i < sizeof(destroyer_1); ++i) { //After checking if a ship is at the spot, if it is available assign the ship (horizontal)
			key_grid[row][col] = 'x';
			row += 1;

		}
	}
	else if (z == 1) {
		for (int j = 0; j < sizeof(destroyer_1); ++j) { //After checking if a ship is at the spot, if it is available assign the ship (vertical)
			key_grid[row][col] = 'x';
			col += 1;
		}
	}
	shipFilled = true;

	//Destroyer 2 Randomization
	while (shipFilled == true) {
		shipFilled = false;
		row = rand() % 6;
		col = rand() % 6;
		z = rand() % 2;
		a = row;
		b = col;

		//Redeclaring row and column for destroyer_2
		row_5 = row;
		col_5 = col;
		direct_5 = z;

		for (int i = 0; i < sizeof(destroyer_2); ++i) {
			if (z == 0) {

				if (key_grid[a][b] == 'x') { // If ship is horizontal and the grid spot is equal to 'x' then a ship is already there. 
					shipFilled = true;
				}
				a += 1;
			}
			if (z == 1) {

				if (key_grid[a][b] == 'x') { // If ship is vertical and the grid spot is equal to 'x' then a ship is already there. 
					shipFilled = true;
				}
				b += 1;
			}
		}

	}
	if (z == 0) {
		for (int i = 0; i < sizeof(destroyer_2); ++i) { //After checking if a ship is at the spot, if it is available assign the ship (horizontal)
			key_grid[row][col] = 'x';
			row += 1;

		}
	}
	else if (z == 1) {
		for (int j = 0; j < sizeof(destroyer_2); ++j) { //After checking if a ship is at the spot, if it is available assign the ship (vertical)
			col += 1;
		}
	}
	shipFilled = true;

	//Destroyer 3 Randomization
	while (shipFilled == true) {
		shipFilled = false;
		row = rand() % 6;
		col = rand() % 6;
		z = rand() % 2;
		a = row;
		b = col;

		//Redeclaring row and column for destroyer_3
		row_6 = row;
		col_6 = col;
		direct_6 = z;

		for (int i = 0; i < sizeof(destroyer_3); ++i) {
			if (z == 0) {

				if (key_grid[a][b] == 'x') { // If ship is horizontal and the grid spot is equal to 'x' then a ship is already there. 
					shipFilled = true;
				}
				a += 1;
			}
			if (z == 1) {

				if (key_grid[a][b] == 'x') { // If ship is vertical and the grid spot is equal to 'x' then a ship is already there. 
					shipFilled = true;
				}
				b += 1;
			}
		}

	}
	if (z == 0) {
		for (int i = 0; i < sizeof(destroyer_3); ++i) { //After checking if a ship is at the spot, if it is available assign the ship (horizontal)
			key_grid[row][col] = 'x';
			row += 1;

		}
	}
	else if (z == 1) {
		for (int j = 0; j < sizeof(destroyer_3); ++j) { //After checking if a ship is at the spot, if it is available assign the ship (vertical)
			key_grid[row][col] = 'x';
			col += 1;
		}
	}
	shipFilled = true;

	//Submarine 1 Randomization
	while (shipFilled == true) {
		shipFilled = false;
		row = rand() % 7;
		col = rand() % 7;
		z = rand() % 2;
		a = row;
		b = col;

		//Redeclaring row and column for submarine_1
		row_7 = row;
		col_7 = col;
		direct_7 = z;

		for (int i = 0; i < sizeof(submarine_1); ++i) {
			if (z == 0) {

				if (key_grid[a][b] == 'x') { // If ship is horizontal and the grid spot is equal to 'x' then a ship is already there. 
					shipFilled = true;
				}
				a += 1;
			}
			if (z == 1) {

				if (key_grid[a][b] == 'x') { // If ship is vertical and the grid spot is equal to 'x' then a ship is already there. 
					shipFilled = true;
				}
				b += 1;
			}
		}

	}
	if (z == 0) {
		for (int i = 0; i < sizeof(submarine_1); ++i) { //After checking if a ship is at the spot, if it is available assign the ship (horizontal)
			key_grid[row][col] = 'x';
			row += 1;

		}
	}
	else if (z == 1) {
		for (int j = 0; j < sizeof(submarine_1); ++j) { //After checking if a ship is at the spot, if it is available assign the ship (vertical)
			key_grid[row][col] = 'x';
			col += 1;
		}
	}
	shipFilled = true;

	//Submarine 2 Randomization
	while (shipFilled == true) {
		shipFilled = false;
		row = rand() % 7;
		col = rand() % 7;
		z = rand() % 2;
		a = row;
		b = col;

		//Redeclaring row and column for submarine_2
		row_8 = row;
		col_8 = col;
		direct_8 = z;

		for (int i = 0; i < sizeof(submarine_2); ++i) {
			if (z == 0) {

				if (key_grid[a][b] == 'x') { // If ship is horizontal and the grid spot is equal to 'x' then a ship is already there. 
					shipFilled = true;
				}
				a += 1;
			}
			if (z == 1) {

				if (key_grid[a][b] == 'x') { // If ship is vertical and the grid spot is equal to 'x' then a ship is already there. 
					shipFilled = true;
				}
				b += 1;
			}
		}

	}
	if (z == 0) {
		for (int i = 0; i < sizeof(submarine_2); ++i) { //After checking if a ship is at the spot, if it is available assign the ship (horizontal)
			key_grid[row][col] = 'x';
			row += 1;

		}
	}
	else if (z == 1) {
		for (int j = 0; j < sizeof(submarine_2); ++j) { //After checking if a ship is at the spot, if it is available assign the ship (vertical)
			key_grid[row][col] = 'x';
			col += 1;
		}
	}
	shipFilled = true;

	//Submarine 3 Randomization
	while (shipFilled == true) {
		shipFilled = false;
		row = rand() % 7;
		col = rand() % 7;
		z = rand() % 2;
		a = row;
		b = col;

		//Redeclaring row and column for submarine_3
		row_9 = row;
		col_9 = col;
		direct_9 = z;

		for (int i = 0; i < sizeof(submarine_3); ++i) { 
			if (z == 0) {

				if (key_grid[a][b] == 'x') { // If ship is horizontal and the grid spot is equal to 'x' then a ship is already there. 
					shipFilled = true;
				}
				a += 1;
			}
			if (z == 1) {

				if (key_grid[a][b] == 'x') { // If ship is vertical and the grid spot is equal to 'x' then a ship is already there. 
					shipFilled = true;
				}
				b += 1;
			}
		}

	}
	if (z == 0) {
		for (int i = 0; i < sizeof(submarine_3); ++i) { //After checking if a ship is at the spot, if it is available assign the ship (horizontal)
			key_grid[row][col] = 'x';
			row += 1;

		}
	}
	else if (z == 1) {
		for (int j = 0; j < sizeof(submarine_3); ++j) { //After checking if a ship is at the spot, if it is available assign the ship (vertical)
			key_grid[row][col] = 'x';
			col += 1;
		}
	}
	shipFilled = true;

	//Submarine 4 Randomization
	while (shipFilled == true) {
		shipFilled = false;
		row = rand() % 7;
		col = rand() % 7;
		z = rand() % 2;
		a = row;
		b = col;

		//Redeclaring row and column for submarine_4
		row_10 = row;
		col_10 = col;
		direct_10 = z;

		for (int i = 0; i < sizeof(submarine_4); ++i) {
			if (z == 0) {

				if (key_grid[a][b] == 'x') { // If ship is horizontal and the grid spot is equal to 'x' then a ship is already there. 
					shipFilled = true;
				}
				a += 1;
			}
			if (z == 1) {

				if (key_grid[a][b] == 'x') { // If ship is vertical and the grid spot is equal to 'x' then a ship is already there. 
					shipFilled = true;
				}
				b += 1;
			}
		}

	}
	if (z == 0) {
		for (int i = 0; i < sizeof(submarine_4); ++i) { //After checking if a ship is at the spot, if it is available assign the ship (horizontal)
			key_grid[row][col] = 'x';
			row += 1;

		}
	}
	else if (z == 1) {
		for (int j = 0; j < sizeof(submarine_4); ++j) { //After checking if a ship is at the spot, if it is available assign the ship (vertical)
			key_grid[row][col] = 'x';
			col += 1;
		}
	}
	shipFilled = true;

	draw_grid(my_grid);


//Introduction		
	cout << "Welcome to my Battleship!" << endl;
	cout << "Please enter your name: " << endl;
	cin >> name;

//Hit or Miss
	while (win == true) {
		//How many spaces the ship takes up, it will be subtracted to 0 to determine if the ship is sunk or not
			int aircraft_carrier_score = 6;
			int battleship_1_score = 4;
			int battleship_2_score = 4;
			int destroyer_1_score = 3;
			int destroyer_2_score = 3;
			int destroyer_3_score = 3;
			int submarine_1_score = 2;
			int submarine_2_score = 2;
			int submarine_3_score = 2;
			int submarine_4_score = 2;
	//Symbol Key 
		cout << "x" << " = Hit!" << endl;
		cout << "O" << " = Miss!" << endl;
		cout << (char)177 << " = Ship Destroyed" << endl;

	//Player's Guess
		cout << "Please input x and y location: ";
		cin >> x >> y;
			if (key_grid[x][y] == 'x') {
				my_grid[x][y] = 'x';
				key_grid[x][y] = 'x';
			}
			else {
				my_grid[x][y] = 'O';
				key_grid[x][y] = 'O';
			}

//Scoring
	//Aircraft Carrier - checking if guess hits the ship
			row = row_1;
			col = col_1;

			for (int i = 0; i < sizeof(aircraft_carrier); ++i) {
				if (direct_1 == 0) {
					aircraft_carrier[i] = my_grid[row][col];
					if ((aircraft_carrier[i] == key_grid[row][col]) || (aircraft_carrier[i] == (char)177)) { //Checking if aircraft carrier is equal to key_grid or if it is 
						aircraft_carrier_score -= 1;
					}
					row += 1;
				}
				if (direct_1 == 1) {
					aircraft_carrier[i] = my_grid[row][col];
					if ((aircraft_carrier[i] == key_grid[row][col]) || (aircraft_carrier[i] == (char)177)) { //Checking if aircraft carrier is equal to key_grid or if it is 
						aircraft_carrier_score -= 1;
					}
					col += 1;
				}
			}

	// If the score of the ship is equal to 0, then it changes the 'x' to the symbol to symbolize destroyed ship.
			row = row_1;
			col = col_1;

				if (aircraft_carrier_score == 0) {
					for (int i = 0; i < sizeof(aircraft_carrier); ++i) {
						my_grid[row][col] = (char)177;
						if (direct_1 == 0) {
							aircraft_carrier[i] = my_grid[row][col];
							row += 1;
						}
						else if (direct_1 == 1) {
							aircraft_carrier[i] = my_grid[row][col];
							col += 1;
						}
					}
				}

	//Battleship 1 - checking if guess hits the ship
			row = row_2;
			col = col_2;

			for (int i = 0; i < sizeof(battleship_1); ++i) {
				if (direct_2 == 0) {
					battleship_1[i] = my_grid[row][col];
					if ((battleship_1[i] == key_grid[row][col]) || (battleship_1[i] == (char)177)) {
						battleship_1_score -= 1;
					}
					row += 1;
				}
				else if (direct_2 == 1) {
					battleship_1[i] = my_grid[row][col];
					if ((battleship_1[i] == key_grid[row][col]) || (battleship_1[i] == (char)177)) {
						battleship_1_score -= 1;
					}
					col += 1;
				}
			}

	// If the score of the ship is equal to 0, then it changes the 'x' to the symbol to symbolize destroyed ship.
			row = row_2;
			col = col_2;

				if (battleship_1_score == 0) {
					for (int i = 0; i < sizeof(battleship_1); ++i) {
						my_grid[row][col] = (char)177;
						if (direct_2 == 0) {
							battleship_1[i] = my_grid[row][col];
							row += 1;
						} 
						else if (direct_2 == 1) {
							battleship_1[i] = my_grid[row][col];
							col += 1;
						}
					}
				}

	//Battleship 2 - checking if guess hits the ship
			row = row_3; 
			col = col_3;

			for (int i = 0; i < sizeof(battleship_2); ++i) {
				if (direct_3 == 0) {
					battleship_2[i] = my_grid[row][col];
					if ((battleship_2[i] == key_grid[row][col]) || (battleship_2[i] == (char)177)) {
						battleship_2_score -= 1;
					}
						row += 1;
				}
					else if (direct_3 == 1) {
						battleship_2[i] = my_grid[row][col];
						if ((battleship_2[i] == key_grid[row][col]) || (battleship_2[i] == (char)177)) {
							battleship_2_score -= 1;
						}
						col += 1;
					}
				}

	// If the score of the ship is equal to 0, then it changes the 'x' to the symbol to symbolize destroyed ship.
			row = row_3;
			col = col_3;

			if (battleship_2_score == 0) {
				for (int i = 0; i < sizeof(battleship_2); ++i) {
					my_grid[row][col] = (char)177;
					if (direct_3 == 0) {
						battleship_2[i] = my_grid[row][col];
						row += 1;
					}
					else if (direct_3 == 1) {
						battleship_2[i] = my_grid[row][col];
						col += 1;
					}
				}
			}

	//Destroyer 1 - checking if guess hits the ship
			row = row_4;
			col = col_4;

			for (int i = 0; i < sizeof(destroyer_1); ++i) {
				if (direct_4 == 0) {
					destroyer_1[i] = my_grid[row][col];
					if ((destroyer_1[i] == key_grid[row][col]) || (destroyer_1[i] == (char)177)) {
						destroyer_1_score -= 1;
					}
					row += 1;
				}
				else if (direct_4 == 1) {
					destroyer_1[i] = my_grid[row][col];
					if ((destroyer_1[i] == key_grid[row][col]) || (destroyer_1[i] == (char)177)) {
						destroyer_1_score -= 1;
					}
					col += 1;
				}
			}
	// If the score of the ship is equal to 0, then it changes the 'x' to the symbol to symbolize destroyed ship.
			row = row_4;
			col = col_4;

			if (destroyer_1_score == 0) {
				for (int i = 0; i < sizeof(destroyer_1); ++i) {
					my_grid[row][col] = (char)177;
					if (direct_4 == 0) {
						destroyer_1[i] = my_grid[row][col];
						row += 1;
					}
					else if (direct_4 == 1) {
						destroyer_1[i] = my_grid[row][col];
						col += 1;
					}
				}
			}

	//Destroyer 2 - checking if guess hits the ship
			row = row_5;
			col = col_5;

			for (int i = 0; i < sizeof(destroyer_2); ++i) {
				if (direct_5 == 0) {
					destroyer_2[i] = my_grid[row][col];
					if ((destroyer_2[i] == key_grid[row][col]) || (destroyer_2[i] == (char)177)) {
						destroyer_2_score -= 1;
					}
					row += 1;
				}
				else if (direct_5 == 1) {
					destroyer_2[i] = my_grid[row][col];
					if ((destroyer_2[i] == key_grid[row][col]) || (destroyer_2[i] == (char)177)) {
						destroyer_2_score -= 1;
					}
					col += 1;
				}
			}
	// If the score of the ship is equal to 0, then it changes the 'x' to the symbol to symbolize destroyed ship.
			row = row_5;
			col = col_5;

			if (destroyer_2_score == 0) {
				for (int i = 0; i < sizeof(destroyer_2); ++i) {
					my_grid[row][col] = (char)177;
					if (direct_5 == 0) {
						destroyer_2[i] = my_grid[row][col];
						row += 1;
					}
					else if (direct_5 == 1) {
						destroyer_2[i] = my_grid[row][col];
						col += 1;
					}
				}
			}

	//Destroyer 3 - checking if guess hits the ship
			row = row_6;
			col = col_6;

			for (int i = 0; i < sizeof(destroyer_3); ++i) {
				if (direct_6 == 0) {
					destroyer_3[i] = my_grid[row][col];
					if ((destroyer_3[i] == key_grid[row][col]) || (destroyer_3[i] == (char)177)) {
						destroyer_3_score -= 1;
					}
					row += 1;
				}
				else if (direct_6 == 1) {
					destroyer_3[i] = my_grid[row][col];
					if ((destroyer_3[i] == key_grid[row][col]) || (destroyer_3[i] == (char)177)) {
						destroyer_3_score -= 1;
					}
					col += 1;
				}
			}
	// If the score of the ship is equal to 0, then it changes the 'x' to the symbol to symbolize destroyed ship.
			row = row_6;
			col = col_6;

			if (destroyer_3_score == 0) {
				for (int i = 0; i < sizeof(destroyer_3); ++i) {
					my_grid[row][col] = (char)177;
					if (direct_6 == 0) {
						destroyer_3[i] = my_grid[row][col];
						row += 1;
					}
					else if (direct_6 == 1) {
						destroyer_3[i] = my_grid[row][col];
						col += 1;
					}
				}
			}

	//Submarine 1 - checking if guess hits the ship
			row = row_7;
			col = col_7;

			for (int i = 0; i < sizeof(submarine_1); ++i) {
				if (direct_7 == 0) {
					submarine_1[i] = my_grid[row][col];
					if ((submarine_1[i] == key_grid[row][col]) || (submarine_1[i] == (char)177)) {
						submarine_1_score -= 1;
					}
					row += 1;
				}
				else if (direct_7 == 1) {
					submarine_1[i] = my_grid[row][col];
					if ((submarine_1[i] == key_grid[row][col]) || (submarine_1[i] == (char)177)) {
						submarine_1_score -= 1;
					}
					col += 1;
				}
			}
	// If the score of the ship is equal to 0, then it changes the 'x' to the symbol to symbolize destroyed ship.
			row = row_7;
			col = col_7;

			if (submarine_1_score == 0) {
				for (int i = 0; i < sizeof(submarine_1); ++i) {
					my_grid[row][col] = (char)177;
					if (direct_7 == 0) {
						submarine_1[i] = my_grid[row][col];
						row += 1;
					}
					else if (direct_7 == 1) {
						submarine_1[i] = my_grid[row][col];
						col += 1;
					}
				}
			}

	//Submarine 2 - checking if guess hits the ship
			row = row_8;
			col = col_8;

			for (int i = 0; i < sizeof(submarine_2); ++i) {
				if (direct_8 == 0) {
					submarine_2[i] = my_grid[row][col];
					if ((submarine_2[i] == key_grid[row][col]) || (submarine_2[i] == (char)177)) {
						submarine_2_score -= 1;
					}
					row += 1;
				}
				else if (direct_8 == 1) {
					submarine_2[i] = my_grid[row][col];
					if ((submarine_2[i] == key_grid[row][col]) || (submarine_2[i] == (char)177)) {
						submarine_2_score -= 1;
					}
					col += 1;
				}
			}
	// If the score of the ship is equal to 0, then it changes the 'x' to the symbol to symbolize destroyed ship.
			row = row_8;
			col = col_8;

			if (submarine_2_score == 0) {
				for (int i = 0; i < sizeof(submarine_2); ++i) {
					my_grid[row][col] = (char)177;
					if (direct_8 == 0) {
						submarine_2[i] = my_grid[row][col];
						row += 1;
					}

					else if (direct_8 == 1) {
						submarine_2[i] = my_grid[row][col];
						col += 1;
					}
				}
			}

	//Submarine 3 - checking if guess hits the ship
			row = row_9;
			col = col_9;

			for (int i = 0; i < sizeof(submarine_3); ++i) {
				if (direct_9 == 0) {
					submarine_3[i] = my_grid[row][col];
					if ((submarine_3[i] == key_grid[row][col]) || (submarine_3[i] == (char)177)) {
						submarine_3_score -= 1;
					}
					row += 1;
				}
				else if (direct_9 == 1) {
					submarine_3[i] = my_grid[row][col];
					if ((submarine_3[i] == key_grid[row][col]) || (submarine_3[i] == (char)177)) {
						submarine_3_score -= 1;
					}
					col += 1;
				}
			}
	// If the score of the ship is equal to 0, then it changes the 'x' to the symbol to symbolize destroyed ship.
			row = row_9;
			col = col_9;

			if (submarine_3_score == 0) {
				for (int i = 0; i < sizeof(submarine_3); ++i) {
					my_grid[row][col] = (char)177;
					if (direct_9 == 0) {
						submarine_3[i] = my_grid[row][col];
						row += 1;
					}
					else if (direct_9 == 1) {
						submarine_3[i] = my_grid[row][col];
						col += 1;
					}
				}
			}

	//Submarine 4 - checking if guess hits the ship
			row = row_10;
			col = col_10;

			for (int i = 0; i < sizeof(submarine_4); ++i) {
				if (direct_10 == 0) {
					submarine_4[i] = my_grid[row][col];
					if ((submarine_4[i] == key_grid[row][col]) || (submarine_4[i] == (char)177)) {
						submarine_4_score -= 1;
					}
					row += 1;
				}
				else if (direct_10 == 1) {
					submarine_4[i] = my_grid[row][col];
					if ((submarine_4[i] == key_grid[row][col]) || (submarine_4[i] == (char)177)) {
						submarine_4_score -= 1;
					}
					col += 1;
				}
			}
	// If the score of the ship is equal to 0, then it changes the 'x' to the symbol to symbolize destroyed ship.
			row = row_10;
			col = col_10;

			if (submarine_4_score == 0) {
				for (int i = 0; i < sizeof(submarine_4); ++i) {
					my_grid[row][col] = (char)177;
					if (direct_10 == 0) {
						submarine_4[i] = my_grid[row][col];
						row += 1;
					}
					else if (direct_10 == 1) {
						submarine_4[i] = my_grid[row][col];
						col += 1;
					}
				}
			}

			draw_grid(my_grid);

		// For every shot they guess, whether its a hit or miss, the score goes up by 1. Player should get the lowest score to win (least amount of guesses)
			score += 1;
			cout << "Score: " << score << endl;

		//If all the ships are sunk then the game ends
			if ((aircraft_carrier_score == 0) && (battleship_1_score == 0) && (battleship_2_score == 0) && (destroyer_1_score == 0) && (destroyer_2_score == 0) && (destroyer_3_score == 0) && (submarine_1_score == 0) && (submarine_2_score == 0) && (submarine_3_score == 0) && (submarine_4_score == 0)) {
				cout << "Congratulations! You won the game!" << endl;
				cout << "Do you want to play again? (Y/N): ";
				cin >> choice;

			//If they choose yes, the game resets and starts over again
				if ((choice == 'Y') || (choice == 'y')) {
					game_end = true;
					win = false;
				}
			//If they choose no, then the game exits
				else if ((choice == 'N') || (choice == 'n')) {
					game_end = false;
					return 0;
				}
			}
		}
	
	}
	
	system("PAUSE");
	
	return 0;
}
