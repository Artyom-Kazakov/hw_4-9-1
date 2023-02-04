#include <iostream>

class Fraction {

private:
	float numerator_;
	float denominator_;

public:
	Fraction(float numerator, float denumerator) {
		numerator_ = numerator;
		denominator_ = denumerator;
	}

	bool operator == (Fraction other) {
		return (this->numerator_ == other.numerator_) && (this->denominator_ == other.denominator_);
	}
	bool operator != (Fraction other) {
		return (this->numerator_ != other.numerator_) && (this->denominator_ != other.denominator_);
	}
	bool operator < (Fraction other) {
		return ((this->numerator_ / this->denominator_) < (other.numerator_ / other.denominator_));
	}
	bool operator > (Fraction other) {
		return ((this->numerator_ / this->denominator_) > (other.numerator_ / other.denominator_));
	}
	bool operator <= (Fraction other) {
		return ((this->numerator_ / this->denominator_) <= (other.numerator_ / other.denominator_));
	}
	bool operator >= (Fraction other) {
		return ((this->numerator_ / this->denominator_) >= (other.numerator_ / other.denominator_));
	}
};

int main() {
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << std::endl;
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << std::endl;
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << std::endl;
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << std::endl;
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << std::endl;
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << std::endl;
}