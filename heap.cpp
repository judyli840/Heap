// heap.cpp
// Diba Mirza

#include "heap.h"
#include <iostream>
using std::cout;

// Pushes a value into the heap, then ensures
// the heap is correctly arranged
void Heap::push(int value){
	vdata.push_back(value);

	if(vdata.size()==1){
		return;
	}

	int i = vdata.size()-1;
	    if(vdata.at(i) > vdata.at(i-1)){
		int temp = vdata.at(i);
		int temp2 = vdata.at(i-1);
		vdata[i-1] = temp;
		vdata[i] = temp2;
	}
	return;
}

// Pops the minimum value off the heap
// (but does not return it), then ensures
// the heap is correctly arranged
void Heap::pop(){
	vdata.pop_back();
	int i = 1;
	while (vdata.size() > i){
		if(vdata[i] > vdata[i-1]){
			int temp = vdata[i];
			int temp2 = vdata[i-1];
			vdata[i] = temp2;
			vdata[i-1] = temp;
		}
		i++;
	}

}

// Returns the minimum element in the heap
int Heap::top(){
	if (vdata.empty())
		return 0;
  return vdata[vdata.size()-1];
}

// Returns true if the heap is empty, false otherwise
bool Heap::empty(){
	if(vdata.empty())
		return true;
	else
		return false;
}
    
