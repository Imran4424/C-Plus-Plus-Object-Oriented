#include <iostream>
using namespace std;

int findFirstChar(const char* string, char ch)
{
    const std::size_t stringlength{ strlen(string) };
 
    // Step through each character in string
    for (std::size_t index=0; index < stringlength ; ++index)
        // If the character matches ch, return its index
        if (string[index] == ch)
            return index;
 
    // If no match was found, return -1
    return -1;
}

int main(int argc, char const *argv[])
{
	
	return 0;
}

/*
	code from learncpp
*/