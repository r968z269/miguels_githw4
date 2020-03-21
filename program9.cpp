#include <iostream> 
#include <cmath>
#include <cstring>
#include <iomanip>
#include <stdio.h>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
// File Name: program9.cpp 
// Author: Miguel Angel Lopez 
// Student ID: R968Z269 
// Assignment Number: 9
// Description: Vector Calc. 
// Last Changed: November 08, 2019 
// Extra Credit!!!!!!!!!!!!!!!!!!!!!!! plx, k thx :P
using namespace std;
struct Vector
{
double x;
double y;
double z;
};
Vector a, b;

//dot product function.
double dot_product(Vector a, Vector b){
        
return (a.x*b.x)+(a.y*b.y)+(a.z*b.z);

}

//cross product function.
Vector cross_product(Vector a, Vector b){
Vector c;        
c.x = ((a.y*b.z) - (a.z*b.y));
c.y = ((a.z*b.x) - (a.x*b.z));
c.z = ((a.x*b.y) - (a.y*b.x));
return c;
}

//fuction adds two vectors.
Vector Add_two(Vector a, Vector b){
Vector c;
c.x = (a.x+b.x);
c.y = (a.y+b.y);
c.z = (a.z+b.z);
return c;
}
//function scales two vectors.
Vector scale(Vector a, double Scale){
Vector c;
c.x = (Scale*a.x);
c.y = (Scale*a.y);
c.z = (Scale*a.z);
return c;
}
// Entra Credit !!!!!!!!!!!!!!!
int get_int(string prompt){
        //string prompt;
        cout << prompt;
        char choice;
        cin >> choice;
        return choice;
}
double get_double(string prompt){
        cout << prompt;
        double component;
        cin >> component;
        return component;
}

//main!!
int main(){
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);
//creats vector
Vector Va, Vb, Vc;
char choice;
double D= 0.0, Scale;

//start options menu
cout << endl 
     << "Available choices:\n"  
     << "   1. Add two vectors\n" 
     << "   2. Scale a vector\n"
     << "   3. Find dot product of two vectors\n"
     << "   4. Find cross product of two vectors\n"
     << "   5. Quit\n";
choice = get_int("Enter the number of your choice: ");
while (choice != '5'){
switch (choice){
     case '1':
             cout << endl  
                  << endl;
             // Old Code     
                  /*
                  << "Enter the 3 components of the first vector: ";
             cin  >> Va.x;
             cin  >> Va.y;
             cin  >> Va.z; 
             cout << "Enter the 3 components of the second vector: ";
             cin >> Vb.x;
             cin >> Vb.y;
             cin >> Vb.z;
             */
             
             //Extra Credit Code!
             Va.x = get_double("Enter the 3 components of the first vector: ");
             Va.y = get_double("");
             Va.z = get_double("");
             Vb.x = get_double("Enter the 3 components of the second vector: ");
             Vb.y = get_double("");
             Vb.z = get_double("");
             Vc = Add_two(Va, Vb);
             cout << "(" << Va.x << " " << Va.y << " " << Va.z 
                  << ") + (" << Vb.x << " " << Vb.y << " " << Vb.z 
                  << ") = (" << Vc.x << " " << Vc.y << " " << Vc.z 
                  << ")" 
                  << endl;
             break;
    case '2':
             cout << endl 
                  << endl;
             //Old Code
                  /*
                  << "Enter the 3 components of the vector: ";
             cin  >> Va.x;
             cin  >> Va.y;
             cin  >> Va.z;
             cout << "Enter the scale factor:";
             cin  >> Scale;
             */
             
             //Extra Credit Code
             Va.x  =  get_double("Enter the 3 components of the vector: ");
             Va.y  =  get_double("");
             Va.z  =  get_double("");
             Scale =  get_double("Enter the scale factor: ");
             Vc = scale(Va, Scale);
             cout << Scale << "(" << Va.x << " " << Va.y << " " 
                  << Va.z  << ") = (" 
                  << Vc.x << " " << Vc.y << " " << Vc.z 
                  << ")"
                  << endl;
             break;             
    case '3':
             cout << endl 
                  << endl;
             // Old Code     
                  /* 
                  << "Enter the 3 components of the first vector: ";
             cin  >> Va.x;
             cin  >> Va.y;
             cin  >> Va.z; 
             cout << "Enter the 3 components of the second vector: ";
             cin >> Vb.x;
             cin >> Vb.y;
             cin >> Vb.z;
             */
             
             //Extra Credit Code!
             Va.x = get_double("Enter the 3 components of the first vector: ");
             Va.y = get_double("");
             Va.z = get_double("");
             Vb.x = get_double("Enter the 3 components of the second vector: ");
             Vb.y = get_double("");
             Vb.z = get_double("");
             cout << "(" << Va.x << " " << Va.y << " " << Va.z 
                  << ") . (" << Vb.x << " " << Vb.y << " " << Vb.z 
                  << ") = (" << dot_product(Va, Vb) 
                  << ")" 
                  << endl;
             break;
    case '4':
             cout << endl  
                  << endl;
             // Old Code
                  /*     
                  << "Enter the 3 components of the first vector: ";
             cin  >> Va.x;
             cin  >> Va.y;
             cin  >> Va.z; 
             cout << "Enter the 3 components of the second vector: ";
             cin >> Vb.x;
             cin >> Vb.y;
             cin >> Vb.z;
             */
             
             //Extra Credit Code!
             Va.x = get_double("Enter the 3 components of the first vector: ");
             Va.y = get_double("");
             Va.z = get_double("");
             Vb.x = get_double("Enter the 3 components of the second vector: ");
             Vb.y = get_double("");
             Vb.z = get_double("");
             Vc = cross_product(Va, Vb);
             cout << "(" << Va.x << " " << Va.y << " " << Va.z 
                  << ") x (" << Vb.x << " " << Vb.y << " " << Vb.z 
                  << ") = (" << Vc.x << " " << Vc.y << " " << Vc.z 
                  << ")" 
                  << endl; 
             break;         
}
cout << endl << endl
     << "Available choices:\n"  
     << "   1. Add two vectors\n" 
     << "   2. Scale a vector\n"
     << "   3. Find dot product of two vectors\n"
     << "   4. Find cross product of two vectors\n"
     << "   5. Quit\n";
choice = get_int("Enter the number of your choice: ");     

}
}

