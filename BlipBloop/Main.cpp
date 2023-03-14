#include <iostream>
#include "Header.h"

// NAUGHTS AND CROSSES

// GLOBALS
std::string field[9] = { "   " ,"   " , "   ", "   " ,"   " , "   ", "   " ,"   " , "   " }; // FIELD ARRAY

bool win = false; 
bool oWin = false;
bool xWin = false;
bool draw = false;

std::string* ptrField = field; // POINTER TO FIELD ARRAY
// GLOABLS END

int main()
{
	std::cout << "Welcome to Noughts and Crosses!\n\n\n";

	while (!(win)) // WHILE GAME IS ACTIVE
	{
		OutputField(ptrField); // OUTPUT FIELD

		ptrField = OTurn(ptrField); // O TURN

		oWin = OWin(ptrField); // O WIN = TRUE/FALSE

		if (oWin) // IF O WINS
		{
			std::cout << "\n";
			OutputField(ptrField); // OUTPUT FIELD
			std::cout << "\n\n\n=!=!=!=!=!= O WINS!! =!=!=!=!=!=\n\n";
			break;
		}

		draw = Draw(ptrField); // DRAW = TRUE/FALSE

		if (draw) // IF DRAW
		{
			std::cout << "\n";
			OutputField(ptrField); // OUTPUT FIELD
			std::cout << "\n\n\n=!=!=!=!=!= IT WAS A DRAW!! =!=!=!=!=!=\n\n";
			break;
		}

		OutputField(ptrField); // OUTPUT FIELD

		ptrField = XTurn(ptrField); // X TURN

		xWin = XWin(ptrField); // X WIN = TRUE/FALSE

		if (xWin) // IF X WINS
		{
			std::cout << "\n";
			OutputField(ptrField); // OUTPUT FIELD
			std::cout << "\n\n\n=!=!=!=!=!= X WINS!! =!=!=!=!=!=\n\n";
			break;
		}

		draw = Draw(ptrField); // DRAW = TRUE/FALSE

		if (draw) // IF DRAW
		{
			std::cout << "\n";
			OutputField(ptrField); // OUTPUT FIELD
			std::cout << "\n\n\n=!=!=!=!=!= IT WAS A DRAW!! =!=!=!=!=!=\n\n";
			break;
		}
	}
}



