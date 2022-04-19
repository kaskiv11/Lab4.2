#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab4.2/Lab4.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1Lab42
{
	TEST_CLASS(UnitTest1Lab42)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			string str = "abstm";
			string t = ProcessTXT("../t.txt");
			Assert::AreEqual(str,  t);
		}
	};
}
