// Conditional statements
//if-else statement

#include<iostream>
using namespace std;

int main(){
    int n = 45;

    if(n>=0) {
        cout << "n is Positive";
    } else {
        cout << "n is negative";
    }
    return 0 ;
}

//if-else-if statement

#include<iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if(marks>=90){
        cout << "Grade A";
    }else if(marks >= 80){
        cout << "Grade B";
    } else if(marks >= 70){
        cout << "Grade C";
    } else if(marks >= 60){
        cout << "Grade D";
    } else {
        cout << "Grade F";
    }
    return 0;
}   

//Q.Find the character lowercase or uppercase

#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if(ch >= 'A' && ch <= 'Z'){
        cout << "Uppercase";
    } else if(ch >= 'a' && ch <= 'z'){
        cout << "Lowercase";
    } else {
        cout << "Not an alphabet";
    }
    return 0;
}


// ternary statement

#include<iostream>
using namespace std;

int main(){
   int n = 45;

   cout << (n>= 0 ? "n is positive" : "n is negative");
    return 0;
}

// while loop

#include<iostream>
using namespace std;

int main(){
    int n = 20;
    int count = 1;

    while(count <= n){
        cout << count << " ";
        count++;
    }
    cout << endl;
    return 0;   
}


// for loop

#include<iostream>
using namespace std;

int main(){
    int n = 10;

    for (int i=1; i<=n; i++){
        cout << i << " ";
    }

    cout << endl;
    return 0;
}

//Q.Sum of numbers from 1 to n

#include<iostream>
using namespace std;

int main(){
    int n = 3;
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}


//Q.sum of all odd numbers from 1 to N

#include<iostream>
using namespace std;

int main(){
    int n = 10;
    int sum = 0;
    for(int i=1; i<=n; i++){
        if(i%2 !=0){
            sum += i;
        }
    }
    cout <<"Sum of odd numbers from 1 to  " << n << "is: " << sum << endl;
    return 0;   
}

//do while loop

#include<iostream>
using namespace std;

int main(){
    int n = 10;
    int i = 1;
    do{
        cout << i << " ";
        i++;
    }while(i <= n);
    cout << endl;
    return 0;
}

//Q.check if a number is prime or not

#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool isPrime = true;

    if(n <= 1){
        isPrime = false;
    } else {
        for(int i=2; i*i <= n; i++){
            if(n % i == 0){
                isPrime = false;
                break;
            }
        }
    }

    if(isPrime){
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}


//Nested loops
//Loop inside loop

#include<iostream>
using namespace std;

int main(){
    int n = 5;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}














