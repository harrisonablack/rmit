#ifndef RECTANGLEH
#define RECTANGLEH

class Rectangle {
private:
   int sideA;
   int sideB;
   int sideC;
   int sideD;

public:
   Rectangle() {};
   Rectangle(int a, int b, int c, int d);
   int getSideA();
   int getSideB();
   int getSideC();
   int getSideD();
   void printRect() const;
};

#endif
