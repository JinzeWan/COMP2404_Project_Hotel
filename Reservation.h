#ifndef RESERVATION_H
#define RESERVATION_H


#include "Guest.h"
#include "Date.h"
#include "Room.h"

class Reservation
{
	public: 
	Reservation(Guest*,Room*,Date*,int);
	~Reservation();
	Guest* getGuest();
	Room* getRoom();
	Date* getDate();
	int getStay();
	float getCharge();
	void print();
	bool lessThan(Reservation*);
	
	private:
	Guest* gp;
	Date* dp;
	int stay;
	Room*  rp;
	float charge;
	  
};

#endif
