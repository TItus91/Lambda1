#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector <int> liczby{ 1, 55,5,6,87,7,52,3,58,98,45,1,2125,1,65,325,15,6 };

	bool test = std::any_of(liczby.begin(), liczby.end(), [](int x) -> bool {return x > 50; });

	std::cout << test << std::endl;
	


	for (std::vector<int>::iterator it = liczby.begin(); it != liczby.end(); it++)
	{
		if (*it > 50)
		{
			liczby.erase(it--);
			
		}
	}
	
	//auto it = liczby.begin();
	//std::for_each(liczby.begin(), liczby.end(), [&](int x) ->void {if (x > 50)  liczby.erase(std::for_each._UFirst--); });
	//std::for_each(liczby.begin(), liczby.end(), [&](int x) ->void {if (x > 50) *it = 0; if (it != liczby.end()) it++; });

	std::for_each(liczby.begin(), liczby.end(), [&](int x) ->void {std::cout << x << std::endl; });


	return 0;
}