#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    cout<<"Enter Two Numbers: ";
    cin>>num1>>num2;
    cout<<"The first number is: "<<num1<<endl;
    cout<<"The second number is: "<<num2<<endl;
    
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int num1=5 , num2=3;
    
    if (num1==5 && num2==3)
    {
        cout<<"OK";
    }
    else
    {
        cout<<"Not OK";
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int num=5 , no=2;
    
    if ((num==5) || (no==3))
    {
        cout<<"OK";
    }
    else if (num==10)
    {
        cout<<"Not OK";
    }
    else
    {
        cout<<"Error";
    }
    
    return 0;
}