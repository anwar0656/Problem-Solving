#include <iostream>
using namespace std;
#define endl '\n'
class Array
{
private:
    int *arr;
    int capacity;

public:
    Array() {}
    Array(int capacity)
    {
        this->capacity = capacity;
        arr = new int[capacity];
    }

    void input()
    {

        cout << "Enter the size of an array " << endl;
        cin >> capacity;
        arr = new int[capacity];
        cout << "Enter the values of an array " << endl;
        for (int i = 0; i < capacity; i++)
        {
            cin >> *(arr + i);
        }
    }

    void check()
    {
        bool unique = true;
        for (int i = 0; i < capacity; i++)
        {
            for (int j = i + 1; j < capacity; j++)
            {
                if (arr[i] == arr[j])
                {
                    unique = false;
                    break;
                }
            }
            if (!unique)
                break;
        }

        if (unique)
            cout << "All elements are unique." << endl;
        else
            cout << "There are duplicate elements." << endl;
    }

    ~Array()
    {
        delete[] arr;
        arr = nullptr;
    }
};

int main()
{
    Array aree;
    aree.input();
    aree.check();

    return 0;
}