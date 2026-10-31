#include<iostream>
using namespace std;
#include<bits/stdc++.h>
/*
Segregate 0s and 1s
Given an array arr[] consisting of only 0's and 1's. Modify the array in-place to segregate 0s onto the left side and 1s onto the right side of the array.
Examples-1
Input: arr[] = [0, 1, 0, 1, 0, 0, 1, 1, 1, 0]
Output: [0, 0, 0, 0, 0, 1, 1, 1, 1, 1]

Input: arr[] = [1, 1]
Output: [1, 1]
*/
//Approach-1/Brute Force
class solution{
    public:
    void rearrange(vector<int>&nums){
        int n=nums.size();
        int zerocnt=0;//Count Zero
        for(int i=0; i<n; i++){
            if(nums[i] == 0){
                zerocnt++;
            }
        }
        
        for(int i=0; i<zerocnt; i++){//Fill Zero
            nums[i]=0;
        }

        for(int i=zerocnt; i<n; i++){//Fill One
            nums[i]=1;
        }
    }
};
//Approach-2/Better
class solution{
    public:
    void rearrange(vector<int>&nums){
    sort(nums.begin(),nums.end());
}
};
//Approach-2/Optimized
class solution{
    public:
    void rearrange(vector<int>&nums){
        int n=nums.size();
        int low=0,high=n-1;
        while(low<high){
            if(nums[low] == 0){
                low++;
            }else if(nums[high] == 1){
                high--;
            }else{
                swap(nums[low],nums[high]);
                low++,high--;
            }
        }
    }

};
int main(){
    solution sol;
    vector<int>nums={0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
    sol.rearrange(nums);
    return 0;
}