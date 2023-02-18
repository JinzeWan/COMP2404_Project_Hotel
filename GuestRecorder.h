#ifndef GUESTRECORDER_H
#define GUESTRECORDER_H

#include "Recorder.h"

class GuestRecorder : public Recorder
{
  public: 
    GuestRecorder(string);
    virtual void update(Reservation*);
};

#endif
