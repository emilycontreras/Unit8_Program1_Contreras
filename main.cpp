#include <iostream>
#include <string>
using namespace std;


struct Car 
{
string make;
string model;
int year;
string color;
};

void changeColor(Car *carInfo);


int main() {
  
Car carInfo1,carInfo2, carInfo3;

carInfo1.make ="Mini";
carInfo1.model ="Cooper";
carInfo1.year = 2015;

carInfo2.make = "Volvo";
carInfo2.model ="XC60";
carInfo2.year = 2018;

carInfo3.make = "Porsche";
carInfo3.model = "Carrera";
carInfo3.year = 2009;

changeColor(&carInfo1);
changeColor(&carInfo2);
changeColor(&carInfo3);

cout<<"Car 1 info: "<<endl;
cout<<"Make: "<<carInfo1.make<<endl;
cout<<"Model: "<<carInfo1.model<<endl;
cout<<"Year: "<<carInfo1.year<<endl;
cout<<"Color: "<<carInfo1.color<<endl;
cout<<endl;

cout<<"Car 2 info: "<<endl;
cout<<"Make: "<<carInfo2.make<<endl;
cout<<"Model: "<<carInfo2.model<<endl;
cout<<"Year: "<<carInfo2.year<<endl;
cout<<"Color: "<<carInfo2.color<<endl;
cout<<endl;

cout<<"Car 3 info: "<<endl;
cout<<"Make: "<<carInfo3.make<<endl;
cout<<"Model: "<<carInfo3.model<<endl;
cout<<"Year: "<<carInfo3.year<<endl;
cout<<"Color: "<<carInfo3.color<<endl;
cout<<endl;

  return 0;
}

void changeColor(Car *carInfo)
{
  if(carInfo -> year > 2010)
    carInfo ->color = "Green";

  else 
  {
    carInfo -> color = "Red";
  }
}