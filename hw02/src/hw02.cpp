#include <hw02.h>

std::string hw02(std::string str)
{
    std::string newstr(str.size(), ' ');
    int i = 0;
    for (char c : str)
    {
        if (newstr.find(c) == std::string::npos)
        {
            newstr[i] = c;
            i++;
        }
    }
    newstr.erase(i);
    return newstr;
}