#include<iostream>
using namespace std;
main(){
int bagSize;
int bagCost;
int area;
int fertilizerCost;
int fertilizingCost;
cout << "Enter Bag Size in Pounds : ";
cin >> bagSize;
cout << "Enter cost of the bag : ";
cin >> bagCost;
cout << "Enter area covered by each bag in square feet : ";
cin >> area; cout <<endl;
cout <<"____________________________________________________" <<endl; 
fertilizerCost=bagCost/bagSize;
fertilizingCost=bagCost/area;
cout << "Cost of the fertilizer per pound : " <<fertilizerCost <<endl; 
cout << "Cost of fertilizing the area per square feet : " <<fertilizingCost;

}