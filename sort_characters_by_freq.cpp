// Given an array A[] of integers, sort the array according to frequency of elements. That is elements that have higher frequency come first. If frequencies of two elements are same, then smaller number comes first.

// Input:
// The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows. The first line of each test case contains a single integer N denoting the size of array. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

// Output:
// For each testcase, in a new line, print each sorted array in a seperate line. For each array its numbers should be seperated by space.

// Constraints:
// 1 ≤ T ≤ 70
// 1 ≤ N ≤ 130
// 1 ≤ Ai ≤ 60 

// Example:
// Input:
// 2
// 5
// 5 5 4 6 4
// 5
// 9 9 9 2 5

// Output:
// 4 4 5 5 6
// 9 9 9 2 5


#include <bits/stdc++.h>
using namespace std;


int a[1000000];
unordered_map<int, int> m;

bool sortByVal(const pair<int, int>& a, const pair<int, int>& b){
    if(a.second == b.second) return a.first < b.first;
    
    return a.second > b.second;
}


void sortByFreq(int n){
    
    vector<pair<int, int>> v;
    
    for(int i = 0;i<n;i++){
        m[a[i]]++;
    }
    
    copy(m.begin(), m.end(), back_inserter(v));
    
    sort(v.begin(), v.end(), sortByVal);
    
    for(int i = 0;i<v.size();i++){
        for(int j = 0;j<v[i].second;j++){
            cout << v[i].first << " ";
        }
    }
    
}

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    m.clear();
	    
	    int n;
	    cin >> n;
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    
	    sortByFreq(n);
	    cout << endl;
	}
	
	return 0;
}
