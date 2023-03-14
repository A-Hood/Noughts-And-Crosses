#include <iostream>
#include "Header.h"

bool OWin(std::string* ptrField) // O WINS IF THIS
{
	// HORIZONTALS

	if (ptrField[0] == " O " && ptrField[1] == " O " && ptrField[2] == " O ")
	{
		return true;
	}
	else if (ptrField[3] == " O " && ptrField[4] == " O " && ptrField[5] == " O ")
	{
		return true;
	}
	else if (ptrField[6] == " O " && ptrField[7] == " O " && ptrField[8] == " O ")
	{
		return true;
	}

	// VERTICALS

	else if (ptrField[0] == " O " && ptrField[3] == " O " && ptrField[6] == " O ")
	{
		return true;
	}
	else if (ptrField[1] == " O " && ptrField[4] == " O " && ptrField[7] == " O ")
	{
		return true;
	}
	else if (ptrField[2] == " O " && ptrField[5] == " O " && ptrField[8] == " O ")
	{
		return true;
	}

	// DIAGONALS

	else if (ptrField[0] == " O " && ptrField[4] == " O " && ptrField[8] == " O ")
	{
		return true;
	}
	else if (ptrField[6] == " O " && ptrField[4] == " O " && ptrField[2] == " O ")
	{
		return true;
	}

	else { return false; }
}

/* ================================================================================================ */

bool XWin(std::string* ptrField) // X WINS IF THIS
{
	// HORIZONTALS

	if (ptrField[0] == " X " && ptrField[1] == " X " && ptrField[2] == " X ")
	{
		return true;
	}
	else if (ptrField[3] == " X " && ptrField[4] == " X " && ptrField[5] == " X ")
	{
		return true;
	}
	else if (ptrField[6] == " X " && ptrField[7] == " X " && ptrField[8] == " X ")
	{
		return true;
	}

	// VERTICALS

	else if (ptrField[0] == " X " && ptrField[3] == " X " && ptrField[6] == " X ")
	{
		return true;
	}
	else if (ptrField[1] == " X " && ptrField[4] == " X " && ptrField[7] == " X ")
	{
		return true;
	}
	else if (ptrField[2] == " X " && ptrField[5] == " X " && ptrField[8] == " X ")
	{
		return true;
	}

	// DIAGONALS

	else if (ptrField[0] == " X " && ptrField[4] == " X " && ptrField[8] == " X ")
	{
		return true;
	}
	else if (ptrField[6] == " X " && ptrField[4] == " X " && ptrField[2] == " X ")
	{
		return true;
	}

	else { return false; }
}