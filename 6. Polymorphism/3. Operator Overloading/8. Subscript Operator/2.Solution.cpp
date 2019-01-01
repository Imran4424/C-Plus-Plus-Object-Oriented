#include <iostream>
using namespace std;

class Game
{
	private: int levelEnemies[15];

	public: Game()
	{
		levelEnemies = {0};
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
	/* code */
	return 0;
}