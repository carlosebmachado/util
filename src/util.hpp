#ifndef UTIL_H
#define UTIL_H


#include <iostream>
#include <string>
#include <vector>


// Split a string.
std::vector<std::string> split(std::string string, char splitChar)
{
    auto strings = std::vector<std::string>();
    std::string currentString = "";
    for (char currentChar : string)
    {
        if (currentChar == splitChar)
        {
            if (!currentString.empty())
            {
                strings.push_back(currentString);
                currentString = "";
            }
            continue;
        }
        currentString += currentChar;
    }
    if (!currentString.empty())
    {
        strings.push_back(currentString);
    }
    return strings;
}

// Remove spaces in the begin of a string.
std::string trimLeft(std::string string)
{
    size_t begin = 0;
    for (size_t i = 0; i < string.size(); i++)
    {
        if (string[i] != ' ')
        {
            begin = i;
            break;
        }
    }
    return string.substr(begin, string.size());
}

// Remove spaces in the end of a string.
std::string trimRight(std::string string)
{
    size_t end = 0;
    for (size_t i = string.size(); i > 0; i--)
    {
        if (string[i - 1] != ' ')
        {
            end = i;
            break;
        }
    }
    return string.substr(0, end);
}

// Remove spaces in the begin and end of a string.
std::string trim(std::string string)
{
    return trimLeft(trimRight(string));
}

#endif // UTIL_H
