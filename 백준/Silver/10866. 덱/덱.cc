#include <iostream>
#include <deque>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    deque<int> d;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string cmd;
        cin >> cmd;
        if (cmd == "push_front")
        {
            int input;
            cin >> input;
            d.push_front(input);
        }
        else if (cmd == "push_back")
        {
            int input;
                cin >> input;
                d.push_back(input);
        }
        else if (cmd == "pop_front")
        {
            if (d.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << d.front() << "\n";
                d.pop_front();
            }
        }
        else if (cmd == "pop_back")
        {
            if (d.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << d.back() << "\n";
                d.pop_back();
            }
        }
        else if (cmd == "size")
        {
            cout << d.size() << "\n";
        }
        else if (cmd == "empty")
        {
            if (d.empty())
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << 0 << "\n";
            }
        }
        else if (cmd == "front")
        {
            if (d.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << d.front() << "\n";
            }
        }
        else if (cmd == "back")
        {
            if (d.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << d.back() << "\n";
            }
        }
    }

    return 0;
}