#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
    stack<string> s1;
    string in;

    cout<<"Enter a set of strings: ";
    while(true)
    {
        cin>>in;
        if(in == "s")
        {
            break;
        } ///s = stop

        s1.push(in);
    }


    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<endl;

    return 0;
}
