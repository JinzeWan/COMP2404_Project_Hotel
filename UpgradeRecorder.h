#ifndef UPGRADERECORDER_H
#define UPGRADERECORDER_H

#include "Recorder.h"

class UpgradeRecorder : public Recorder
{
  public: 
    UpgradeRecorder(string);
    virtual void update(Reservation*);
};

#endif
