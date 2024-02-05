#include <iostream>
using namespace std;
class Complex{
  private:
    float real;
    float imaginary;
  public:
    Complex(){
      real=0;
      imaginary=0;
    }
    Complex(float r, float i){
      this->real=r;
      this->imaginary=i;
    }
    void print() {
      string realTemp;
      string imaginaryTemp;

      if (imaginary < 0) {
        imaginaryTemp = to_string(imaginary).insert(1, "i");
      } else if (imaginary > 0) {
        imaginaryTemp = "+i" + to_string(imaginary);
      } else if (imaginary == 0) {
        imaginaryTemp = "";
      }

      cout<<"result is: " << to_string(real) + imaginaryTemp << endl;
    }
    Complex operator+(Complex rhs){
      Complex temp;
      temp.real = this->real+rhs.real;
      temp.imaginary=this->imaginary+rhs.imaginary;

      return temp;
    }
    Complex operator-(Complex rhs){
      // To DO
      Complex temp;
      temp.real = this->real-rhs.real;
      temp.imaginary=this->imaginary-rhs.imaginary;

      return temp;
    }
    Complex operator*(const Complex& other) const {
      Complex temp;

      temp.real = (this->real*other.real - this->imaginary*other.imaginary);
      temp.imaginary = (this->real*other.imaginary + this->imaginary*other.real);

      return temp;
    }
    Complex operator/(const Complex& other) const {
      Complex temp;

      temp.real = (this->real*other.real + this->imaginary*other.imaginary)/(pow(other.real, 2) + pow(other.imaginary, 2));
      temp.imaginary = (this->imaginary*other.real - this->real*other.imaginary)/(pow(other.real, 2) + pow(other.imaginary, 2));

      return temp;
    }
    Complex conjugate() {
      Complex temp;

      temp.real = this->real;
      temp.imaginary = -1*this->imaginary;

      return temp;
    }
};
