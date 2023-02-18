#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

#include "UpgradeRecorder.h"

UpgradeRecorder::UpgradeRecorder(string n)
	: Recorder(n)
{
}

// if guest is regular and the spend more than $1500, record the informatoin
void UpgradeRecorder::update(Reservation* r){
  	if(!r->getGuest()->getPrime() && r->getCharge() > 1500){
    		stringstream ss;
    		string s;
    		ss << "Name: " << r->getGuest()->getName() << " Charge: " << r->getCharge() << "dollors";
    		s = ss.str();
    		collection.push_back(s);
  	}
}

