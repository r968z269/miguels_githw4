#include <iostream> 
#include <cmath>
#include <cstring>
#include <iomanip>
#include <stdio.h>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;
// File Name: program8.cpp 
// Author: Miguel Angel Lopez 
// Student ID: R968Z269 
// Assignment Number: ate
// Description: Rain Calc
// Last Changed: November 04, 2015 
// modified: 3/21/20    
const int WEEKS = 12;


//searches array
void show_more(double rainfall[][7], int weeks, double cutoff){
	//set decimal
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
cout << endl << "Days for which rainfall higher than " << cutoff << " inches was found:" 
     << endl;	
for(int i = 0; i<weeks; i++){
	for(int j = 0; j<7; j++){
		if(rainfall[i][j]>cutoff){
		  cout << endl << setw(2) << right << "For week " << i+1 << ", day" << j+1 
			   << ", the rainfall was " << rainfall[i][j] << " inches." 
		   	   << endl;
		}
	}
	cout << endl;
}

}


//averge rainfall
double find_average(double rainfall[][7], int weeks){
	double avg, temp;
	for(int i = 0; i<weeks; i++){
		for(int j = 0; j<weeks; j++){
			temp = rainfall[i][j];
			temp += temp;
		}
		avg = temp/12;
	}
	return avg;

}



//prints max, min, mean! >:(
void find_week_mmm(double week_rain[], double &max, double &min, double &mean){
	//set decimal
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	cout << setw(2) << right << "Week  " << week_rain << ":  max " << max << "in,  min "
	     << min << " in,  mean " << (mean/12) << " in." << endl;
}






//main yey! \o/
int main(){
double rainfall[WEEKS][7] = {{0}};
double week_rain[WEEKS];
double temp, input, avg, max = 0.0,
       min = 0.0, mean = 0.0;
//sets decimal places    
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

//sets up raindata
ifstream raindata;
//opens file
raindata.open("rainfall.dat");
//Error
if(raindata.fail()){
	cerr << endl << "Something went wrong!!!" << endl;
	return 0;
}
for(int i = 0; i<WEEKS; i++){
	for(int j = 0; j<7; j++){
		raindata >> temp;
		temp = temp/25.4;
		rainfall[i][j] = temp;
	}
	
	
}
//closes file
raindata.close();


cout << endl << "Enter the value for which to find higher rainfall (inches):";
cin >> input;
show_more(rainfall, WEEKS, input);
//average rainfall print out
avg = find_average(rainfall, WEEKS);
	cout << endl << endl << "The average rainfall over all the weeks was: "	<< avg 
     << " inches per day." << endl;
cout << endl << endl << "The maximum, minimum, and mean daily rainfall for each week:" 
     << endl << endl;	 
for(int i = 0; i<WEEKS; i++){
	for(int j = 0; j<WEEKS; j++){
		
		if (max < rainfall[i][j]){
			max = rainfall[i][j];
		}
		if (min > rainfall[i][j]){
			min = rainfall[i][j];
		}	 
		mean = rainfall[i][j];
		mean += mean;
	}
week_rain[i] = i+1;
//max, min, mean function call to print
find_week_mmm(week_rain, max, min, mean); 
}
return 0;
}



