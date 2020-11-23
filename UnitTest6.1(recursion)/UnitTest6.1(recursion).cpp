#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.1(recursion)/PR6.1(recursion).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61recursion
{
	TEST_CLASS(UnitTest61recursion)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int count, s;
			int c[27] = { -27,-26,-25,-24,-23,-22,-21,-20,-19,-18,-17,-16,-15,-14,-13,-12,-11,-10,-9,-8,-7,-6,-5,-4,-3,-2,-1 };
			count = 0;
			s = 0;
			Assert::AreEqual(count, 0);
			Assert::AreEqual(s, 0);
			Assert::AreEqual(c[0], -27);
			Assert::AreEqual(c[23], -4);
		}
	};
}
