#include <iostream>

int main()
{
	struct dat { short a; short b; };
	long value = 0xA224B118;
	dat* pd = reinterpret_cast<dat*>(&value);
	std::cout << pd->a;

	return 0;
}