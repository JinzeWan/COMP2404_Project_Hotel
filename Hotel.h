#ifndef HOTEL_H
#define HOTEL_H


#include "Guest.h"
#include "defs.h"
//#include "ResManager.h"
#include "RoomArray.h"

class ResManager;
class Hotel
{
	public:
	Hotel(string,ResManager*);
	~Hotel();
	RoomArray* get_rArr();
	void addGuest(Guest*);
	void addRoom(Room*);
	void printGuests();
	void printRooms();
	bool findGuest(string, Guest**);
	
	private:
	string name;
	Guest* gArr[MAX_ARR];
	int g_num;
	RoomArray rArr;
	ResManager* rmp;

};

#endif
