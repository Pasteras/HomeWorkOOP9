#pragma once

#include <iostream>
using namespace std;

class Text
{
private:
    string str;
public:
    Text();
    Text(string);
    void setStroka(string);
    string getStroka();

    Text operator*(Text);

};