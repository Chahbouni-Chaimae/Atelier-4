#include <iostream>
#include <list>
#include <iterator>
using namespace std;
void showlist(list <int> l1)
{
    list <int> :: iterator it;
    for(it = l1.begin(); it != l1.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}  
int main()
{
list <int> l;
    l.push_back(4);
    l.push_back(2);
    l.push_back(0);
    l.push_back(1);
    cout << "\n la List (l) est : ";
    showlist(l);
    cout << "\n la liste triée: ";
   l.sort();
    showlist(l);
return 0; 
}
