#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n, l, h;
    cin >> n >> l >> h;

    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end(), greater<int>());

    double sum = 0;
    int count = 0;

    for(int i = h; i < n - l; i++){
        sum += vec[i];
        count++;
    }

    double result = sum / count;

    if (result == static_cast<int>(result)) {
        // 정수라면 .0 붙여서 출력
        cout << fixed << setprecision(1) << result << '\n';
    } else {
        // 소수점 이하 있을 때는 10자리까지 출력
        cout << fixed << setprecision(10) << result << '\n';
    }

    return 0;
}
