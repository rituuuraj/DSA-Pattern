#include<iostream>
using namespace std;
#include<bits/stdc++.h>
//Two Sum
//solve on Leetcode-1
//Approach-Brute Force
class solution{
   public:
   vector<int>twosum(vector<int>&nums,int target){
     int n=nums.size();
     for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
          if(nums[i]+nums[j] == target){
            return {i,j};
          }
        }
     }
     return {-1,-1};
   }
};
//Approach-2 Optimized using two Pointer
class solution{
   public:
  vector<int>twosum(vector<int>&nums,int target){
    int n=nums.size();
    int low=0,high=n-1;
    while(low< high){
        if(nums[low]+nums[high] == target){
            return{low,high};
        }else if(nums[low] +nums[high] < target){
            low++;
        }else{
            high--;
        }
    }
    return {-1,-1};
  }
};
int main(){
  solution sol;
  vector<int>nums={2,7,11,15};
  int target=9;
  vector<int>ans=sol.twosum(nums,target);
  for(auto it : ans){
     cout<<it<<" ";
  }
  return 0;
}