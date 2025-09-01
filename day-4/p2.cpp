#include <iostream>
using namespace std;
#define endl '\n'
class Array
{
private:
    int *arr;
    int size;
    int length;
    void input()
    {
        cout << "Enter the size of an array " << endl;
        cin >> size;
        cout << "Enter the length of an array " << endl;
        cin >> length;
        if (length > size)
        {
            cout << "length can not be greater then size. \n \t Setting length equal to size" << endl;
            length = size;
        }
        if (length <= size && length > 0)
        {
            cout << "Enter the elements of an array " << endl;
            for (int i = 0; i < length; i++)
            {
                cin >> arr[i];
            }
        }
    }
    void condition()
    {
        int value,key=-1;
        bool chk = false;
        cout << "Enter a value to insert ";
        cin >> value;
        for (int i = 0; i < length; i++)
        {
            if (value == arr[i])
            {
                chk = true;
                key=i;
                cout<<"Value is founded at index "<<key<<endl;
                break;
            }
        }
        if (!chk)
        {
            cout << "Element is not founded " << endl;
        }
        else
        {
            return;
        }
    }

public:
    Array() {}
    Array(int size, int length)
    {
        this->size;
        this->length;
        arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            arr[i] = 0;
        }
    }
    void takeinput()
    {
        input();
    };

    void search()
    {
        condition();
    };
};

int main()
{
    Array a;
    a.takeinput();
    a.search();
    return 0;
}