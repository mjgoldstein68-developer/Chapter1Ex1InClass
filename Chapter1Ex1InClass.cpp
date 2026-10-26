/*
* Programmmer: Mark Goldstein
* Date: 10/26/2026
  Write a program that show the ASCII characters
*/


#include <iostream>
using namespace std;

int main()
{
	for (int count=0;count<=127;++count)
	{
		char letter;
		letter = char(count);
		cout << letter;
		if (count % 16 == 0)
			cout << endl;
	  


	}


}








 