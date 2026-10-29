#include "pch.h"
#include "CppUnitTest.h"
#include "../lab0602_iT/lab0602.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest0602
{
	TEST_CLASS(UnitTest0602)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 5;
			int a[n] = { 7, 4, 12, 3, 2 }; 

			int c = Min(a, n);

			Assert::AreEqual(2, c);
		}
	};
}
