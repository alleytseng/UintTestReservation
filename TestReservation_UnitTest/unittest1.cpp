#include "stdafx.h"
#include "CppUnitTest.h"
#include "../ReservationSystem/class.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestReservation_UnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(CanBeCancelBy_UserIsAdmin_ReturnTrue)
		{
			//Arrange
			User admin("alley");
			Reservation r1(admin);
			//Act
			bool result=r1.CanBeCancelBy(admin);
			//Assert
			Assert::IsTrue(result);
		}
		TEST_METHOD(CanBeCancelBy_SameUserCancellingTheReservation_ReturnTrue)
		{
			//Arrrange
			User user("a");
			Reservation r1(user);
			//*user.pName=*r1.pMadeBy;
			bool result=r1.CanBeCancelBy(user);
			Assert::IsTrue(result);
		}
		TEST_METHOD(CanBeCancelBy_AnotherUserCancellingTheReservation_ReturnFalse)
		{
			User user1("a0");
			User user2("a1");
			Reservation r1(user1);
			bool result=r1.CanBeCancelBy(user2);
			Assert::IsFalse(result);
		}

	};
}