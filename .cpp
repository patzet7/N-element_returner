#include <iostream>

int& getValue(int arr[], unsigned int size, int n)
{
	return arr[n];

}

int main()
{
   const unsigned int size = 10;
   int tab[size] = { 1,2,3,4,5,6,7,8,9,10 };

   int& value = getValue(tab, size, 6);

   value += 10;

   for (int i = 0; i < size; ++i)
   {
	   std::cout << "tab[" << i<< "] = " << tab[i] << std::endl;
   }
}
