#include <iostream>
#include <queue>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    int width;
    cin >> width;
    double current;
    double windowSum = 0;
    queue<double> window;
    vector<double> output;
    while (cin >> current) {
        windowSum += current;
        window.push(current);
        if (window.size() > width)
        {
            windowSum -= window.front();
            window.pop();
        }

        output.insert(output.cend(), windowSum / width);

        if (cin.peek() == '\n')
        {
            cin.clear(ios::eofbit);
            break;
        }

    }
    for (double r : output)
    {
        int precision = 2;
        if (r >= 1)
            precision = 3;
        cout << setprecision(precision) << r << " ";
    }

    cout << std::endl;
}