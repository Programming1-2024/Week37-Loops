#include "pch.h"
#include "CppUnitTest.h"
#include "../Week37Project/Main.cpp"
#include <iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Week37Test
{
	TEST_CLASS(MainCpp)
	{
	public:
		
		TEST_METHOD(Control) 
		{ 
			Assert::IsTrue(true);
		}
		TEST_METHOD(Test_ArraySum_SeveralSize)
		{
			int arrSize3[] = { 1, 2, 3 };
			int arrSize10[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
			Assert::AreEqual(6, ArraySum(arrSize3));
			Assert::AreEqual(55, ArraySum(arrSize10));
		}

		TEST_METHOD(Test_ArraySum_Size1)
		{
			int arr[] = { 3 };
			Assert::AreEqual(3, ArraySum(arr));
		}

		//TEST_METHOD(Test_ArraySum_Size0) cannot have array of size 0

		TEST_METHOD(Test_ArraySum_NegativeNumbers)
		{
			int arrNegative[] = { -5, -2, -3 };
			Assert::AreEqual(-10, ArraySum(arrNegative));
		}

		TEST_METHOD(Test_ArraySum_Zeros)
		{
			int arrZero[] = { 0, 0, 0, 0, 0 };
			Assert::AreEqual(0, ArraySum(arrZero));
		}

		TEST_METHOD(Test_ArraySum_SumZero)
		{
			int arrZeroSum[] = { 1, -1, 8, -8, 3, -3 };
			Assert::AreEqual(0, ArraySum(arrZeroSum));
		}

		TEST_METHOD(Test_ArrayPrint_OneToFive)
		{
			int arr[] = { 1, 2, 3, 4, 5 };
			std::string expected = "1\n2\n3\n4\n5\n";

			std::stringstream buffer;
			std::streambuf* sbuf = std::cout.rdbuf(); //Save cout's buffer
			std::cout.rdbuf(buffer.rdbuf()); //Redirect cout to buffer

			// Call ArrayPrint in your test
			ArrayPrint(arr);

			// When finished, redirect cout to the original buffer 
			std::cout.rdbuf(sbuf);
			std::cout << "std original buffer: \n";
			std::cout << buffer.get();

			// Test
			Assert::AreEqual(expected, buffer.str());
		}

		TEST_METHOD(Test_ArrayPrint_72245)
		{
			int arr[] = { 7, 2, 2, 4, 5 };
			std::string expected = "7\n2\n2\n4\n5\n";

			std::stringstream buffer;
			std::streambuf* sbuf = std::cout.rdbuf(); //Save cout's buffer
			std::cout.rdbuf(buffer.rdbuf()); //Redirect cout to buffer

			// Call ArrayPrint in your test
			ArrayPrint(arr);

			// When finished, redirect cout to the original buffer 
			std::cout.rdbuf(sbuf);
			std::cout << "std original buffer: \n";
			std::cout << buffer.get();

			// Test
			Assert::AreEqual(expected, buffer.str());
		}
		TEST_METHOD(Test_ArrayPrint_DoubleDigits)
		{
			std::string expected = "82\n10\n0\n100\n2\n";
			int arr[] = { 82, 10, 0, 100, 2 };

			std::stringstream buffer;
			std::streambuf* sbuf = std::cout.rdbuf(); //Save cout's buffer
			std::cout.rdbuf(buffer.rdbuf()); //Redirect cout to buffer

			// Call ArrayPrint in your test
			ArrayPrint(arr);

			// When finished, redirect cout to the original buffer 
			std::cout.rdbuf(sbuf);
			std::cout << "std original buffer: \n";
			std::cout << buffer.get();

			// Test
			Assert::AreEqual(expected, buffer.str());
		}

		TEST_METHOD(Test_ArraySumUpTo_Equal)
		{
			int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
			Assert::AreEqual(55, ArraySumUpTo(arr, 55));
		}

		TEST_METHOD(Test_ArraySumUpTo_GreaterThan)
		{
			int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 11 };
			Assert::AreEqual(56, ArraySumUpTo(arr, 55));
		}
		
		TEST_METHOD(Test_ArraySumUpTo_FullArray)
		{
			int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 9 };
			Assert::AreEqual(54, ArraySumUpTo(arr, 55));
		}

		TEST_METHOD(Test_ArraySumUpTo_EarlyExit)
		{
			int arr[] = {30, 20, 2, 1, 40, 1, 2, 3, 4, 5};
			Assert::AreEqual(93, ArraySumUpTo(arr, 55));
		}

		TEST_METHOD(Test_ArraySumUpTo_SingleElement)
		{
			int arr[] = { 55, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
			Assert::AreEqual(55, ArraySumUpTo(arr, 55));
		}

		TEST_METHOD(Test_ArraySumUpTo_UpTo5) {
			int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
			Assert::AreEqual(6, ArraySumUpTo(arr, 5));
		}
	};
}
