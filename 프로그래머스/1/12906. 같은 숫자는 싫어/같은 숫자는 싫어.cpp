#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    cout << "Hello Cpp" << endl;

    if (arr.empty()) return answer;

    answer.push_back(arr[0]);

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] != arr[i - 1]) {
            answer.push_back(arr[i]);
        }
    }

    return answer;
}


//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;

//vector<int> solution(vector<int> arr) 
//{

//    arr.erase(unique(arr.begin(), arr.end()),arr.end());

//    vector<int> answer = arr;
//    return answer;
//}
