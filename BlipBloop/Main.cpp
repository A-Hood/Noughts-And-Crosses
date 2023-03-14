#include <iostream>
#include "Header.h"

// NAUGHTS AND CROSSES

std::string field[9] = { "   " ,"   " , "   ", "   " ,"   " , "   ", "   " ,"   " , "   " };

bool win = false;
bool oWin = false;
bool xWin = false;

std::string* ptrField = field;

int main()
{
	std::cout << "Welcome to Noughts and Crosses!\n\n\n";

	while (!(win))
	{
		OutputField(ptrField); // OUTPUT FIELD

		ptrField = OTurn(ptrField); // O TURN

		oWin = OWin(ptrField); // O WINS

		if (oWin)
		{
			std::cout << "\n";
			OutputField(ptrField); // OUTPUT FIELD
			std::cout << "\n\n\n=!=!=!=!=!= O WINS!! =!=!=!=!=!=\n\n";
			break;
		}

		OutputField(ptrField); // OUTPUT FIELD

		ptrField = XTurn(ptrField); // X TURN

		xWin = XWin(ptrField);

		if (xWin)
		{
			std::cout << "\n";
			OutputField(ptrField); // OUTPUT FIELD
			std::cout << "\n\n\n=!=!=!=!=!= X WINS!! =!=!=!=!=!=\n\n";
			break;
		}
	}


}



