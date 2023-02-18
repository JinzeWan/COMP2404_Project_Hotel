#ifndef CONTROL_H
#define CONTROL_H

#include "Guest.h"
#include "View.h"
#include "Hotel.h"
#include "ResManager.h"
#include "GuestRecorder.h"
#include "StayRecorder.h"
#include "UpgradeRecorder.h"

class Control
{
	public:
		Control();
		~Control();
		void launch();
	
	private:
		View view;
		Hotel *hotel;
		ResManager *resMgr;
		void initHotel();
};

#endif
