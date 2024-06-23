#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int romanToInt(string s)
    {
        int value[256];
        value['I'] = 1;
        value['V'] = 5;
        value['X'] = 10;
        value['L'] = 50;
        value['C'] = 100;
        value['D'] = 500;
        value['M'] = 1000;
        int n = s.size();
        int total = value[s[n - 1]];
        char prev = s[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            total += value[s[i]];
            if (s[i] == 'I')
                if (prev == 'V' || prev == 'X')
                    total -= 2;
            if (s[i] == 'X')
                if (prev == 'L' || prev == 'C')
                    total -= 20;
            if (s[i] == 'C')
                if (prev == 'D' || prev == 'M')
                    total -= 200;
            prev = s[i];
        }
        return total;
    }
};