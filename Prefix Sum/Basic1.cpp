#include<iostream>
using namespace std;
#include<bits/stdc++.h>
//Find pivot index
//Solve on Leetcode-724
//Approach-1
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefix(n,0);//Store All index Prefix sum
        vector<int>suffix(n,0);//Store All index Suffix sum 
        //Find all indx prefix sum
        for(int i=1; i<n; i++){
            prefix[i]=prefix[i-1]+nums[i-1];
        }
        //Find all indx suffix sum
        for(int i=n-2; i>=0; i--){
            suffix[i]=suffix[i+1]+nums[i+1];
        }
        //find pivot indx
        for(int i=0; i<n; i++){
            if(prefix[i] == suffix[i]){
                return i;
            }
        }
        return -1;
    }
};
//Approach-2
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int sum=0;//Array sum
        for(int i=0; i<n; i++){
            sum+=nums[i];
        }
        int left=0;//Prefix sum
        for(int i=0; i<n; i++){
            //left+=nums[i];
         int right=sum-left-nums[i];//Suffix sum
            if(left==right){//Compare leftsum and rightsum are equal thats means pivot indx
                return i;
               
            }
             left+=nums[i];
        }
        return -1;
    }
};
int main(){
    Solution sol;
    vector<int>nums={1,7,3,6,5,6};
    return 0;
}