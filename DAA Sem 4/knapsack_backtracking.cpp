#include<iostream>
#include<vector>
using namespace std;

int weights[] = {2, 3, 1}, values[] = {6, 15, 7};
int solution = 0, n = 3;

std::vector<int> vsol;
std::vector<int> temp;

bool issol;

void Knapsack (int i, int max, int value)
{
  for (int k = i; k < n; k++) {
    if ( max > 0)
    {
        if (weights[k] <= max)
        {
          temp.push_back(k);
          if (value+ values[k] >= solution)
          {
            solution = value + values[k];
            issol = true;
          }
        }
        if ( (k+1) < n)
        {
          Knapsack (k+1, max - weights[k], value + values[k]);
        }
        else
        {
          if (issol == true)
          {
            if (! vsol.empty()) vsol.clear();
            std::move(temp.begin(), temp.end(), std::back_inserter(vsol));
            temp.clear();
            issol = false;
          } else temp.clear();
          return;
        }
    }
    else
    {
        if (issol == true)
        {
            if (! vsol.empty()) vsol.clear();
            std::move(temp.begin(), temp.end(), std::back_inserter(vsol));
            temp.clear();
            issol = false;
        } else temp.clear();
        return;
    }
  }
}

int main()
{
    Knapsack(0, 2, 0);
    cout << "solution: " << solution << endl;
    for(vector<int>::iterator it = vsol.begin(); it != vsol.end(); it++)
        cout << *it << " ";
    return 0;
}