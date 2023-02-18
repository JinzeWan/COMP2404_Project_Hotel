#ifndef GUEST_H
#define GUEST_H



class Guest
{
  public: 
    Guest(string,bool=false);
    string getName();
    bool getPrime();
    void addPts(int);
    void print();
	
  private:
    string name;
    bool type;
    int number;
	  
};

#endif
