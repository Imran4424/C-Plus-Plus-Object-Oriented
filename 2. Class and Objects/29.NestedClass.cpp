 #include <iostream>
using namespace std;


class Enclosing
{
	private: int x = 10, y = 12;

	private: class Nested
	{
		private: int a = 7, b = 11;

		public: void Show()
		{
			Enclosing obj;

			cout << "Enclosing: " << obj.x << " " << obj.y << endl;			
		}

		public: void ShowOwn()
		{
			cout << "Nested: " << a << " " << b << endl;
		}
	};

	public: void Show()
	{
		Nested obj;

		//cout << "Nested: " << obj.a << " " << obj.b << endl;
		
		obj.Show();
	}

};


int main(int argc, char const *argv[])
{
	Enclosing red;

	red.Show();

	return 0;
}