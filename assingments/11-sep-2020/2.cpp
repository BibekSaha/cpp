#include <iostream>
#include <cmath>

using namespace std;

class Number {
  private:
    int number;

  public:
    Number(int number = 0) {
      this->number = number;
    }

    int numberOfDigits() const {
      int number = this->number, digits = 0;
      while (number > 0) {
        digits++;
        number /= 10;
      }
      return digits;
    }

    bool isPerfect() const {
      int perfectSum = 0, cond = sqrt(this->number);
      for (int i = 2; i <= cond; i++)
        if (this->number % i == 0) perfectSum += i + (number / i);
      return perfectSum + 1 == this->number;
    }

    bool isArmstrong() const {
      int number = this->number, armstrongSum = 0, digits = this->numberOfDigits();
      while (number > 0) {
        armstrongSum += pow(number % 10, digits);
        number /= 10;
      }
      return armstrongSum == this->number;
    }

    operator int() const { return this->number; }
};

int main(void) {
  Number num1 = 153;

  if (num1.isArmstrong())
    cout << num1 << " is an Armstrong number." << endl;
  else
    cout << num1 << " is NOT an Armstrong number." << endl;

  Number num2 = 6;

  if (num2.isPerfect())
    cout << num2 << " is a Perfect number." << endl;
  else
    cout << num2 << " is NOT a Perfect number." << endl;

  Number num = 12345;

  cout << num.numberOfDigits() << endl; 

  return 0;
}