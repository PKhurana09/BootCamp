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

#include<iostream>

using namespace std;

#define pie 3.14

float area(float radius);

int main(){
    float rad;
    cout << "Please enter the radius of circle who's are you want to compute: " << endl;
    cin >> rad;

    // float ar = area(rad);

    cout << "Area of given circle is: " << area(rad) << endl;
    
    return 0;
}

float area(float r){
    return pie * r * r; 
}