// Якубовський Владислав, ІКНІ, РІ-11, АП, unit-тест до ЛР 09.1, варіант 24
#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_Lab_09_1_A/AP_Lab_09_1_A.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace APLab091UT
{
	TEST_CLASS(APLab091UT)
	{
	public:
		
		TEST_METHOD(TestWellDoingStudentsCount)
		{
			Student* students = new Student[2];

			students[1].physicsGrade = 5; students[1].mathGrade = 5; students[1].ITGrade = 5;

			int wellDoingStudentsCount = WellDoingStudentsCount(students, 2);

			Assert::AreEqual(1, wellDoingStudentsCount);
		}
	};
}
