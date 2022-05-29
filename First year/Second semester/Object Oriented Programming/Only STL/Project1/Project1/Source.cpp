#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <string>
#include <map>
using namespace std;


bool descending(string a, string b)
{
    return (a < b);
}


int main()
{
    vector <string> arr;
    arr.push_back("Ion Ilea");
    arr.push_back("Mircea Gabi");
    arr.push_back("Cioran Gabi");
    arr.push_back("Mihaela Gogan");
    arr.push_back("Mircea Cartarescu");
    arr.push_back("Marilen Pirtea");
    arr.push_back("Petru Gabi");

    for (auto it : arr) cout << it << '\n';


    ostream_iterator<string> out_it(cout, "\n");

    cout << '\n';

    copy(arr.begin(), arr.end(), out_it);

    cout << '\n';

    cout << arr.size();

    cout << "\n\n";

    sort(arr.begin(), arr.end(), descending);

    for (auto it : arr) cout << it << '\n';

    cout << '\n';

    reverse(arr.begin(), arr.end());

    for (auto it : arr) cout << it << '\n';

    string prenume = "Gabi";
    int cnt = 0;
    map <string, int> dict;

    cout << '\n';

    for (auto nume : arr)
    {
        int poz = nume.find(" ");
        string test;
        
        for (int i = poz + 1; i < nume.length(); ++i) test += nume[i];
        if (prenume == test) ++cnt;
        if (dict.find(test) != dict.end()) ++dict[test];
        else dict[test] = 1;
    }

    cout << cnt << "\n\n";

    for (auto pair : dict)
    {
        cout << pair.first << " -> " << pair.second << '\n';
    }

    cout << '\n';

    return 0;
}