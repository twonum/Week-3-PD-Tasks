#include<iostream>
using namespace std;
main(){
float vegP;
float frtP;
int tVkg;
int tFkg;
float tvegP;
float tfrtP;
float tEarningC;
float tEarning;
cout << "Vegetable price per KG : " ;
cin >> vegP;
cout << "Fruit  price per KG : " ;
cin >>frtP ;
cout << "Total KGs of Vegetables : " ;
cin >> tVkg;
cout << "Total KGs of Vegetables : " ;
cin >> tFkg;
tvegP=vegP*tVkg;
tfrtP=frtP*tFkg;
tEarningC=tvegP+tfrtP;
tEarning=tEarningC/1.94;
cout << "Total earning : " <<tEarning;



}