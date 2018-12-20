#include "ChocolateBox.h"


ChocolateBox operator+(const ChocolateBox &kitkat, const ChocolateBox &fiveStar)
{
	int min, max;

	if (kitkat.GetMinChocolate() < fiveStar.GetMinChocolate())
	{
		min = kitkat.GetMinChocolate();
	}
	else
	{
		min = fiveStar.GetMinChocolate();
	}

	

	if (kitkat.GetMaxChocolate() > fiveStar.GetMaxChocolate())
	{
		max = kitkat.GetMaxChocolate();
	}
	else
	{
		max = fiveStar.GetMaxChocolate();
	}

	
	return ChocolateBox(min, max);
}


ChocolateBox operator+(const ChocolateBox &kitkat, int value)
{
	int min, max;

	if (kitkat.GetMinChocolate() < value)
	{
		min = kitkat.GetMinChocolate();
	}
	else
	{
		min = value;
	}

	

	if (kitkat.GetMaxChocolate() > value)
	{
		max = kitkat.GetMaxChocolate();
	}
	else
	{
		max = value;
	}

	
	return ChocolateBox(min, max);
}


ChocolateBox operator+(int value, const ChocolateBox &fiveStar)
{

	// calling operator+(ChocolateBox, value)

	return fiveStar + value;
}