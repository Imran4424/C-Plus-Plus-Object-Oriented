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
			levelEnemies = 0;
		}
	}

	public: void Set(int index,int val)
	{
		levelEnemies[index] = val;
	}

	public: int Get(int index)
	{
		return levelEnemies[index];
	}
};

int main(int argc, char const *argv[])
{
	Game red;

	red.Set(5, 6);

	cout << red.Get(5) << endl;


	return 0;
}