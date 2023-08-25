#include <iostream>
#include "Text.h"

using namespace std;

int main()
{
    Text str1("merc");
    Text str2("bmw");
    Text str3 = str1 * str2;

    cout << str3.getStroka();
}