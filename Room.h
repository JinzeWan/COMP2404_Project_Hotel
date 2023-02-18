#ifndef ROOM_H
#define ROOM_H


#include "defs.h"

class Room
{
	public:
	Room(ReqRoomType, int, float);
	ReqRoomType get_r_type();
	int get_r_num();
	float get_d_rate();
	void print();
	void computePoints(int&);
	
	private:
	ReqRoomType r_type;
	int r_num;
	float d_rate;
	
};

#endif
