#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 1.6 opp/Rectangel.h"
#include "../lab 1.6 opp/Rectangel.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rectangel sides{};
			sides.init(3, 4); // a = 3, b = 4
			Rectangel triangle;
			triangle.setSides(3, 4); // a = 3, b = 4
			Assert::AreEqual(triangle.getPerumetr(), 14.0);
		}
	};
}
