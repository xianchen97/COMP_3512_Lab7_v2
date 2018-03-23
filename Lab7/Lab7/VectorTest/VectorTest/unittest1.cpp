#include "CppUnitTest.h"
#include "../../VectorFunctions.hpp"
#include <vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace VectorTest
{	
	std::vector<int> v{ 1,2,3,4 };
	std::vector<int> v2{ 99,2,1,4 };
	std::vector<int> v3{ -1,-2,-1,-4};
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
			std::cout << VectorFunctions::average(v);
			Assert::AreEqual(2.75, VectorFunctions::average(v));
		}

		TEST_METHOD(TestSumV2)
		{

			Assert::AreEqual(106, VectorFunctions::sum(v2));
		}

		TEST_METHOD(TestMinV2)
		{
			Assert::AreEqual(1, VectorFunctions::min(v2));
		}

		TEST_METHOD(TestMaxV2)
		{
			Assert::AreEqual(99, VectorFunctions::max(v2));
		}

		TEST_METHOD(TestAverageNegative)
		{
			std::cout << VectorFunctions::average(v);
			Assert::AreEqual(51.25, VectorFunctions::average(v2));
		}


		TEST_METHOD(TestSumV2Negative)
		{

			Assert::AreEqual(-8, VectorFunctions::sum(v3));
		}

		TEST_METHOD(TestMinV2Negative)
		{
			Assert::AreEqual(-4, VectorFunctions::min(v3));
		}

		TEST_METHOD(TestMaxV2Negative)
		{
			Assert::AreEqual(-1, VectorFunctions::max(v3));
		}

		TEST_METHOD(TestAverageV2Negative)
		{
			std::cout << VectorFunctions::average(v);
			Assert::AreEqual(-2.25, VectorFunctions::average(v3));
		}
	};
}