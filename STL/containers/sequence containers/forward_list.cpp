#include <iostream>
#include <forward_list>

int main()
{
    // Creating a forward list of integers
    std::forward_list<int> forwardList;

    // Inserting elements at the beginning
    forwardList.push_front(1);
    forwardList.push_front(2);
    forwardList.push_front(3);

    // Iterating through the forward list and printing elements
    std::cout << "Forward List Elements: ";
    for (const auto &element : forwardList)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Inserting an element after the first element
    auto it = forwardList.begin();
    ++it; // Move iterator to the second element
    forwardList.insert_after(it, 4);

    // Iterating through the updated forward list
    std::cout << "Updated Forward List Elements: ";
    for (const auto &element : forwardList)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}