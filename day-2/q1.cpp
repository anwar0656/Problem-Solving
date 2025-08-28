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

    void condition(){
        bool des=false;
        bool asc=false;
        for(int i=0;i<size-1;i++){
            if(arr[i]>arr[i+1]){
                des=true;
            }
            else if(arr[i]<arr[i+1]){
                asc=true;
            }
        }
        if(des && !asc){
            cout<<"It is in descending order"<<endl;
        }
        else if(asc && !des){
            cout<<"It is in ascending order "<<endl;
        }

        else{
            cout<<"It is not in any order "<<endl;
        }
    }
};

int main(){
Question q1;
q1.input();
q1.condition();
    return 0;
}