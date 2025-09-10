// C++ Program to illustrates how we can declare a list
#include <iostream>
#include <list>
using namespace std;

int main()
{
    // Declaring an empty list of integers
    list<int> listData;

    // Adding elements to the list
    listData.push_back(10);
    listData.push_back(20);
    listData.push_back(30);
    listData.push_back(40);

    // Printing the elements of the list
    cout << "List elements:";
    for (int num : listData) {
        cout << " " << num;
    }
    cout << endl;

    return 0;
}