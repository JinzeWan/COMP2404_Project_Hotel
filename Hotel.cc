#include <iostream>
using namespace std;
#include <string>
#include <vector>

#include "Hotel.h"
#include "ResManager.h"
#include "defs.h"

Hotel::Hotel(string n, ResManager* rm)
{
	name = n;
	rmp = rm;
	g_num = 0;
	
}

Hotel::~Hotel()
{
	for(int i = 0; i < g_num; i++)
		delete gArr[i];
	delete [] *gArr;

}

// return the room collection
RoomArray* Hotel::get_rArr()
{
	return &rArr;
}

// add a guest pointer to the guest collection
void Hotel::addGuest(Guest* gp)
{
	gArr[g_num] = gp;
	g_num++;

}

// add a room ppinter to the room collection
void Hotel::addRoom(Room* rp)
{
	rArr.add(rp);

}

// print all guest's information
void Hotel::printGuests()
{
	for(int i = 0; i < g_num; i++){
		gArr[i]->print();	
	}

}

// print all room's information
void Hotel::printRooms()
{
	rArr.print();

}

// search the guest by name and return it
bool Hotel::findGuest(string n, Guest** gp)
{
	for(int i = 0; i < g_num; i++){
		if(n == gArr[i]->getName()){
			*gp = gArr[i];
			return true;
		}
	}
	return false;
}
