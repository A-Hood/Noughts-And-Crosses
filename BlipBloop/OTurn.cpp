#include <iostream>
#include "Header.h"

std::string* OTurn(std::string* ptrField)
{
	bool turnValid = false;

	int column = 0;
	int column_in_array = 0;
	int row = 0;

	std::cout << "\n\nWhat row do you want to put the X in? (1, 2, 3): ";
	std::cin >> row;

	while (!(turnValid))
	{
		if (row == 1) // IF ROW SELECTED IS 1
		{
			if (!(ptrField[0] == "   ") && !(ptrField[1] == "   ") && !(ptrField[2] == "   ")) // IF ROW 1 HAS NO SPACE
			{
		
				std::cout << "\n\nTurn invalid!\n\n";
			}

			if (ptrField[0] == "   " || ptrField[1] == "   " || ptrField[2] == "   ") // IF ANY OF ROW 1 HAS SPACE
			{
				column_in_array = 0;
				turnValid = true;
				break;
			}
		}

		else if (row == 2) // IF ROW SELECTED IS 2
		{
			if (!(ptrField[3] == "   ") && !(ptrField[4] == "   ") && !(ptrField[5] == "   ")) // IF ROW 2 HAS NO SPACE
			{
						std::cout << "\n\nTurn invalid!\n\n";
			}

			if (ptrField[3] == "   " || ptrField[4] == "   " || ptrField[5] == "   ") // IF ANY OF ROW 2 HAS SPACE
			{
				column_in_array = 3;
				turnValid = true;
				break;
			}
		}

		else if (row == 3) // IF ROW SELECTED IS 3
		{
			if (!(ptrField[6] == "   ") && !(ptrField[7] == "   ") && !(ptrField[8] == "   ")) // IF ROW 3 HAS NO SPACE
			{
				std::cout << "\n\nTurn invalid!\n";
			}

			if (ptrField[6] == "   " || ptrField[7] == "   " || ptrField[8] == "   ") // IF ROW 3 HAS ANY SPACE
			{
				column_in_array = 6;
				turnValid = true;
				break;
			}
		}

		std::cout << "\nPick a different spot!: ";
		std::cin >> row;
	}

	std::cout << "\n\n";
	turnValid = false;

	std::cout << "What column do you want to put the X in? (1, 2, 3): ";
	std::cin >> column;

	while (!(turnValid))
	{
		if (column == 1) // IF COLUMN SELECTED IS 1
		{
			if (ptrField[column_in_array + 0] == " X ") // IF SPOT IS TAKEN
			{
				std::cout << "\n\nInvalid spot as it is taken!\n\n";
			}
			else if (ptrField[column_in_array + 0] == " O ") // IF SPOT IS TAKEN
			{
				std::cout << "\n\nInvalid spot as it is taken!\n\n";
			}
			else if (ptrField[column_in_array + 0] == "   ") // IF SPOT ISN'T TAKEN
			{
				ptrField[column_in_array + 0] = " O ";
				return ptrField;
			}
		}

		else if (column == 2) // IF COLUMN SELECTED IS 2
		{
			if (ptrField[column_in_array + 1] == " X ") // IF SPOT IS TAKEN
			{
				std::cout << "\n\nInvalid spot as it is taken!\n\n";
			}
			else if (ptrField[column_in_array + 1] == " O ") // IF SPOT IS TAKEN
			{
				std::cout << "\n\nInvalid spot as it is taken!\n\n";
			}
			else if (ptrField[column_in_array + 1] == "   ") // IF SPOT ISN'T TAKEN
			{
				ptrField[column_in_array + 1] = " O ";
				return ptrField;
			}
		}

		else if (column == 3) // IF COLUMN SELECTED IS 3
		{
			if (ptrField[column_in_array + 2] == " X ") // IF SPOT IS TAKEN
			{
				std::cout << "\n\nInvalid spot as it is taken!\n\n";
			}
			else if (ptrField[column_in_array + 2] == " O ") // IF SPOT IS TAKEN
			{
				std::cout << "\n\nInvalid spot as it is taken!\n\n";
			}
			else if (ptrField[column_in_array + 2] == "   ") // IF SPOT ISN'T TAKEN
			{
				ptrField[column_in_array + 2] = " O ";
				return ptrField;
			}
		}
		std::cout << "Please select another row!: ";
		std::cin >> column;
	}
}