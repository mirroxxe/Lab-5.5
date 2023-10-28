#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab №5.5/Lab №5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestAFunction)
		{
			int depth = 0;
			int result = A(2, 3, 1, depth);

			Assert::AreEqual(result, 9);
			Assert::AreEqual(depth, 10);
		}
	};
}
