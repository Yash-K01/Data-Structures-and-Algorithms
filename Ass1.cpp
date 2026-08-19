#include <iostream>
using namespace std;

int main(){
    // Area of Square
    int a;
    cout<<"Enter the a: ";
    cin>> a;
    cout<< "Area of square is: "<< a * a <<endl;

    // Bill calculator with GST
    float pencil;
    float pen;
    float er;
    cout<<"Enter pencile price: ";
    cin>>pencil;
    cout<<"Enter pen price: ";
    cin>>pen;
    cout<<"Enter er price: ";
    cin>>er;
    float gst = (pencil + pen + er) * 0.18;
    cout<<"Total bill: "<<pencil + pen + er <<endl;
    cout<<"Total bill with GST: "<<pencil + pen + er + gst <<endl;

    // Simple Interest Calculator
    float P,R,T;
    cin>> P >> R >> T;
    float SI = (P*R*T)/100;
    cout<<"Simple Interest is: "<<SI << endl;

    // Area of circle
    float r = 5;
    float PI = 3.14;
    cout<<"Area of circle is: "<< PI*r*r << endl;

    return 0;
}