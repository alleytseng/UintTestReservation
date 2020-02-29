#include "string.h"

class User
{
public:
	User(char *type);
	~User();
	bool IsAdmin();
	char *pName;

};
class Reservation
{
public:
	//Reservation(char *p1="somebody");
	Reservation(User user);
	~Reservation();
	bool CanBeCancelBy(User user);
	char *pMadeBy;
};