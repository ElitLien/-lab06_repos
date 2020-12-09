#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.2(iter)/PR6.2(iter).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62iter
{
	TEST_CLASS(UnitTest62iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
			Assert::AreEqual(a[5], 6);
		}
	};
}
