#include<iostream>
using namespace std;
int sum(int a, int b)
{
 int c = a+b;
 return c;
}
    void swap(int a, int b){
        int temp = a;
        a = b;
        b = temp;
    }
int main(){
    cout<<"the sum of 3 and 4 is: "<<sum(3,4)<<endl;
    int a = 20; int b = 30;
    cout<<"Before swapping: a = "<<a<<" and b = "<<b<<endl;
    swap(a,b);
    cout<<"After swapping: a = "<<a<<" and b = "<<b<<endl;



    return 0;
}