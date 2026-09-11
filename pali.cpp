#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cout<<"enter a word:";
    cin>>s;

    cout<<"length:"<<s.length()<<endl;
    cout<<"upper:";
    for(char c:s)cout<<(char)toupper(c);
    cout<<endl;
    bool pal=true;
    
    for(size_t i=0,j=s.size()-1;i<j;++i,--i)
    if(s[i]!=s[j]){pal=false;break;}
    
    cout<<s<<(pal?"IS":"is a NOT")<<"a palindrome";
    size_t pos=s.find("an");
    if(pos !=string::npos)cout<<"'an' found at index"<<pos<<endl;
    else cout<<"'an' not found\n";
    return 0;
}