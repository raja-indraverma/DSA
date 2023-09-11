#include<iostream>
using namespace std;
#include<queue>

int main(){
    deque<int> d;
    d.push_front(12);
    d.push_back(14);
    cout << d.front() << " ";

    cout << d.back() << endl;

    d.pop_front();

    cout << d.front() << " ";

    cout << d.back() << endl;
    d.pop_back();
    if(d.empty()){
        cout << "this shit empty";
    }else{
        cout <<"not empty";
    }
    
}