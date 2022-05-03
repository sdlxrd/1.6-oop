#include "pch.h"
#include "CppUnitTest.h"
#include "c:\users\misha\source\repos\1.6oop\1.6oop\Number.h"
#include "C:\Users\Misha\source\repos\1.6oop\1.6oop\Number.cpp"
#include "c:\users\misha\source\repos\1.6oop\1.6oop\1.6oop.cpp"

#define PI 3.1415926535

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Real f;
			int n = 2;
			double number = f.step(n);
			
			Assert::AreEqual(9.86960440052517106225, number);
		};
	};
}
