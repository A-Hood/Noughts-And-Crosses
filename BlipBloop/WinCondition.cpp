#include <iostream>
#include "Header.h"

bool OWin(std::string* ptrField) // O WINS IF THIS
{
	// HORIZONTALS

	if (ptrField[0] == " O " && ptrField[1] == " O " && ptrField[2] == " O ") // 1ST HORIZONTAL
	{
		return true;
	}
	else if (ptrField[3] == " O " && ptrField[4] == " O " && ptrField[5] == " O ") // 2ND HORIZONTAL
	{
		return true;
	}
	else if (ptrField[6] == " O " && ptrField[7] == " O " && ptrField[8] == " O ") // 3RD HORIZONTAL
	{
		return true;
	}

	// VERTICALS

	else if (ptrField[0] == " O " && ptrField[3] == " O " && ptrField[6] == " O ") // 1ST COLUMN
	{
		return true;
	}
	else if (ptrField[1] == " O " && ptrField[4] == " O " && ptrField[7] == " O ") // 2ND COLUMN
	{
		return true;
	}
	else if (ptrField[2] == " O " && ptrField[5] == " O " && ptrField[8] == " O ") // 3RD COLUMN
	{
		return true;
	}

	// DIAGONALS

	else if (ptrField[0] == " O " && ptrField[4] == " O " && ptrField[8] == " O ") // TOP LEFT TO BOTTOM RIGHT 
	{
		return true;
	}
	else if (ptrField[6] == " O " && ptrField[4] == " O " && ptrField[2] == " O ") // TOP RIGHT TO BOTTOM LEFT
	{
		return true;
	}

	else { return false; }
}

/* ================================================================================================ */

bool XWin(std::string* ptrField) // X WINS IF THIS
{
	// HORIZONTALS

	if (ptrField[0] == " X " && ptrField[1] == " X " && ptrField[2] == " X ") // 1ST HORIZONTAL
	{
		return true;
	}
	else if (ptrField[3] == " X " && ptrField[4] == " X " && ptrField[5] == " X ") // 2ND HORIZONTAL
	{
		return true;
	}
	else if (ptrField[6] == " X " && ptrField[7] == " X " && ptrField[8] == " X ") // 3RD HORIZONTAL
	{
		return true;
	}

	// VERTICALS

	else if (ptrField[0] == " X " && ptrField[3] == " X " && ptrField[6] == " X ") // 1ST COLUMN
	{
		return true;
	}
	else if (ptrField[1] == " X " && ptrField[4] == " X " && ptrField[7] == " X ") // 2ND COLUMN
	{
		return true;
	}
	else if (ptrField[2] == " X " && ptrField[5] == " X " && ptrField[8] == " X ") // 3RD COLUMN
	{
		return true;
	}

	// DIAGONALS

	else if (ptrField[0] == " X " && ptrField[4] == " X " && ptrField[8] == " X ") // TOP LEFT TO BOTTOM RIGHT 
	{
		return true;
	}
	else if (ptrField[6] == " X " && ptrField[4] == " X " && ptrField[2] == " X ") // TOP RIGHT TO BOTTOM LEFT
	{
		return true;
	}

	else { return false; }
}