#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    string sortVowels(string s)
    {
        int fre_arr[26] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                fre_arr[s[i] - 'a']++;
        }
        int j = 0;
        for (int i = 0; i < 5; i++)
        {
            int max = *max_element(fre_arr, fre_arr + 26);
            int index = max_element(fre_arr, fre_arr + 26) - fre_arr;
            if (i == 0)
            {
                int flag = 1;
                for (int k = 0; k < 26; k++)
                {
                    if (fre_arr[k] > 0 && fre_arr[k] != max)
                        flag = 0;
                }
                if (flag)
                    break;
                else
                {
                    for (; j < s.size(); j++)
                    {
                        if ((s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u') && max > 0)
                        {
                            s[j] = 'a' + index;
                            max--;
                        }
                        if (max == 0)
                        {
                            j++;
                            break;
                        }
                    }
                    fre_arr[index] = 0;
                }
            }
            else
            {
                for (; j < s.size(); j++)
                {
                    if ((s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u') && max > 0)
                    {
                        s[j] = 'a' + index;
                        max--;
                    }
                    if (max == 0)
                    {
                        j++;
                        break;
                    }
                }
                fre_arr[index] = 0;
            }
        }
        return s;
    }
};