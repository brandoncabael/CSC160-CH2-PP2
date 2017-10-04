//Brandon Cabael
//05-SEP-2017
//Lesson 02, Page 173, Question 05
//Write out prime numbers between 3 and 100
//use nested loop with inner loop checking from 2 to n-1

//Include header files
#include<iostream>
#include<cstdlib>
#include<cmath>

//use namespace std
using namespace std;

int main() {

    //initiate bool prime number var
    bool prime_number;
    cout << "Here is a list of prime numbers between 3 and 100." << endl;
        
    //being outer nested loop
    for (int x = 3; x <= 100; x++)
        {

            //being inner nested loop
            prime_number = true;
            for (int y = 2; y <= (x - 1); y++)
            {

                //test if outer number is divisible by any inner numbers
                if ((x % y) == 0){
                    prime_number = false;
                }
            }
            
            //output prime numbers
            if (prime_number == true)
                cout << x << endl;
       }

       system("pause");
       return 0;
}