#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {

    int T, N;
    cin >> T >> N;

    map<string, int> dayMap;
    dayMap["Mon"] = 0;
    dayMap["Tue"] = 1;
    dayMap["Wed"] = 2;
    dayMap["Thu"] = 3;
    dayMap["Fri"] = 4;

    int totalSleptTime = 0;

    string d1_str, d2_str;
    int h1, h2;
    for (int i = 0; i < N; ++i) {
        cin >> d1_str >> h1 >> d2_str >> h2;
        int startTime = dayMap[d1_str] * 24 + h1;
        int endTime = dayMap[d2_str] * 24 + h2;
        totalSleptTime += (endTime - startTime);
    }

    // 자야 할 남은 시간
    int neededTime = T - totalSleptTime;

    if (neededTime <= 0) 
    {
        cout << 0;
    } 
    else if (neededTime <= 48) 
    {
        cout << neededTime;
    } 
    else
    {
        cout << -1 << endl;
    }

    return 0;
}