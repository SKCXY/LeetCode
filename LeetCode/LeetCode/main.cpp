#include <iostream>
#include <cstdlib>
#include "165.h"
using namespace std;




int main()
{
	/*Solution solution;
	cout << solution.compareVersion("1.1", "1.10") << endl;*/
	
	int n;
	cin >> n;

	int i, j;
	for (i = 2; i <= n; i++)
	{
		for (j = 2; j <= i - 1; j++)
		{
			if (i%j == 0)
				break;
		}
		if (j >= i)
		{
			printf("%d\n", i);
		}
		
	}



	system("pause");
	return 0;
}


