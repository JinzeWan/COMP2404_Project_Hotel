#include <iostream>
#include <vector>
using namespace std;
#include <vector>

#include "Recorder.h"

Recorder::Recorder(string n){
	name = n;
}

void Recorder::printRecords(){
	for(int i = 0; i < collection.size(); i++){ 
		cout << collection[i] << endl; 
	 }
}


