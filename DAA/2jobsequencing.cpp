#include <iostream>
#include <algorithm>
using namespace std;
struct job
{
    char id;
    int dead;
    int profit;
};
bool compare(job a, job b)
{
    return (a.profit > b.profit);
}
void jobschedule(job arr[], int n)
{
    sort(arr, arr + n, compare);
    int result[n];
    bool slot[n];
    for (int i = 0; i < n; i++)
    {
        slot[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = min(n, arr[i].dead) - 1; j >= 0; j--)
        {
            if (slot[j] == false)
            {
                result[j] = i;
                slot[j] = true;
                break;
            }
        }
    }
    for (
        int i = 0; i < n; i++)
    {
        if (slot[i])
            cout << arr[result[i]].id << " ";
    }
}
int main()
{
    int n = 5;
    job arr[] = {{'a', 2, 20}, {'b', 2, 15}, {'c', 1, 10}, {'d', 3, 5}, {'e', 3, 1}};
    cout << "Maximum profit sequence of jobs is --> ";
    jobschedule(arr, n);
}
