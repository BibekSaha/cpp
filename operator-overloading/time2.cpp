#include <iostream>

using namespace std;

class Time24 {
  private:
    int hours, minutes, seconds;
  
  public:
    Time24(int hours = 0, int minutes = 0, int seconds = 0) {
      this->hours = hours;
      this->minutes = minutes;
      this->seconds = seconds;
    }

    int getHours() { return this->hours; }
    int getMinutes() { return this->minutes; }
    int getSeconds() { return this->seconds; }

    void display() const {
      if (this->hours < 10) cout << 0;
      cout << this->hours << ":";
      if (this->minutes < 10) cout << 0;
      cout << this->minutes << ":";
      if (this->seconds < 10) cout << 0;
      cout << this->seconds << endl;
    }
};

class Time12 {
  private:
    bool pm;
    int hrs, mins;
  
  public:
    Time12(bool pm = true, int hrs = 0, int mins = 0) {
      this->pm = pm;
      this->hrs = hrs;
      this->mins = mins;
    }

    Time12(Time24);

    void display() const {
      cout << this->hrs << ":";
      if (this->mins < 10) cout << 0;
      cout << this->mins << (this-pm ? " p.m." : " a.m.")
        << endl;
    }
};

// converting a Time24 object to a Time12 object
Time12::Time12(Time24 time) {
  this->hrs = time.getHours();
  this->pm = time.getHours() < 12 ? false : true;
  this->mins = time.getSeconds() > 30 ? time.getMinutes() + 1 : time.getMinutes();
  if (this->mins == 60) {
    this->mins = 0;
    ++this->hrs;
    if (this->hrs == 12 || this->hrs == 24) this->pm = !this->pm;
  }
  this->hrs = this->hrs < 13 ? this->hrs : this->hrs - 12;
  if (this->hrs == 0) {
    this->hrs = 12;
    this->pm = false;
  }
}

int main(void) {
  const Time24 time24;
  const Time12 time12;

  time12.display();
  time24.display();

  const Time12 t12 = Time24(22, 59, 45);

  t12.display();

  return 0;
}