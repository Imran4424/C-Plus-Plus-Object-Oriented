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

	public: void operator[](const string index)
	{
		cout << index << endl;
	}
};

int main(int argc, char const *argv[])
{
	Game red;

	red["I am a Programmer"];

	return 0;
}