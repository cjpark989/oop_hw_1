#include <iostream>
#include <string>
#include <utility> 

using namespace std;

string firstNum = "Enter the first number without spaces (for example 2+3i):";
string secondNum = "Enter the second number without spaces (for example 2+3i):";

class Handler{
    public:
        static Complex parseComplex(const string& complexStr) {
            float real = 0.0, imag = 0.0;
            size_t separatorPos = complexStr.find_first_of("+-", 1); 

            // Extracting the real part
            real = stof(complexStr.substr(0, separatorPos));

            size_t imagLength = complexStr.length() - separatorPos;
            imag = stof(complexStr.substr(separatorPos, imagLength).erase(1, 1));

            return Complex(real, imag);
        }
        static int print_and_get_choices(){
            int x;
            cout << "Please choose one of the following options: \n(1) Add \n(2) Subtract \n(3) Multiply \n(4) Divide \n(5) Find Conjugate \n(6) Quit \n======================== \nWhat is your choice (Please enter a number)? ";
            cin >> x;

            return x;
        }
        static void add_two_complex_numbers(){
            // To DO
            cout << "Add two complex numbers:\n====================="<<endl;

            string num_1;
            cout << firstNum << endl;
            cin >> num_1;

            Complex c1 = parseComplex(num_1);
            
            string num_2;
            cout << secondNum << endl;
            cin >> num_2;

            Complex c2 = parseComplex(num_2);

            Complex c3;

            c3 = c1 + c2;
            c3.print();
        }
        static void subtract_two_complex_numbers(){
            // TO DO
            cout << "Subtract two complex numbers:\n====================="<<endl;

            string num_1;
            cout << firstNum << endl;
            cin >> num_1;

            Complex c1 = parseComplex(num_1);
            
            string num_2;
            cout << secondNum << endl;
            cin >> num_2;

            Complex c2 = parseComplex(num_2);

            Complex c3;

            c3 = c1 - c2;
            c3.print();
        }
        static void multiply_two_complex_numbers(){
            // To DO
            // TO DO
            cout << "Multiply two complex numbers:\n====================="<<endl;

            string num_1;
            cout << firstNum << endl;
            cin >> num_1;

            Complex c1 = parseComplex(num_1);
            
            string num_2;
            cout << secondNum << endl;
            cin >> num_2;

            Complex c2 = parseComplex(num_2);

            Complex c3;

            c3 = c1 * c2;
            c3.print();
        }
        static void divide_two_complex_numbers(){
            // To DO
            cout << "Divide two complex numbers:\n====================="<<endl;

            string num_1;
            cout << firstNum << endl;
            cin >> num_1;

            Complex c1 = parseComplex(num_1);
            
            string num_2;
            cout << secondNum << endl;
            cin >> num_2;

            Complex c2 = parseComplex(num_2);

            Complex c3;

            c3 = c1 / c2;
            c3.print();
        }
        static void find_conjugate_of_a_complex_number(){
            cout << "Find conjugate of a complex number:\n====================="<<endl;

            string num_1;
            cout << firstNum << endl;
            cin >> num_1;

            Complex c1 = parseComplex(num_1);
            Complex c2 = c1.conjugate();
            c2.print();
        }
};
