/*
	write a program to demonstrate default constructor in c++ classes
*/

class Box
{
	private: int length, width;
	public: Box()
	{
		length = 0;
		width = 0;
	}

	public: void Assign(int l, int w)
	{
		length = l;
		width = w;
	}
	
	public: int Area()
	{
		return length*width;
	}
};


int main(int argc, char const *argv[])
{
	Box red;

	cout << "Area is: " << red.Area() << endl;

	return 0;
}