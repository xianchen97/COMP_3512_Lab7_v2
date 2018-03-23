#include "CppUnitTest.h"
#include "../../VectorFunctions.hpp"
#include <vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace VectorTest
{	
	std::vector<int> v{ 1,2,3,4 };
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestSum)
		{

			Assert::AreEqual(10, VectorFunctions::sum(v));
		}

		TEST_METHOD(TestMin)
		{
			Assert::AreEqual(1, VectorFunctions::min(v));
		}

		TEST_METHOD(TestMax)
		{
			Assert::AreEqual(4, VectorFunctions::max(v));
		}

		TEST_METHOD(TestAverage)
		{
			double avg = 9/4;
			std::cout << VectorFunctions::average(v);
			Assert::AreEqual(1.25, VectorFunctions::average(v));
		}

	};
}