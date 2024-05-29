// Question 1 
/*#include<iostream>
#include<string>


using namespace std;

double add(int x, double y);

int main(){
    int i = 7.5; 
    double d = 10.5;
    std::string s = "d + i = ";

    double sum = add(i, d);

    cout<< s << sum << endl;

    return EXIT_SUCCESS;
}

double add(int x, double y){
    return x + y;
}

*/

// Question 2

// #include<iostream>
// #include<string>

// using namespace std;

// int main(){
//     std::string name;
//     std::string dob;
//     int age;
//     cout << "Please Enter your Name: " << endl;
//     getline(cin, name);
//     cout << "Please Enter your Date of Birth: " << endl;
//     cin >> dob;
//     cout << "Please Enter your Age: " << endl;
//     cin >> age;

//     cout << "Name: " << name << endl;
//     cout << "Age: " << age << endl;
//     cout << "DOB: " << dob << endl;

//     return 0;
// }


// Question 3

// #include<iostream>

// using namespace std;

// int main(){
//     // a part
//     // for(int i = 1; i <= 6; i++){
//     //     for(int j = 0; j < i; j++){
//     //         cout << "*";
//     //     }
//     //     cout << endl;
//     // }
//     // b part 

//     // for(int i = 1; i <= 6; i++){
//     //     for(int j = 6; j > i; j--){
//     //         cout << " ";
//     //     }
//     //     for(int k = 0; k < i; k++){
//     //         cout << "*";
//     //     }
//     //     cout << endl;
//     // }

// // c and d part 
//     for(int i = 0; i < 6; i++){
//         for(int j = 6; j > i; j--){
//             cout << " ";
//         }
//         for(int k = 0; k <= i; k++){
//             cout << "*";
//         }
//         for(int m = 1; m <= i; m++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for(int j = 0; j < 5; j++){
//         for(int i = 0; i <= j + 1; i++){
//             cout << " ";
//         }
//         for(int k = 5; k > j; k--){
//             cout << "*";
//         }
//         for(int m = 4; m > j; m--){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// question 4
// #include<iostream>

// using namespace std;

// #define pie 3.14

// float area(float radius);

// int main(){
//     float rad;
//     cout << "Please enter the radius of circle who's are you want to compute: " << endl;
//     cin >> rad;

//     // float ar = area(rad);

//     cout << "Area of given circle is: " << area(rad) << endl;

//     return 0;
// }

// float area(float r){
//     return pie * r * r; 
// }


// Question 6

// #include<iostream>

// using namespace std;

// int sum(int num[], int length){
//     int retVal = 0;
//     for(int i = 0; i < length; i++){
//         retVal = retVal + num[i];
//     }
//     return retVal;
// }

// int main(){
//     int l = 10;
//     int numArray[l];

//     for(int i = 0; i < l; i++){
//         cout << "Enter the number for Array: " << endl;
//         cin >> numArray[i];
//     }

//     cout << "Sum of the array is: " << sum(numArray, l) << endl;
//     return 0;
// }


// question 7

#include<iostream> 

#define LENGTH    10

using namespace std;

void printArray(int array[], int length);

int main(void){
    int a[LENGTH] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[LENGTH] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};

    printArray(a, LENGTH);
    printArray(b, LENGTH*2);

    return EXIT_SUCCESS;
}

void printArray(int array[], int length){
    for(int i = 0; i < length; ++i){
        cout << "array[" << i << "] = " << array[i] << endl;
    }
    cout << endl;
}