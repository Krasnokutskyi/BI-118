#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(void)
{
	while (true)
	{
		int** arr;
		int* arr_sizes;

		float* courses_grades;
		float overall_grade;

		int courses;

		cin >> courses;

		arr = new int* [courses];
		arr_sizes = new int[courses];
		courses_grades = new float[courses];

		cin.ignore();

		for (int i = 0; i < courses; i++)
		{
			char c;
			vector<char> grades;

			while (cin.get(c) && c != '\n')
				grades.push_back(c);

			int a = 0;
			for (std::string::size_type j = 0; j < grades.size(); ++j) {

				if (grades[j] != ' ')
				{
					if (j == 0) {
						arr[i] = new int[grades[j] - '0'];
						arr_sizes[i] = grades[j] - '0';
					}
					else {
						arr[i][a++] = grades[j] - '0';
					}
				}
			}
		}

		float overall_mean = 0.;
		for (int i = 0; i < courses; i++)
		{
			float mean = 0.;
			for (int j = 0; j < arr_sizes[i]; j++)
			{
				mean += float(arr[i][j]);
			}
			mean /= float(arr_sizes[i]);

			courses_grades[i] = mean;
			overall_mean += mean;
		}

		overall_mean /= float(courses);
		overall_grade = overall_mean;

		std::cout << std::fixed;
		std::cout << std::setprecision(2);
		for (int i = 0; i < courses; i++)
		{
			cout << "Course " << i + 1 << ": final " << courses_grades[i] << ", grades ";
			for (int j = 0; j < arr_sizes[i]; j++)
			{
				cout << arr[i][j] << ' ';
			}
			cout << endl;
		}

		cout << "Overall final " << overall_grade << endl;

		delete[] arr;
	}

	return 0;
}
