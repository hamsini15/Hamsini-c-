#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    vector<string> msg{"HELLO","C++","World","from","VS code","and the C++ extension!"};

    for(const string & word:msg){
        cout <<word<< " ";
    }
    cout << endl;

}