#include <iostream>
using namespace std;
#include <string>

#include "Room.h"

Room::Room(ReqRoomType t, int n, float r)
{
	r_type = t;
	r_num = n;
	d_rate = r;
}

// return a string that represent the room's type
ReqRoomType Room::get_r_type()
{
	return r_type;
}

// return the room number
int Room::get_r_num() {return r_num;}

// retuen the daily rate of room
float Room::get_d_rate() {return d_rate;}

// print room's information
void Room::print()
{
	string s;
	switch(r_type){
		case C_REG:
			s = "Regular";
		case C_PREM:
			s = "Premium";
		case C_SUITE:
			s = "Suite";
	}
	
	cout << "Room number: " << r_num << " type: " << s << " daily rate: " << d_rate << endl;

}

// return the points earn value by a reference
void Room::computePoints(int& pts){

	if(r_type == C_SUITE){
		pts = d_rate*0.2;}
	else if(r_type == C_PREM){
		pts = d_rate*0.15;}
	else if(r_type == C_REG){
	 	pts = d_rate*0.1;}
}
