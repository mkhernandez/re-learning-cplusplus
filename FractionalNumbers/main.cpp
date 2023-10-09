#include <iostream>
#include <iomanip>

int main() {
   float number1 {1.12345678901234567890f};
   double number2 {1.12345678901234567890};
   long double number3 {1.12345678901234567890L};

   // Scientific notation
   double number5 {192400023};
   double number6 {1.92400023e8};
   double number7 {1.924e8};
   double number8 {0.00000000003498};
   double number9 {3.498e-11};

   double number10 {5.6};
   double number11 {};
   double number12 {};

   double result {number10 / number11};

   // Print the sizes
   std::cout << "size of float: " << sizeof(float) << std::endl;
   std::cout << "size of double: " << sizeof(double) << std::endl;
   std::cout << "size of long double: " << sizeof(long double) << std::endl;

   std::cout << std::setprecision(20); // set the precision of our output
   std::cout << "Number 1 is: " << number1 << std::endl;
   std::cout << "Number 2 is: " << number2 << std::endl;
   std::cout << "Number 3 is: " << number3 << std::endl;

   // Print result
   std::cout << number10 << " / " << number11 << " = " << result << std::endl;
   std::cout << result << " + " << number10 << " = " << result + number10 << std::endl;
   
   // NaN 
   result = number11 / number12;
   std::cout << number11 << " / " << number12 << " = " << result << std::endl;

   // Print scientific
   std::cout << "-----------------------------------------" << std::endl;
   std::cout << "Number 5 is: " << number5 << std::endl;
   std::cout << "Number 6 is: " << number6 << std::endl;
   std::cout << "Number 7 is: " << number7 << std::endl;
   std::cout << "Number 8 is: " << number8 << std::endl;
   std::cout << "Number 9 is: " << number9 << std::endl; 

   return 0; 
}