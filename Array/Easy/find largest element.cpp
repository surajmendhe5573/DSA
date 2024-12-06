#include<bits/stdc++.h>
using namespace std;
class Solution {
    public: 
      int largest(vector<int> &arr){
        int max= arr[0];

        for(int i=0;i<arr.size(); i++){
            if(arr[i] > max)
            max= arr[i];
        }
        return max;
      }
};
int main(){
    vector<int> arr= {4, 7, 5, 9, 6};

    // Create an instance of the Solution class
    Solution solution;
    cout<<solution.largest(arr);
}