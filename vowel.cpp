#include<iostream>
#include<string> 
using namespace std;

int main(){
    string s;
    int vowels=0, constants=0;

    cout<<"Enter a string: ";
    getline(cin,s);

    for(char ch:s){
        if(isalpha(ch)){
            ch=tolower(ch);
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                vowels++;
            }else{
                constants++;
            }
        }
    }
    cout<<"Number of vowels: "<<vowels<<endl;
    cout<<"Number of consonants: "<<constants<<endl;
    return 0;
}