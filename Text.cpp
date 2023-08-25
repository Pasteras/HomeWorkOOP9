#include "Text.h"

Text::Text()
{
	str = "";
}

Text::Text(string str)
{
	this->str = str;
}

void Text::setStroka(string str)
{
	this->str = str;
}

string Text::getStroka()
{
	return str;
}


Text Text::operator*(Text b)
{
	Text temp;

	for (int i = 0; i < this->str.length(); i++)
	{
		for (int j = 0; j < b.str.length(); j++)
		{
			if (this->str[i] == b.str[j])
			{
				temp.str += this->str[i];
			}
		}
	}

	return temp;
}