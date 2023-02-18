#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

#include "GuestRecorder.h"

GuestRecorder::GuestRecorder(string n) : Recorder(n)
{
}

// if guest is regular guest and the room is not regular, record the information
void GuestRecorder::update(Reservation* r){
  	if(!r->getGuest()->getPrime() && r->getRoom()->get_r_type() != C_REG){
    		stringstream ss;
    		string s;
    		ss << "Name: " << r->getGuest()->getName();
    		s = ss.str();
    		collection.push_back(s);
  }
}
