#ifndef TRIANGLEH
#define TRIANGLEH

class Triangle
{
private:
    int sideA;
    int sideB;
    int sideC;

public:
    Triangle(){};
    Triangle(int a, int b, int c);
    int getSideA();
    int getSideB();
    int getSideC();
    void printTri() const;
};

#endif
