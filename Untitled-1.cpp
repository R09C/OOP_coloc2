

#include <iostream>
#include <vector>
#include <algorithm>
// -----------------------------------1
int main()
{
    std::vector<int> inputArray = {1, 2, 2, 3, 4, 4, 5};
    std::vector<int> uniqueArray;

    std::sort(inputArray.begin(), inputArray.end());
    std::unique_copy(inputArray.begin(), inputArray.end(), std::back_inserter(uniqueArray));

    for (int num : uniqueArray)
    {
        std::cout << num << " ";
    }

    return 0;
}

// -----------------------------------2
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main()
{
    std::vector<int> randomArray;
    std::vector<int> multiplesOf5;

    srand(time(0));
    for (int i = 0; i < 10; ++i)
    {
        randomArray.push_back(rand() % 100); // Генерация случайных чисел от 0 до 99
    }

    for (int num : randomArray)
    {
        if (num % 5 == 0)
        {
            multiplesOf5.push_back(num);
        }
    }

    for (int num : multiplesOf5)
    {
        std::cout << num << " ";
    }

    return 0;
}
// -----------------------------------3
#include <iostream>
#include <list>
#include <string>

int main()
{
    std::list<std::string> lastNameList = {"Smith", "Johnson", "Williams"};
    std::string fam = "Brown";

    auto longestLastName = std::max_element(lastNameList.begin(), lastNameList.end(),
                                            [](const std::string &a, const std::string &b)
                                            {
                                                return a.length() < b.length();
                                            });

    if (longestLastName != lastNameList.end())
    {
        lastNameList.insert(longestLastName, fam);
    }

    for (const std::string &lastName : lastNameList)
    {
        std::cout << lastName << " ";
    }

    return 0;
}

// -----------------------------------4

#include <iostream>
#include <list>
#include <string>
#include <algorithm>

int main()
{
    std::list<std::string> lastNameList = {"Smith", "Johnson", "Williams"};

    lastNameList.sort();

    for (const std::string &lastName : lastNameList)
    {
        std::cout << lastName << " ";
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <string>

// -----------------------------------5

int main()
{
    std::vector<std::string> stringArray = {"apple", "banana", "cherry", "date"};

    auto longestString = std::max_element(stringArray.begin(), stringArray.end(),
                                          [](const std::string &a, const std::string &b)
                                          {
                                              return a.length() < b.length();
                                          });

    if (longestString != stringArray.end())
    {
        stringArray.erase(longestString);
    }

    for (const std::string &str : stringArray)
    {
        std::cout << str << " ";
    }

    return 0;
}

// -----------------------------------6

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> fibonacci = {0, 1, 1, 2, 3, 5, 8, 13, 21};
    std::vector<int> evenNumbers;

    for (int num : fibonacci)
    {
        if (num % 2 == 0)
        {
            evenNumbers.push_back(num);
        }
    }

    for (int num : evenNumbers)
    {
        std::cout << num << " ";
    }

    return 0;
}

// -----------------------------------7

#include <iostream>
#include <list>
#include <string>
#include <algorithm>

int main()
{
    std::list<std::string> list1 = {"Adams", "Johnson", "Smith"};
    std::list<std::string> list2 = {"Brown", "Jones", "Williams"};

    list1.merge(list2);
    list1.sort();

    for (const std::string &lastName : list1)
    {
        std::cout << lastName << " ";
    }

    return 0;
}

// -----------------------------------8

#include <iostream>
#include <list>
#include <string>
#include <algorithm>

int main()
{
    std::list<std::string> lastNameList = {"Smith", "Johnson", "Williams"};

    auto longestLastName = std::max_element(lastNameList.begin(), lastNameList.end(),
                                            [](const std::string &a, const std::string &b)
                                            {
                                                return a.length() < b.length();
                                            });

    if (longestLastName != lastNameList.end())
    {
        lastNameList.erase(longestLastName);
    }

    for (const std::string &lastName : lastNameList)
    {
        std::cout << lastName << " ";
    }

    return 0;
}

// -----------------------------------9

#include <iostream>
#include <set>
#include <string>

int main()
{
    std::string sentence1 = "This is a sample sentence.";
    std::string sentence2 = "Another example sentence.";

    std::set<char> uniqueChars1;
    std::set<char> uniqueChars2;

    for (char c : sentence1)
    {
        if (std::isalpha(c))
        {
            uniqueChars1.insert(c);
        }
    }

    for (char c : sentence2)
    {
        if (std::isalpha(c))
        {
            uniqueChars2.insert(c);
        }
    }

    if (uniqueChars1.size() > uniqueChars2.size())
    {
        std::cout << "В первом предложении больше разных букв.";
    }
    else if (uniqueChars1.size() < uniqueChars2.size())
    {
        std::cout << "Во втором предложении больше разных букв.";
    }
    else
    {
        std::cout << "Количество разных букв в обоих предложениях одинаково.";
    }

    return 0;
}
