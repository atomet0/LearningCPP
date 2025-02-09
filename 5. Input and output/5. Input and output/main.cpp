#include <iostream>
#include <string>
using namespace std;

int main(){

    //printing data
    std::cout << "Oh wowzers a window opened!" << std::endl;
/*
    int age {21};
    std::cout << "Age : " << age << std::endl;
*/
    int age1;
    std::cerr << "Error message : There is not an error here smh" << std::endl;
    std::clog << "Log message : Something happened" << std::endl;

    int end;
    
    string name;
    
    cout << "Please enter your name and age : " << endl;
    cout << "Name: ";
    cin >> name;

    cout << "Age: ";
    cin >> age1;

    cout << "Hello " << name << " you are " << age1 << " years old!" << endl;
    
    cout << "Press any key and enter to close the window :)";
    cin >> end;

    return 0;
}