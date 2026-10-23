#include<iostream>
using namespace std;
#include<bits/stdc++.h>
//Two Sum II - Input Array Is Sorted
//Solve on leetcode-167
//Approach-1/Brute Force
class solution{
public:
vector<int>twosum(vector<int>&nums,int target){
  int n=nums.size();
  for(int i=0; i<n; i++){
    for(int j=i+1; i<n; i++){
      if(nums[i] + nums[j]== target){
        return{i+1,j+1};
      }
    }
  }
  return{-1,-1};
}
};
//Approach-2/optimized Using twoPointer
class solution{
    public:
    vector<int>twosum(vector<int>&nums,int target){
        int n=nums.size();
        int low=0,high=n-1;
        while(low < high){
            int sum=nums[low]+nums[high];
            if(sum == target){
                return {low+1,high+1};
            }else if(sum < target){
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
