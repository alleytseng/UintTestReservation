#include <iostream>
using namespace std;
#include <string>
#include "stdio.h"
#include "class.h"
//#include "stdafx.h"
int main()
{
	User num1("n1");
	cout<<num1.Name<<" is ";
	(num1.IsAdmin()==1)?cout<<"":cout<<"not ";
	cout<<"admin.\n";
	User num2("n2");
	Reservation r1(num1);
	cout<<num2.Name;
	(r1.CanBeCancelBy(num2)==1)?cout<<" can ":cout<<" cant't ";
	cout<<"cancel "<<r1.MadeBy<<"'s reservation.\n";
	system("pause");
	//Reservation
	return 0;
}
User::User(string tmpName)
{
	Name=tmpName;
	//cout<<Name<<endl;
}
User::~User()
{
	//delete []pName;
}
bool User::IsAdmin()
{
	string admin="alley";
	if(admin.compare(Name)==0)//the contents of both strings are equal
		return true;
	return false;
}
Reservation::Reservation(User user)
{	
	MadeBy=user.Name;
}
Reservation::~Reservation()
{
}
bool Reservation::CanBeCancelBy(User user)
{
	if(user.IsAdmin()==true)
		return true;
	if(user.Name.compare(MadeBy)==0)//the contents of both strings are equal
		return true;
	return false;

}