#include <iostream>//headerfile which takes input and print output
using namespace std;//standerd

int main()//main function from where starts the execution of the program
{
    float a, b, c;//defining the variables
    cout << "please enter the values of a,b,c" << endl;//printing a line
    cin >> a >> b >> c;//taking input frrom user
    if (a > b)//condition if a is greater then b then enters in the if statement
    {
        if (a > c)//enterring in the if statement and checking another condition
        {
            cout << "the maximum number is " << a << endl;//if a is also greater then c then a is greater between all the numbers
        }
        else//if a is less then c then c is greater then all three numbers
        {
            cout << "the maximum number is " << c << endl;//printing c as a greater number
        }
    }
    else//if 1st condition falls means a is less then b then jumps on the else statement
    {
        if (b > c)//and  checking if b is greater then c or not if yes 
        {
            cout << "the maximum number is " << b << endl;//then printing the value of b as greater number
        }
        else//if b is less then c then jumps on the else statement
        {
            cout << "the maximum number is " << c << endl;//printing c is greater number
        }
    }

    return 0;
}
