#include<iostream>
using namespace std;

bool isValidName(string name)
{
   for(int i = 0 ; i < name.length() ; i++)
   { 
     if((name[i] < 65 || name[i] > 90) && (name[i] < 97 || name[i] > 122) && name[i] != 32)  //ascii code of space is 32
     return false;
   }
  return true;
}
bool isValidChar(char c)
{
     if((c < 65 || c > 90) && (c < 97 || c > 122))  //ascii code of space is 32
      return false;
     else
      return true;
}