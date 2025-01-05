//? EXERCISE 3: STRING MANIPULATIONS
//? file: custom_string.cpp

//!----------------------------------------------------------------------------------------
//! This is the only file that you will need to modify in this exercise.
//! Also, you will submit only this file.
//! This file is the implementation for the class CustomString.
//!----------------------------------------------------------------------------------------

// Programming Technique II
// Semester 2, 2021/2022

// Section: 01
// Member 1's Name: Othman Hassan Othman Ali   Location: KLG (i.e. where are you currently located)
// Member 2's Name: Abdalla Ali Abdalla Ali  Location: KLG

// Log the time(s) your pair programming sessions
//  Date         Time (From)   To             Duration (in minutes)
//  29/11/2024   12:00 Pm   1:01 PM    1 hour and 1 minute


// Video link:
//   https://www.youtube.com/watch?v=Ux8ekylXXvA



#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#include "custom_string.hpp"

//?----------------------------------------------------------------------------------------
//? The following methods are fully given: a constructor, getData() and setData()
//?----------------------------------------------------------------------------------------

CustomString::CustomString(const string &_data) : data(_data) {}
string CustomString::getData() const { return data; }
void CustomString::setData(const string &_data) { data = _data; }

//! Task 1: Complete the implementation of the following mutator methods:
//!        (a) pushFront()
//!        (b) pushBack()
//!        (c) pop()
//!        (d) popFront()
//!        (e) popBack()

void CustomString::pushFront(const string &s)
{
    data = s + data;
}

void CustomString::pushBack(const string &s)
{
    data += s;

}

string CustomString::pop(int index, int count)
{
    string New = data.substr(index,count);
    data.erase(index, count);
    return New;
}

string CustomString::popFront(int count)
{
    string New = data.substr(0,count);
    data.erase(0, count);
    return New;
}

string CustomString::popBack(int count)
{
    string New = data.substr(data.length() - count, count);
    data.erase(data.length() - count, count);
    return New;

}

//! Task 2: Complete the implementation of the following overloaded operators:
//!        (a) operator !
//!        (b) operator *

CustomString CustomString::operator!() const
{
    string New = "";
    for (int i = data.size() - 1; i >= 0; i--)
        New += data[i];
    return CustomString (New);
}

CustomString CustomString::operator*(int count) const
{
    string New = "";
    for (int i = 0; i < count; i++)
        New += data;
    return CustomString(New);
}

//! Task 3: Complete the implementation of the following conversion methods:
//!        (a) toDouble()
//!        (b) toUpper()

double CustomString::toDouble() const
{
    return stod(data);
}

CustomString CustomString::toUpper() const
{
    string New = "";
    for (int i = 0; i < data.length(); i++)
        New += toupper(data[i]);
    return CustomString(New);
}