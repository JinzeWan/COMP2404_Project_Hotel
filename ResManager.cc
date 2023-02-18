#include <iostream>
using namespace std;
#include <string>
#include <vector>

#include "ResManager.h"

ResManager::ResManager(Hotel *h)
{
	hp = h;
	arr_num = 0;
}

ResManager::~ResManager()
{
	for(int i = 0; i < arr_num; i++)
		delete resArr[i];
	delete [] *resArr;
	

	for(int i = 0; i < recArr.size(); i++)
		delete recArr[i];
		
}

// set the hotel useing the given hotel pointer
void ResManager::setHotel(Hotel* h)
{
	hp = h;
}

// add reservation to the collection
void ResManager::addReservation(string name, int yr, int mth, int day, int stay, ReqRoomType req)
{
	if(stay > 31)
		return;
		
  	Date* d = new Date(day,mth,yr);
  	Room* r;
  	Guest* g;
  	for(int i = 0; i < hp->get_rArr()->getSize();i++){
  	  	if(hp->get_rArr()->get(i)->get_r_type() == req){
   	  	 	r = hp->get_rArr()->get(i);
   	  	 	break;
    		}
  	}
  	
  	if(hp->findGuest(name, &g)){
    		Reservation* res = new Reservation(g, r, d, stay);
		if(arr_num == 0){
      			resArr[0] = res;
      			arr_num++;
    		}
    		else{
      			for(int i=arr_num-1;i>=0;i--) {
				if(resArr[i]->lessThan(res)){
	  			resArr[i+1] = res;
	  			break;
				}
        			resArr[i+1] = resArr[i];
				resArr[i] = res;
      			}
    			arr_num++;
    		}	
    		g->addPts(res->getCharge());
    		notify(res);
  		}
}

// add the given record to the collection of record
void ResManager::subscriber(Recorder* record)
{
	recArr.push_back(record);
	
}

// print all reservation information
void ResManager::print()
{
	for(int i = 0; i < arr_num; i++)
		resArr[i]->print();
		
}

// print all records information
void ResManager::printRecords()
{
	for(int i = 0; i < recArr.size(); i++)
		recArr[i]->printRecords();

}

// update records by the given reservation
void ResManager::notify(Reservation* rp)
{
	for(int i = 0; i < recArr.size(); i++)
		recArr[i]->update(rp);
		
}
