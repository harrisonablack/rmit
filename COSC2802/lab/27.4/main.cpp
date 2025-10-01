#include <sstream>
#include <string>

class ComplexNumber {
private:
  int r;
  int i;

public:
  ComplexNumber(int r, int i) {
    this->r = r;
    this->i = i;
  }

  std::string getString() {
    std::ostringstream oss;

    oss << "(";

    if (this->r < 0) {
      oss << "-";
    }

    oss << std::to_string(this->r);

    if (this->i < 0) {
      oss << "-";
    }

    oss << std::to_string(this->i) << "i)";

    return oss.str();
  }

  friend ComplexNumber operator+(ComplexNumber &lhs, ComplexNumber &rhs) {
    return ComplexNumber((lhs.r + rhs.r), (lhs.i + rhs.i));
  }
};
