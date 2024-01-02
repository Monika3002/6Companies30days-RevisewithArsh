#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int gcd(int a, int b) {
        if (a == 0) {
            return b;
        }
        return gcd(b%a, a);
    }
    int minimizeSet(int divisor1, int divisor2, int uniqueCnt1, int uniqueCnt2) {
        vector<int>arr1;
        vector<int>arr2;
        int n=1;
        int i=1;
        while(arr1.size()<uniqueCnt1){
            if(gcd(i, divisor1) == 1 ){
                arr1.push_back(i);
            }
            i++;
        }
         i=1;
      while(arr2.size() < uniqueCnt2){
    if(gcd(i, divisor2) == 1){
        bool isInArr1 = false;
        for(int j = 0; j < arr1.size(); j++){
            if(arr1[j] == i){
                isInArr1 = true;
                break;
            }
        }
        if(!isInArr1){
            arr2.push_back(i);
        }
    }
    i++;
}

        // arr1.insert(arr1.end(), arr2.begin(), arr2.end());
        // sort(arr1.begin(), arr1.end());
        for(int i=0;i<arr1.size();i++){
            cout<<arr1[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<arr2.size();i++){
            cout<<arr2[i]<<" ";
        }
        cout<<endl;
        

        // int ans= arr1.size();
        // if (ans > 0) {
        //     return arr1[ans-1];
        // } 
        // else {
            
             return -1;
            // }
        

    }
};

int main(){
    Solution sol;
    int divisor1 = 12;
    int divisor2 = 3;
    int uniqueCnt1 =2;
    int uniqueCnt2 = 10;
    int result = sol.minimizeSet(divisor1, divisor2, uniqueCnt1, uniqueCnt2);
    cout<<result<<endl;
    return 0;
}