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


};

int main(int argc, char const *argv[])
{

	return 0;
}