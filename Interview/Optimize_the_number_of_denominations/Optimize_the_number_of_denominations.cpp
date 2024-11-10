#include <iostream>
#include <vector>

using namespace std;

class Optimize_Number
{
public:
    vector<int> bills = {100, 50, 20, 10, 5, 2, 1};
    vector<int> result;

    void calculator(int x, int y)
    {
        int total = x - y;
        result.clear();
        for (int num : bills)
        {
            int count = total / num;
            result.push_back(count);
            total %= num;
        }
    }

    void print_result()
    {
        for (size_t i = 0; i < bills.size(); i++)
        {
            for (int j = 0; j < result[i]; j++)
            {
                cout << bills[i] << " ";
            }
        }
        cout << endl;
    }
};

int main()
{
    Optimize_Number s;

    int x = 100;
    int y = 1;

    s.calculator(x, y);

    s.print_result();

    return 0;
}