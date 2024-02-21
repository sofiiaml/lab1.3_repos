#include "pch.h"
#include "CppUnitTest.h"
#include "../1.3/FuzzyNumber.h"
#include "../1.3/FuzzyNumber.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest13
{
	TEST_CLASS(UnitTest13)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			FuzzyNumber a, b, c, d,f;
			a.Init(2, 5, 7);
			b.Init(1, 3, 2);
			c = FuzzyNumber::Add(a, b);
			d = FuzzyNumber::Sub(a, b);
			f = FuzzyNumber::Div(a, b);
			Assert::AreEqual(c.getX(), -5.0);
			Assert::AreEqual(c.getL(), 3.0);
			Assert::AreEqual(c.getR(), 12.0);

			Assert::AreEqual(d.getX(), -7.0);
			Assert::AreEqual(d.getL(), 1.0);
			Assert::AreEqual(d.getR(), 10.0);

			Assert::AreEqual(f.getX(), -1.0);
			Assert::AreEqual(f.getL(), 2.0);
			Assert::AreEqual(f.getR(), -4.5);
		}
	};
}
