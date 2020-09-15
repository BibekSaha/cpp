#include <iostream>

using namespace std;

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

    void display() const {
      cout << this->hrs << ":";
      if (this->mins < 10) cout << 0;
      cout << this->mins << (this-pm ? " p.m." : " a.m.")
        << endl;
    }
};

class Time24 {
  private:
    int hours, minutes, seconds;
  
  public:
    Time24(int hours = 0, int minutes = 0, int seconds = 0) {
      this->hours = hours;
      this->minutes = minutes;
      this->seconds = seconds;
    }

    void display() const {
      if (this->hours < 10) cout << 0;
      cout << this->hours << ":";
      if (this->minutes < 10) cout << 0;
      cout << this->minutes << ":";
      if (this->seconds < 10) cout << 0;
      cout << this->seconds << endl;
    }

    operator Time12() const;
};

Time24::operator Time12() const {
  int hours = this->hours;
  bool pm = this->hours < 12 ? false : true;
  int minutes = this->seconds > 30 ? this->minutes + 1 : this->minutes;
  if (minutes == 60) {
    minutes = 0;
    ++hours;
    if (hours == 12 || hours == 24) pm = !pm;
  }
  hours = hours < 13 ? hours : hours - 12;
  if (hours == 0) {
    hours = 12;
    pm = false;
  }
  return Time12(pm, hours, minutes);
}

int main(void) {
  Time24 time24;
  Time12 time12;

  time12.display();
  time24.display();

  Time12 t12 = Time24(22, 59, 45);

  t12.display();

  return 0;
}