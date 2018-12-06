 #include <iostream>
using namespace std;


class Enclosing
{
	private: int x = 10, y = 12;

	class Nested
	{
		private: int a = 7, b = 11;

		public: void Show()
		{
			
		}
	};
};
