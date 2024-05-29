#include<iostream>

using namespace std;

void defineCard(int num);

int main(){
    int number;
    cout << "Please enter the number for cards: " <<endl;
    cin >> number;
    defineCard(number);
    return 0;
}

void defineCard(int num){
    if(num > 48 || num < 0){
        cout << "Entered value is not in range. Please enter a number between 0 to 48 inclusive: " << endl;
        cin >> num;
        defineCard(num);
    }else if (num >=0 && num <= 6){
        cout << "Red " << ((num % 7) + 1) << endl;
    }else if(num >= 7 && num <= 13){
        cout << "Orange " << ((num % 7) + 1) << endl;
    }else if(num >= 14 && num <= 20){
        cout << "Yellow " << ((num % 7) + 1) << endl;
    }else if(num >= 21 && num <= 27){
        cout << "Green " << ((num % 7) + 1) << endl;
    }else if(num >= 28 && num <= 34){
        cout << "Blue " << ((num % 7) + 1) << endl;
    }else if(num >= 35 && num <= 41){
        cout << "Indigo " << ((num % 7) + 1) << endl;
    }else if(num >= 42 && num <= 48){
        cout << "Violet " << ((num % 7) + 1) << endl;
    }
}