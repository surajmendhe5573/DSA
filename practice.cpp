// Find maximum and minimum element in the array
#include<bits/stdc++.h>
using namespace std;
class Solution {
    public: 
        void minMax(int arr[], int n){
            int max= arr[0];
            int min= arr[0];

            for(int i=0;i<n; i++){
                if(arr[i] > max){
                    max= arr[i];
                }else{
                    if(arr[i] < min){
                        min= arr[i];
                    }
                }
            }
            cout<<"Maximum ELement: "<<max<<endl;
            cout<<"Minimum Element: "<<min;
        }
};
int main(){
    int arr[]= {22, 77, 55, 98, 87};
    int n= sizeof(arr)/sizeof(arr[0]);

    Solution solution;
    solution.minMax(arr, n);

    return 0;
}