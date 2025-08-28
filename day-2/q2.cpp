#include<iostream>
using namespace std;
class Question{
    private:
    int *arr;
    int size;
    public:
    Question(){}
    Question(int size){
        this->size=size;
        arr=new int [size];
    }

    void input(){
        cout<<"Enter the size of an array "<<endl;
        cin>>size;
        arr=new int [size];
        cout<<"Enter the values of an array "<<endl;
        for(int i=0;i<size;i++){
            cin>>*(arr+i);
        }
    }
    void check(){
        bool chk=false;
        int temp[size];
        for(int i=0;i<size;i++){
            temp[i]=arr[i];
        }
        for(int i=0,j=size;i<size-1 &&j>0;i++,j--){
            if(temp[i]==arr[j]){
                chk=true;
            }
        }
        if(chk){
            cout<<"palindrome"<<endl;
        }
        else{
            cout<<"not a palindrome "<<endl;
        }
    }

    ~Question(){
        delete[] arr;
        arr=nullptr;
    }
};

int main(){
Question q1;
q1.input();
q1.check();

    return 0;
}