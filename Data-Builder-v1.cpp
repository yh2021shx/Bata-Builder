#include <bits/stdc++.h>
using namespace std;

#define std oiiaioooooiiiai

void cmd(string s) {
    cout << "Cmd: " << s << endl;
    system(s.c_str());
}

int main() {
    string gen, std;
    int tc;
    cout << "Data Genarator: ";
    cin >> gen;
    cout << "Solution Code: ";
    cin >> std;
    cout << "Test Cases: ";
    cin >> tc;
    srand(time(0));
    for (int i = 1; i <= tc; i++) {
        cmd("echo " + to_string(rand()) + " > seed.txt");
        cmd(gen + ".exe < seed.txt > data" + to_string(i) + ".in");
        cmd(std + ".exe < data" + to_string(i) + ".in > data" + to_string(i) + ".ans");
    }
    cout << "Completed!" << endl;
    system("pause");
}