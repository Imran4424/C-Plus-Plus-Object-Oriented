#include <iostream>
using namespace std;

class Game
{
	private: int levelEnemies[15];

	public: Game()
	{
		//levelEnemies = {0}; this line will give error

		for (int i = 0; i < 15; ++i)
		{
			levelEnemies[i] = 0;
		}
	}

	public: int& operator[](const int index)
	{
		return levelEnemies[index];
	}

	public: const int& operator[](const int index) const
	{
		
	}
};

int main(int argc, char const *argv[])
{
	Game red;

	red[5] = 15;
	cout << red[5] << endl;


	return 0;
}