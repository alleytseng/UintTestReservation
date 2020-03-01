#include <string>
using namespace std;
class User
{
public:
	User(string tmpName);
	~User();
	bool IsAdmin();
	string Name;

};
class Reservation
{
public:
	//Reservation(char *p1="somebody");
	Reservation(User user);
	~Reservation();
	bool CanBeCancelBy(User user);
	string MadeBy;
};