#include <iostream>
#include <Vector>
#include <string>

using namespace std;    

int main()
{
    vector<string> msg {"Hi", "C++" ,"World " ,"From",  "VS Code", "and the C++", "Extension! "};
    for (const string& word : msg)
    {
        cout << word << " " ; 
    }
    cout << endl;
}
