#include <iostream>
#include <map>
#include <string>

int main()
{
    std::string input;
    bool working = true;
    int patientNumber = 0;
    std::map<int, std::string> list;
    std::cout << "Registry!" << std::endl;
    while (working)
    {
        std::cin >> input;
        if (input == "Exit")
        {
            working = false;
        }
        else if (input == "Next")
        {

        }
        else
        {
            patientNumber++;
            list.insert(std::pair<int, std::string> (patientNumber, input));

        }
    }
    
}

