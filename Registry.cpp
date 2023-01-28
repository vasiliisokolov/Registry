#include <iostream>
#include <map>
#include <string>

std::string find_patient(std::map<int, std::string>&);

int main()
{
    std::string input;
    bool working = true;
    int patientNumber = 0;
    std::map<int, std::string> list;
    std::cout << "\tRegistry!" << std::endl;
    while (working)
    {
        std::cin >> input;
        if (input == "Exit")
        {
            working = false;
        }
        else if (input == "Next")
        {
            if (list.begin() == list.end())
            {
                std::cerr << "Error! The List is empty!" << std::endl;
            }
            else
            {
                std::cout << find_patient(list) << std::endl;
            }
        }
        else
        {
            patientNumber++;
            list.insert(std::pair<int, std::string> (patientNumber, input));

        }
    }
    
}

std::string find_patient(std::map<int, std::string>& list)
{
    char letter = 'Z', newLetter;
    std::string result;
    int del;
    for (std::map<int, std::string>::iterator it = list.begin();
        it != list.end(); ++it)
    {
        newLetter = it->second[0];
        if (newLetter < letter)
        {
            result = it->second;
            del = it->first;
        }
    }
    list.erase(del);
    return result;
}
