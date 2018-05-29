#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    map <string, string> stones;
    stones.insert(pair <string, string> ("purple", "Power"));
    stones.insert(pair <string, string> ("green", "Time"));
    stones.insert(pair <string, string> ("blue", "Space"));
    stones.insert(pair <string, string> ("orange", "Soul"));
    stones.insert(pair <string, string> ("red", "Reality"));
    stones.insert(pair <string, string> ("yellow", "Mind"));
    //stones["purple"] = "Power";
    int x;
    cin >> x;
    string u;
    int z[6];
    for (int i=0; i<6; i++)
    {
        z[i] = 0;
    }
    for (int i=0; i<x; i++)
    {
        cin >> u;
        if (u[0] == 'p') z[0] = 1;
        else if (u[0] == 'g') z[1] = 1;
        else if (u[0] == 'b') z[2] = 1;
        else if (u[0] == 'o') z[3] = 1;
        else if (u[0] == 'r') z[4] = 1;
        else if (u[0] == 'y') z[5] = 1; 
    }
    cout << (6-x) << "\n";
    if (z[0] == 0) cout << stones["purple"] << "\n";
    if (z[1] == 0) cout << stones["green"] << "\n";
    if (z[2] == 0) cout << stones["blue"] << "\n";
    if (z[3] == 0) cout << stones["orange"] << "\n";
    if (z[4] == 0) cout << stones["red"] << "\n";
    if (z[5] == 0) cout << stones["yellow"] << "\n";
    return 0;        
}