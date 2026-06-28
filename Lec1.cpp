//Boilerplate code

#include <iostream>
using namespace std;

int main(){

    return 0;
}
 
#include <iostream>
using namespace std;

//First code
int main(){
    cout << "Disha" << "\n" << "Singh" << endl;
    return 0;
}

//type casting implicit 

#include <iostream>
using namespace std;

int main(){
    char grade = 'A';

    int value = grade;
    cout << value << endl;
    return 0;
}


//type casting explicit

#include <iostream>
using namespace std;

int main(){
    double price = 100.90;
    int newprice = (int)price;
    cout << newprice << endl;
    return 0;
}

//input in C++

#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age is: " << age << endl;
    return 0;
}


// operators : Arithmetic

#include<iostream>
using namespace std;

int main(){
    int a = 15, b = 10;
    cout <<"sum =" <<(a+b) << endl;
    cout <<"subtraction< =" << (a-b) << endl;
    cout <<"multiplication =" << (a*b) << endl;
    cout <<"division =" << (a/b) << endl;
    cout <<"modulus =" << (a%b) << endl;
    return 0;

}

// operators : Relational

#include<iostream> 
using namespace std;

int main(){
    int a = 15, b = 10;
    cout << (a==b) << endl;
    cout << (a!=b) << endl;
    cout << (a>b) << endl;
    cout << (a<b) << endl;
    cout << (a>=b) << endl;
    cout << (a<=b) << endl;
    return 0;

}


// operators : Logical

#include<iostream>
using namespace std;

int main(){
    int a = 15, b = 10;
    cout << (a==b && a>b) << endl;
    cout << (a!=b || a<b) << endl;
    cout << !(a>=b) << endl;
    return 0;

}







