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

	

	public: int* Get()
	{
		return levelEnemies;
	}
};

int main(int argc, char const *argv[])
{
	Game red;

	red.Get()[5] = 11;

	cout << red.Get(5) << endl;


	return 0;
}