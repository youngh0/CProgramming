/***********************************************
소프트웨어학부 20171707차영호
Problem:
        방면적구하기
 ***********************************************/
#include <iostream>
#include <algorithm>
using namespace std;

int room(char arr[][101], int x, int y, int cnt) {
    arr[x][y] = '+';
    ++cnt;
    if (arr[x][y - 1] == '.') 
        cnt = room(arr, x, y - 1, cnt);
    if (arr[x][y + 1] == '.')
        cnt = room(arr, x, y + 1, cnt); 
    if (arr[x - 1][y] == '.') 
        cnt = room(arr, x - 1, y, cnt); 
    if (arr[x + 1][y] == '.') 
        cnt = room(arr, x + 1, y, cnt); 
    return cnt;
}

int main() {
    int numTest;
    cin >> numTest;
    while (numTest--) {
        int roomCount[101] = { 0, };
        char arr[101][101];
        int m, n; cin >> m >> n;
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < m; ++k) {
                cin >> arr[j][k];
            }
        }

        int index = 0;
        int sizeOfroom = 0;

        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < m; ++k) {
                if (arr[j][k] == '.') {
                    sizeOfroom = room(arr, j, k, sizeOfroom);
                    roomCount[index] = sizeOfroom;
                    ++index;
                    sizeOfroom = 0;
                }
            }
        }
        sort(roomCount, roomCount + index);
        cout << index << endl;

        for (int tmp = index - 1; tmp >= 0; --tmp) {
            cout << roomCount[tmp] << " ";
        }
        cout << endl;
    }
    return 0;
}