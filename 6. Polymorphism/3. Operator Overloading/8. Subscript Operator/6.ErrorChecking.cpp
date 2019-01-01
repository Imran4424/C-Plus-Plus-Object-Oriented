#include <iostream>
#include <cassert>
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
		assert(index >= 0 && index < 15);

		return levelEnemies[index];
	}
};

int main(int argc, char const *argv[])
{
	Game red;

	red[5] = 15;
	cout << red[5] << endl;


	return 0;
}