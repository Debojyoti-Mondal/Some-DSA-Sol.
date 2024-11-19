#include <iostream>
using namespace std;
bool isself(int** arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool ratinmaze(int** arr, int x, int y, int n, int** ansarr)
{
    if (x == n - 1 && y == n - 1)
    {
        ansarr[x][y] = 1;
        return true;
    }
    if (isself(arr, x, y, n))
    {
        ansarr[x][y] = 1;
        if (ratinmaze(arr, x + 1, y, n, ansarr))
        {
            return true;
        }
        if (ratinmaze(arr, x, y + 1, n, ansarr))
        {
            return true;
        }
        ansarr[x][y] = 0; // backtracking
        return false;
    }
    return false;
}
int main() {
    int n;
    cin >> n;

    int** arr = new int*[n];
    for (int i = 0; i < n; i++) arr[i] = new int[n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    int** ansarr = new int*[n];
    for (int i = 0; i < n; i++) {
        ansarr[i] = new int[n];
        for (int j = 0; j < n; j++)
            ansarr[i][j] = 0;
    }

    if (ratinmaze(arr, 0, 0, n, ansarr)) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cout << ansarr[i][j] << " ";
            cout << endl;
        }
    } else {
        cout << "No path exists!" << endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] arr[i];
        delete[] ansarr[i];
    }
    delete[] arr;
    delete[] ansarr;

    return 0;
}