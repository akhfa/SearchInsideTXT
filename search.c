// reading a text file
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main () {
  string line;
  ifstream myfile ("search.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      system(line.c_str());
    }
    myfile.close();
  }

  else cout << "Unable to open file"; 

  return 0;
}
