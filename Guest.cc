#include <iostream>
using namespace std;
#include <string>
#include <vector>

#include "Guest.h"

Guest::Guest(string n, bool p){
  name = n;
  type = p;
  number = 0;
}

// return the type of guest, if it is  a premium guest, return true, else return false
bool Guest::getPrime() {return type;}

// return the guest name
string Guest::getName() {return name;}

// add the guest's points
void Guest:: addPts(int p)
{
	number += p;
}

// print the guest's information
void Guest::print(){
  cout << "Name: " << name;
  if(type)
	cout << "Type: prime" << endl;
  else
  	cout << "Type: regular" << endl;
  cout << "points: " << number << endl;
}


