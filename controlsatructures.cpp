#include<iostream>
using namespace std;
int main(){
    // if else practice questions in c++ 
    // write a prigram in which take a number from the user and check number is positive negitive or zero 

    int number;
    cout<<"Enter a number:"<<endl;
    cin>>number;
    if(number>0){
        cout<<"the number is positive"<<endl;
        }
        else if(number<0){
            cout<<"the number is negitive"<<endl;
        }
        else{cout<<"the number is zero"<<endl;
        }
    // ---------------------------------------------------------

    // find the number is even or odd 
int num;
cout<<"Enter a number:"<<endl;
cin>>num;
if(num%2==0){
    cout<<"the number is even"<<endl;
}
else{
    cout<<"the number is odd"<<endl;
}
// ------------------------------------------------------------------

// input two numbers and find the largest number among them and id equal than these are equals

int num1,num2;
cout<<"Enter num1:"<<endl;
cin>>num1;
cout<<"Enter num2:"<<endl;
cin>>num2;
if(num1>num2){
    cout<<"num1 is larger than num2"<<endl;
}
else if(num2>num1){
    cout<<"num2 is larger than num1"<<endl;
}
else{
    cout<<"num1 and num2 are equal"<<endl;
}
// ----------------------------------------------------------

// voitng elegibility program in c++

int age;
cout<<"Enter your age:"<<endl;
cin>>age;
if (age>=18){
    cout<<"you are eligible to vote"<<endl;
}
else{
    cout<<"you are not eligible to vote"<<endl;
}
// -----------------------------------------------------------

// Grading system checking program in c++
int marks;
cout<<"Enter your grades:"<<endl;
cin>>marks;
if(marks>100 || marks<0){
    cout<<"invalid marks"<<endl;
}
else if(marks>=90)
{
    cout<<"your grade is A+"<<endl;}
else if(marks>=80){
    cout<<"your grade is A"<<endl;
}
else if(marks>=70){
    cout<<"your grade is B+"<<endl;
}
else if(marks>=60){
    cout<<"your grade is B"<<endl;
}
else if(marks>=50){
    cout<<"your grade is C"<<endl;
}
else if(marks>=40){
    cout<<"your grade is D"<<endl;
}
else{
    cout<<"your grade is F"<<endl;
}
// -------------------------------------------------------------

// largest of three numbers program in c++
int num1,num2,num3;
cout<<"enter three numbers:"<<endl;
cin>>num1>>num2>>num3;
if(num1>num2 && num1>num3){
    cout<<"num1 is largest number"<<endl;
}
else if(num2>num1 && num2>num3){
    cout<<"num2 is largest number"<<endl;
}
else{
    cout<<"num3 is largest number"<<endl;
}
// // ------------------------------------------------

// letter voval or consonant program in c++
char letter;
cout<<"Enter a letter:"<<endl;
cin>>letter;
if(letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u' || letter=='A' || letter=='E' || letter=='I' || letter=='O' || letter=='U'){
    cout<<"the letter is voval"<<endl;
}
else{
    cout<<"the letter is consonant"<<endl;
}
// --------------------------------------------------------------
// triangle type program in c++

int side1,side2,side3;
cout<<"Enter three sides of triangle:"<<endl;
cin>>side1>>side2>>side3;
if(side1==side2 && side2==side3){
    cout<<"the triangle is equilateral"<<endl;
}
else if(side1==side2 || side2==side3 || side1==side3
){
    cout<<"the triangle is isosceles"<<endl;
}
else{
    cout<<"the triangle is scalene"<<endl;
}
// --------------------------------------------------------------
// leap year checker program in c++ 
int year;
cout<<"Enter a year:"<<endl;
cin>>year;
if((year%4==0 && year%100!=0) || (year%400==0)){
    cout<<"the year is leap year"<<endl;
}
else{
    cout<<"the year is not leap year"<<endl;
}
// --------------------------------------------------------------- 
// First 50 units: $0.50/unit
// Next 100 units: $0.75/unit
// Next 100 units: $1.20/unit
// Above 250 units: $1.50/unit
// Add a 20% surcharge to the final total.
int units;
double bill = 0.0;
double surcharge,totalbill;
cout<<"Enter the number of units consumed:"<<endl;
cin>>units;
if(units<=50){
    bill=units*0.50;
}
else if(units<=150){        
    bill=50*0.50+(units-50)*0.75;
}
else if(units<=250){
    bill=50*0.50+100*0.75+(units-150)*1.20;
}
else{
    bill=50*0.50+100*0.75+100*1.20+(units-250)*1.50;
}
surcharge=bill*0.20;
totalbill=bill+surcharge;
cout<<"base bill: $"<<bill<<endl;
cout<<"surcharge: $"<<surcharge<<endl;
cout<<"total bill: $"<<totalbill<<endl;
    return 0;
};