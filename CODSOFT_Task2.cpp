/*Develop a calculator program that performs basic arithmetic operations such as addition,
 subtraction, multiplication, and division.Allow the user to input two numbers and choose an operation to perform.*/
 #include<iostream>
 using namespace std;
 int main(){
    //Declaring the variables for two numbers
    int num1,num2;
    char operation;
    cout<<"Enter number 1=";
    //Input for 1st number
    cin>>num1;
    cout<<"Enter number 2=";
    //Input for 2nd number
    cin>>num2;
    cout<<"Enter the operation to be performed=";
    cin>>operation;
    switch(operation){
        case'+':cout<<"Sum="<<(num1+num2)<<endl;
                break;
        case'-':cout<<"Difference="<<(num1-num2)<<endl;
                break;
        case'*':cout<<"Product="<<(num1*num2)<<endl;
                break;
        //Calculating the quotient
        case'/':cout<<"Quotient="<<(num1/num2)<<endl;
                break;
        //Using Modulo Function for remainder
        case'%':cout<<"Remainder="<<(num1%num2)<<endl;
                break;
        default:cout<<"The operation entered is invalid"<<endl;
    }
    return 0;
 }