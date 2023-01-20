#include <bits/stdc++.h>
using namespace std;
class Array
{
private:
    int *array;
    int capacity;
    int size;
    void IncreaseSize()
    {
        capacity = capacity * 2;
        int *newArray = new int[capacity];
        for (int i = 0; i < size; i++)
        {
            newArray[i] = array[i];
        }
        delete[] array;
        array = newArray;
    }

public:
    Array()
    {
        array = new int[1];
        capacity = 1;
        size = 0;
    }
    void PushIntoArray(int x)
    {
        if (capacity == size)
        {
            IncreaseSize();
        };
        array[size] = x;
        size++;
    }
    void Print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << endl;
        }
    }
    int getSize()
    {
        return size;
    }
    int getElementIndex(int index)
    {
        if (index >= size)
        {
            cout << "Your given index is not avaialable" << endl;
            return;
        }
        else
        {
            return array[index];
        }
    }
    void Insert(int index, int value)
    {
        if (index >= size)
        {
            cout << "Your given index is not avaialable" << endl;
            return;
        }
        for (int i = size - 1; i >= index; i--)
        {
            array[i + 1] = array[i];
        }
        array[index] = value;
        size++;
    }
    void Popback()
    {
        if (size != 0)
        {
            size--;
        }
        else
        {
            cout << "Current size is 0\n";
        }
    }
    void Erase(int position)
    {
        if (position >= size)
        {
            cout << "Position doesn't exist\n";
            return;
        }
        else
        {
            for (int i = position + 1; i < size; i++)
            {
                array[i - 1] = array[i];
            }
            size--;
        }
    }
};
int main()
{
    Array arrayClass;
    arrayClass.PushIntoArray(1);
    arrayClass.PushIntoArray(2);
    arrayClass.PushIntoArray(3);
    arrayClass.PushIntoArray(4);
    arrayClass.PushIntoArray(5);
    arrayClass.PushIntoArray(6);
    arrayClass.Print();
    cout << arrayClass.getElementIndex(2) << endl;
    return 0;
}