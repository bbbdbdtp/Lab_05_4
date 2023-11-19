#include "pch.h"
#include "CppUnitTest.h"
#include "pch.h"
#include "../Lab_05_4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double N = 1;
			double i = 1;
			double exp = 0.000001;

			Assert::AreEqual(S0(N), S1(N, 1), exp);
			Assert::AreEqual(S0(N), S2(N, N), exp);
			Assert::AreEqual(S0(N), S3(N, 1, 0), exp);
			Assert::AreEqual(S0(N), S4(N, N, 0), exp);
		}
	};
}