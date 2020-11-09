#include <iostream>

using namespace std;

class Beta; // declared beforehand because of Line 13

class Alpha {
  private:
    int data;

  public:
    Alpha() : data(10) {}  
    friend int friAlphaBeta(Alpha, Beta);
};

class Beta {
  private:
    int data;
  
  public:
    Beta() : data(100) {}
    friend int friAlphaBeta(Alpha, Beta);
};

int friAlphaBeta(Alpha a, Beta b) {
  return a.data + b.data;
}

int main(void) {
  Alpha a; Beta b;

  cout << friAlphaBeta(a, b) << endl;

  return 0;
}