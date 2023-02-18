#ifndef DATE_H
#define DATE_H

class Date
{
  public:
    Date(int=0, int=0, int=2000);
    ~Date();
    void setDate(int, int, int);
    void print();
    bool lessThan(Date*);
    bool equal(Date*);
    void add(int);

  private:
    int day;
    int month;
    int year;
    int  lastDayInMonth();
    bool leapYear();
    string getMonthStr() const;
};

#endif
