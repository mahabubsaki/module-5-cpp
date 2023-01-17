#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, target, found = 0;
    cout << "Enter your Array Size:\n";
    cin >> size;
    cout << "Enter your targeted value:\n";
    cin >> target;

    int *array = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "This is " << i << "th index\n";
        cin >> array[i];
    }
    int low = 0, high = size - 1;
    while (low <= high)
    {
        int middle = ceil(low + high / 2);
        if (array[middle] == target)
        {
            cout << "Targetted index is on " << middle << " index";
            found = 1;
            break;
        }
        else if (target > array[middle])
        {
            low = middle + 1;
        }
        else
        {
            high = middle - 1;
        }
    }
    if (!found)
    {
        cout << "Your targetted value is not available on the array" << endl;
    }
    return 0;
}