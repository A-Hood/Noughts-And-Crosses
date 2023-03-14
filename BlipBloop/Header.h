#pragma once

void OutputField(std::string* ptrField);

std::string* XTurn(std::string* ptrField);

std::string* OTurn(std::string* ptrField);

bool OWin(std::string* ptrField);
bool XWin(std::string* ptrField);
bool Draw(std::string* ptrField);