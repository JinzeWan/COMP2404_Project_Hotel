#ifndef STAYRECORDER_H
#define STAYRECORDER_H

#include "Recorder.h"

class StayRecorder : public Recorder
{
  public: 
    StayRecorder(string);
    virtual void update(Reservation*);
	
};

#endif
