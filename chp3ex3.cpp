#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main(void)
{
    vector<string> words;
    string s;
    while (cin >> s)
    {
        if (s == "finish")
        {
            break;
        }

        words.push_back(s);

    }

    if (words.size() == 0)
    {

        cout << "단어가 적어도 하나는 있어야 합니다." << endl;


        return 1;

    }
    sort(words.begin(), words.end());

    string temp = words[0];

    int cnt = 1;

    for (int i = 1; i < words.size(); i++)
    {

        if (words[i] == temp)

        {

            cnt++;

            continue;
        }

        cout << temp << " : " << cnt << endl;

        temp = words[i];

        cnt = 1;
    }


    cout << temp << " : " << cnt << endl;


    return 0;

}