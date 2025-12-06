#include <string>
#include <vector>

using namespace std;

void dfs(const vector<int>& numbers, int target, int index, int sum, int& answer) {
    if (index == numbers.size()) {
        if (sum == target) {
            answer++;
        }
        return;
    }
    
    dfs(numbers, target, index + 1, sum + numbers[index], answer);
    
    dfs(numbers, target, index + 1, sum - numbers[index], answer);
}

int solution(vector<int> numbers, int target) {
    int answer = 0;
    dfs(numbers, target, 0, 0, answer);
    return answer;
}

/*
using namespace std;

int total;

void DFS(vector<int> &numbers, int &target,int sum,int n) {
    if(n >= numbers.size()){
        if(sum == target) total++;
        return;
    }

    DFS(numbers, target, sum + numbers[n], n+1);
    DFS(numbers, target, sum - numbers[n], n+1);
}

int solution(vector<int> numbers, int target) {
    int answer = 0;

    DFS(numbers, target, numbers[0] , 1);
    DFS(numbers, target, -numbers[0], 1);

    answer = total;

    return answer;
}
*/