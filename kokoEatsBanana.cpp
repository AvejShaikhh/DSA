#include <bits/stdc++.h>
using namespace std;

int speedbanana(vector<int> &piles, int h)
{
    int left = 1;
    int right = *max_element(piles.begin(), piles.end());

    while (left < right)
    {
        int mid = left + (right - left) / 2;
        int hours = 0;

        for (int pile : piles)
        {
            hours += (pile + mid - 1) / mid; // Same as ceil((double)pile / mid) but faster and integer-based
        }

        if (hours > h)
        {
            left = mid + 1; // Need to eat faster
        }
        else
        {
            right = mid; // Try a slower speed
        }
    }

    return left;
}
int main()
{
    vector<int> piles = {30, 11, 23, 4, 20};
    int h = 6;
    cout << speedbanana(piles, h);
    return 0;
}
