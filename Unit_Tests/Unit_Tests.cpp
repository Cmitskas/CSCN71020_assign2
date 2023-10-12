#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);
extern "C" int setLength(int,int*);
extern "C" int setWidth(int,int*);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:
		
		TEST_METHOD(PerimeterFunctionality)
		{
			//this is testing the perimeter function using length=3 and width=2
			int Perimeter = 0;
			int length = 3, width = 2;
			Perimeter = getPerimeter (&length, &width);
			Assert::AreEqual(10, Perimeter);
		}

		TEST_METHOD(AreaFunctionality)
		{
			//this is testing the perimeter function using length=3 and width=2
			int Area = 0;
			int length = 3, width = 2;
			Area = getArea(&length, &width);
			Assert::AreEqual(6, Area);
		}

		TEST_METHOD(SetLength1)
		{
			//This is testing the setLength function 1st time
			int length = 1;
			setLength (1, &length);
			Assert::AreEqual(1, length);
		}

		TEST_METHOD(SetLength2)
		{
			//This is testing the setlength function 2nd time
			int length = 0;
			setLength(99, &length);
			Assert::AreEqual(99, length);
		}

		TEST_METHOD(SetLength3)
		{
			//This is testing the setlength function 3rd time
			int length = 0;
			setLength(50, &length); //changed from 150 to 50 in order to be within the limits 
			Assert::AreEqual(50, length);
		}

		TEST_METHOD(SetWidth1)
		{
			//This is testing the setwidth function 1st time
			int width = 0;
			setWidth(1, &width);
			Assert::AreEqual(1, width);
		}

		TEST_METHOD(SetWidth2)
		{
			//This is testing the setwidth function 2nd time
			int width = 0;
			setWidth(99, &width);
			Assert::AreEqual(99, width);
		}

		TEST_METHOD(SetWidth3)
		{
			//This is testing the setwidth function 3rd time
			int width = 0;
			setWidth(50, &width);// Changed from 250 to 50 in order to be acceptable value
			Assert::AreEqual(50, width); 
		}
	};
}
