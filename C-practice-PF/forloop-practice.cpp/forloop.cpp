#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    // 11111how to print "Hello World!" n times using for loop in C++? 
    int n;
    cout<<"Enter the number of times you want to print Hello World: ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cout<<"Hello World!"<<endl;
    }

    // 2222222222print number from 1 to 10 using for loop in C++
    for(int i=1; i<=10; i++)
    {
        cout<<i<<" ";
    }

    // reverse of a number using for loop in C++
    for(int i=10; i>=1; i--)
    {
        cout<<i<<" ";

    }
    // 33333333sum of ten natural numbers using for loop in C++
    int sum = 0;
    for (int i=1; i<=10; i++)
    {
        sum = sum + i;
    }
    cout<<"The sum of first 10 natural numbers is: "<<sum<<endl;
    int n;
    int sum = 0;
    cout<<"Enter the number of natural numbers you want to sum: ";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        sum = sum + i;
    }
    cout<<"The sum of first "<<n<<" natural numbers is: "<<sum<<endl;
//  5555555555555find perfect number between 1 to 500 using for loop in C++

int sum = 0;
for (int i=1; i<=500; i++){
    sum = 0;
    for (int j=1; j<=i/2; j++){
        if (i%j == 0){
            sum = sum + j;
        }
    }
    if (sum == i){
        cout<<i<<" ";
    }

}
// 666666666find the factorial of a number using for loop in C++
int n;
unsigned long long factorial = 1;
cout<<"Enter a positive integer: ";     
cin>>n;
for(int i=1; i<=n; i++)
{
    factorial = factorial * i;
}
cout<<"Factorial of "<<n<<" = "<<factorial<<endl;

// 77777777 Checl prime with the help of the c++ for loop
int num;
cout<<"Enter a positive integer: ";
cin>>num;
for(int i=1; i<=num; i++)
{
    if(num%2 == 0)
    {
        cout<<num<<" is not a prime number."<<endl;
        break;
    }
    else
    {
        cout<<num<<" is a prime number."<<endl;
        break;
    }
}
// draw a pattern using for loop in C++

int n;
cout<<"Enter the number of rows for the pattern: ";
cin>>n;
for(int i=1; i<=n; i++)
{   
    for (int j=1; j<=n; j++)
    {
        cout<<"*";
    }
    cout<<endl;
};

// pattern using for loop in C++ 

int n;
cout<<"Enter the number: ";
cin>>n;
int i = 1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<i<<" ";
        j++;
    }
    cout<<endl;
    i++
}

// displaly the number from the input and sum of the input numbers 
int n , sum = 0;
cout<<"Enter the number of elements you want to sum: ";
cin>>n;
for(int i=1; i<=n; i++)
{
    cout<<i<<" ";
    sum = sum + i;
}
   cout<<"\nThe sum of first "<<n<<" natural numbers is: "<<sum<<endl;

// using while to input the numbers and its squre of all the inputs 
int n;
cout<<"Enter the number of elements you want to input: ";
cin>>n;
int i =1;
while(i<=n){
    cout<<i<<" ";
    cout<<"Square of "<<i<<" is: "<<i*i<<endl;
    i++;
}

// input a number and diplay its table using for loop in C++ 
int num;
cout<<"Enter a number to display its multiplication table: ";
cin>>num;
int i = 1; 
while(i<=10){
    cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    i++;
}
// enter the number and display the sum of its digits using for loop in C++
int num1 , sum=0, reminder;
cout<<"Enter a number: ";
cin>>num1;
while(num1 != 0){
    reminder = num1 % 10;
    sum = sum + reminder;
    num1 = num1 / 10;
}
cout<<"The sum of the digits is: "<<sum<<endl;
const double pi = 3.14159; 
int deegree = 0;
double radian;
// cout.setf(ios::fixed);
cout.precision(6);
cout<<"deegree to radian";
while(deegree <= 360){
    radian = deegree * (pi/180);
    cout<<setw(6)<<deegree<<" degree = "<<setw(10)<<radian<<" radian"<<endl;
    deegree += 10;
}
// Write a program that input a number and display the sum of its digits using for loop in C++
int num,oddsum=0,evensum=0;
cout<<"Enter a number: ";
cin>>num;
int i = 0;  
while(num>=i)
{
    if(num%2==0)
        evensum = evensum + num;
    else
        oddsum = oddsum + num;
        num--;
    
}
cout<<"The sum of odd numbers is: "<<oddsum<<endl;
cout<<"The sum of even numbers is: "<<evensum<<endl;

// write a program input a number and check the number is amstrong or not amstromg 
int n,rem,sum,num;
cout<<"Enter a number: ";
cin>>n;
num=n;
sum=0;
while(n!=0){
    rem =n%10;
    sum = sum + (rem*rem*rem);
    n = n/10;
}
if(sum==num){
    cout<<"The number is an Armstrong number."<<num<<endl;
}
else{
    cout<<"The number is not an Armstrong number."<<num<<endl;
}

// pattern follow in C++;
int i,j;
i=1;
while(i<=5){
    j=1;
    while(j<=5){
        cout<<j<<" ";
        j++;
    }
    cout<<endl;
    i++;
}

// reverse pattern in which  take number from the users 
int n;
cout<<"Enter the number of rows for the pattern: ";
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<n-j+1<<" ";
        j++;
    }
    i++;
    cout<<endl;
}

// only reverse pattern loop 
int count =1;
int i=1;
while(i<=5){
    int j=1;
    while(j<=5){
        cout<<count<<" ";
        count++;
        j++;
    }
    cout<<endl;
    i++;
}

// write the count in the form of triangle pattern
int count=1;
int i=1;
while(i<=5){
    int j=1;
    while(j<=i){
        cout<<count<<" ";
        count++;
        j++;
    }
    cout<<endl;
    i++;
}
// triangular pattern in which the value of the count is in the form of triangle pattern  
int n , value;
cout<<"Enter the number of rows for the pattern: ";
cin>>n;
int i=1;
while(i<=n){
    int j=1;
   int value =i;
while(j<=i){
    cout<<value<<" ";
    value++;
    j++;    
}
i++;
cout<<endl;
}

// reverse counting in triangular pattern
int n;
cout<<"Enter the number of rows for the pattern: ";
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=i){
        cout<<i-j+1<<" ";
        j++;
    }
    i++;
    cout<<endl;
}

// print the characters in the  form of square pattern 
int n;
cout<<"Enter the number of rows for the pattern: ";
cin>>n;
int i=1;
while(i<=n){
    int j=1;
    while(j<=n){
        char ch = 'A' + i - 1;
        cout<<ch<<" ";
        j++;
    }
    i++;
    cout<<endl;
}






return 0; 
}