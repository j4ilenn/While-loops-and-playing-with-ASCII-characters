//Oct20.cpp part 1
#include <iostream>
#include <vector>

int main()
{
	std::cout << "Enter a character ('a'. '$', etc.):" << std::endl;

	char userInput;

	std::cin >> userInput;


	int numberOfcharacters = 1;
	while (userInput != 'q');
	{
		std::cout << "Enter ANOTHER character (q to quit):" << std::endl;
		std::cin >> userInput;
		numberOfcharacters++;


		std::cout << "You entered this many characters total: " 
			<< numberOfcharacters << std::endl;
	}

	std::cout << "The final character you enetered was:"
		<< userInput << std::endl;
}
  

//Oct20.cpp part 2


for (char currrentLetter = 'a'; currrentLetter <= 'z'; currrentLetter++)
{
	std::cout << currrentLetter << std::endl;
}
