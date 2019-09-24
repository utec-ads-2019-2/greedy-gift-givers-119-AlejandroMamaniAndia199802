#include <iostream>
#include <string>
#include <map>

using namespace std;

map< string, int> money;
string name[15];

int main ()
{
    bool printBlankLine = false;
    int n,  cashGive, nReceivers;
    string giver, receiver;
    while (cin >> n)
    {
        if (printBlankLine)
            cout << endl;
        else
            printBlankLine = true;

        money.clear();
        for (int i = 0; i < n; i++)
        {
            cin >> name[i];
            money[name[i]] = 0;
        }

        for (int i = 1; i <= n; i++)
        {
            cin >> giver >> cashGive >> nReceivers;
            for (int j = 1; j <= nReceivers; j++)
            {
                cin >> receiver;
                money[receiver] += (cashGive / nReceivers);
            }

            if (nReceivers)
                money[giver] -= (cashGive / nReceivers * nReceivers);
        }

        for (int i = 0; i < n; i++)
            cout << name[i] << " " << money[name[i]] << endl;
    }

    return 0;
}
