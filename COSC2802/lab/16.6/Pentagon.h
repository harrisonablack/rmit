#ifndef PENTAGONH
#define PENTAGONH

class Pentagon {
private:    
   int sideA;
   int sideB;
   int sideC;
   int sideD;
   int sideE;

public:
   Pentagon() {};
   Pentagon(int a, int b, int c, int d, int e);
   int getSideA();
   int getSideB();
   int getSideC();
   int getSideD();
   int getSideE();
   void printPent() const;
};

#endif
