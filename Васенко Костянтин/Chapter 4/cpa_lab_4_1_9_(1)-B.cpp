#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main()
{
    float overall = 0;
	cout << "Enter number of courses: ";
	int c;
	cin >> c;

	int ** g = new int*[c];
	for (int i = 0; i < c; i++)
	{
		int n;
		cout << "Enter marks in format [NumberOfMarks Mark1 Mark2 MarkN]: ";
		cin >> n;
		g[i] = new int[n+1];
		g[i][0] = n;
		for (int j = 1; j <= n; j++)
		{
			cin >> g[i][j];
		}
	}

	for (int i = 0; i < c; i++)
	{
        float finalGrad = 0;
		string grades;
		for (int j = 1; j <= g[i][0]; j++)
		{
			finalGrad += g[i][j];
			grades += to_string(g[i][j]) + " ";
		}
		finalGrad = finalGrad / g[i][0];
		overall += finalGrad;

		printf("Course %d: final %.2f, grades: %s \n", i + 1, finalGrad, grades.c_str());
	}
        
        overall = overall / c;
        printf("Overall final %.2f", overall);
	    
	    return 0;
}