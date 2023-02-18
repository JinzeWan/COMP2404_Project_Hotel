#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

#include "StayRecorder.h"

StayRecorder::StayRecorder(string n)
	: Recorder(n)
{
}

// if stay more than 3 days, record the information
void StayRecorder::update(Reservation* r){
  	if(r->getStay() > 3){
		stringstream ss;
 		string s;
		ss << "Name: " << r->getGuest()->getName() << " Stay: " << r->getStay() << "days";
    		s = ss.str();
    		collection.push_back(s);
  	}
}
