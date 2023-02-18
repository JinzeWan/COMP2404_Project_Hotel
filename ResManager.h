#ifndef RESMANAGER_H
#define RESMANAGER_H

#include "defs.h"
#include "Hotel.h"
#include "Reservation.h"
#include "Recorder.h"
#include "Guest.h"
#include "GuestRecorder.h"
#include "StayRecorder.h"
#include "UpgradeRecorder.h"

class ResManager
{
	public:
	ResManager(Hotel*);
	~ResManager();
	void setHotel(Hotel*);
	void addReservation(string, int, int, int, int, ReqRoomType);
	void subscriber(Recorder*);
	void print();
	void printRecords();
	
	private:
	Hotel* hp;
	Reservation* resArr[MAX_ARR];
	int arr_num;
	vector<Recorder*> recArr;
	void notify(Reservation*);
};

#endif
