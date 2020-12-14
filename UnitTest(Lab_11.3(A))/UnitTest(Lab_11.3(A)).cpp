#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_11.3(A)/Lab_11.3(A).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab113A
{
	TEST_CLASS(UnitTestLab113A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			student s;
			student str_a;
			student str_b;
			student str;

			fstream file_s("E:\\Моя папка. Навчання\\Student [IK-11] [Дорожовець]\\Lab_11.3(A)\\Lab_11.3(A)\\test", ios::binary);

			s.prizv = "swwe";
			s.kurs = 5;
			s.specialization = (Special)2;
			s.phisuka = 4;
			s.matematic = 5;
			s.informatic = 4;

			file_s.write((char*)&s, sizeof(student));
			file_s.close();

			file_s.open("E:\\Моя папка. Навчання\\Student [IK-11] [Дорожовець]\\Lab_11.3(A)\\Lab_11.3(A)\\test", ios::binary);

			s.prizv = "eeeew";
			s.kurs = 2;
			s.specialization = (Special)3;
			s.phisuka = 2;
			s.matematic = 3;
			s.informatic = 4;

			file_s.write((char*)&s, sizeof(student));
			file_s.close();


			file_s.open("E:\\Моя папка. Навчання\\Student [IK-11] [Дорожовець]\\Lab_11.3(A)\\Lab_11.3(A)\\test", ios::binary);

			s.prizv = "sfgdf";
			s.kurs = 1;
			s.specialization = (Special)4;
			s.phisuka = 4;
			s.matematic = 4;
			s.informatic = 4;

			file_s.write((char*)&s, sizeof(student));
			file_s.close();

			fstream f;
			SortBIN(str, str_a, str_b, 3, "E:\\Моя папка. Навчання\\Student [IK-11] [Дорожовець]\\Lab_11.3(A)\\Lab_11.3(A)\\test", f);

			file_s.read((char*)&s, sizeof(student));
			Assert::AreEqual(s.kurs, 1);
			file_s.close();
		}
	};
}
