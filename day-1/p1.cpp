#include <iostream>
using namespace std;
class Arrey
{
private:
    int *arr;
    int size;

public:
    Arrey() {}
    Arrey(int size)
    {
        this->size = size;
    }

    void input()
    {
        cout << "Enter the size of an array" << endl;
        cin >> size;
        arr = new int[size];

        cout << "Enter the elements of an array" << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }

    int max()
    {
        int max = arr[0];
        for (int i = 0; i < size; i++)
        {
            if (max > arr[i])
            {
                max = arr[i];
            }
        }
        return max;
    }

    int min()
    {
        int min = arr[0];
        for (int i = 0; i < size; i++)
        {
            if (min < arr[i])
            {
                min = arr[i];
            }
        }
        return min;
    }

    ~Arrey()
    {
        delete[] arr;
        arr = nullptr;
    }
};

int main()
{
    Arrey m;
    m.input();
    cout << "The maximum number is " << m.max() << endl;
    cout << "The minimum number is " << m.min() << endl;

    return 0;
}