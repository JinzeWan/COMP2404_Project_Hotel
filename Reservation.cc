#include <iostream>
using namespace std;
#include <string>
#include <vector>

#include "Reservation.h"

Reservation::Reservation(Guest* g, Room* r, Date* d, int s){
  gp = g;
  rp = r;
  dp = d;
  stay = s;
  charge = rp->get_d_rate() * s;
}

Reservation::~Reservation()
{
	delete dp;
}

// return parameter
Guest* Reservation::getGuest(){
	return gp;
}

Room* Reservation::getRoom(){
	return rp;
}

Date* Reservation::getDate(){
	return dp;
}

int Reservation::getStay(){
	return stay;
}

float Reservation::getCharge(){
	return charge;
}

// print all information
void Reservation::print(){
  cout<<"Guest Name: "<< gp->getName() << endl;
  cout<<"Room Number: "<< rp->get_r_num() << endl;
  cout<<"Stay for "<< stay <<" days, Charge is " << charge << endl;
}

// if the date less than given resercation's date, return true, else return false
bool Reservation::lessThan(Reservation* rp)
{
	bool result = dp->lessThan(rp->getDate());
	return result;
}
