#include <iostream>
using namespace std;
#include "string.h"
#include "class.h"
//#include "stdafx.h"
int main()
{
	User num1("n1");
	cout<<num1.pName<<" is ";
	(num1.IsAdmin()==1)?cout<<"":cout<<"not ";
	cout<<"admin.\n";
	User num2("n2");
	Reservation r1(num1);
	cout<<num2.pName;
	(r1.CanBeCancelBy(num2)==1)?cout<<" can ":cout<<" cant't ";
	cout<<"cancel "<<r1.pMadeBy<<"'s reservation.\n";
	system("pause");
	//Reservation
	return 0;
}
User::User(char *pname1)
{
	pName=new char[strlen(pname1)+1];
	int i=0;
	while(i<strlen(pname1)+1)
	{
		pName[i]=pname1[i];
		++i;
	}
	cout<<pName<<endl;
}
User::~User()
{
	//delete []pName;
}
bool User::IsAdmin()
{
	char admin[]="alley";
	if(strcmp(admin,pName)==0)//the contents of both strings are equal
		return true;
	return false;
}
Reservation::Reservation(User user)
{	
	pMadeBy=new char[strlen(user.pName)];
	strcpy(pMadeBy,user.pName);
}
Reservation::~Reservation()
{
	//delete []pMadeBy;
}
bool Reservation::CanBeCancelBy(User user)
{
	if(user.IsAdmin()==true)
		return true;
	if(strcmp(user.pName,pMadeBy)==0)//the contents of both strings are equal
		return true;
	return false;

}