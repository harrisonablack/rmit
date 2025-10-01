#ifndef TASK_H
#define TASK_H

#include <string>

class PointerPair {
private:
    int* ptr1;  
    int* ptr2;   

public:
   PointerPair(int& a, int& b);
   void swapValues();
   std::string displayValues() const;
};

#endif  
