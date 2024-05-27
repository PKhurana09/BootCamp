// Question 4

// #include<iostream>

// using namespace std;

// // Very Important point to note here is:
// // In C++, the division of 2 integers results in an integer if both operands are integers,
// // even if the result is assigned to a double variable.

// int main(){
//     int x = 2;
//     double y = 10.5;
//     double z = 0; 

//     cout << "Values of variables before computation." << endl;
//     cout << "Value of x is: " << x << endl;
//     cout << "Value of y is: " << y << endl;
//     cout << "Value of z is: " << z << endl;

//     cout << "Values of variables after computation." << endl;
//     x = x*x + x*y - x;
//     z = x/4;
//     y = z/2;
//     cout << "Value of x is: " << x << endl;
//     cout << "Value of y is: " << y << endl;
//     cout << "Value of z is: " << z << endl;
//     return 0;
// }

//Question 6

// #include<iostream>
// #define X 5
// #define Z (2+4)
// #define MESSAGE "The value of x is "


// int main(){
//     int x = X;
//     int y = 10;
//     x = x + y * Z;
//     std::cout << MESSAGE << x << std::endl;
//     return 0;
// }

// question 11. 

#include<iostream>

int foo(int x);

int main(){
    int x = 2;
    int y = foo(x);
    std::cout << "x = " << x << ", y = " << y << std::endl;
    return 0;
}

int foo(int x){
    +x;
    return x*2;
}