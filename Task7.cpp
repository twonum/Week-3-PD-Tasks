#include<iostream>
using namespace std;
main(){
string movieName;
int aTicketPrice;
int cTicketPrice;
int aTicketsSold;
int cTicketsSold;
int percentage;
int totalAmount;
int finalAmount;
cout << "Enter Movie Name : " ;
cin >> movieName;
cout << "Enter Adult Tickets Price : " ;
cin >> aTicketPrice;
cout << "Enter child Tickets Price : " ;
cin >> cTicketPrice;
cout << "Enter Number of Adult Tickets Sold : " ;
cin >> aTicketsSold;
cout << "Enter Number of Child Tickets Sold : " ;
cin >> cTicketsSold;
cout <<"Enter Percentege to Donate : ";
cin >> percentage;
totalAmount=(aTicketPrice*aTicketsSold)+(cTicketPrice*cTicketsSold);
finalAmount=totalAmount-((totalAmount*percentage)/100);
cout << "___________________________________" <<endl;
cout << "Total Amount Generated : " <<totalAmount << endl;
cout << "Amount after donation : " <<finalAmount;


}