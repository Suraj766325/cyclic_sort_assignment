// Q1) What is the worst case time complexity of cycle sort?
    a) O(n)
    b) O(log n)
    c) O(n log n)
    d) O(n*n)
    ANS-> option 1


// Q2) You have a set of integers s , which originally contains all the numbers from 1 to n . Unfortunately, due to some error, one of the numbers in s got duplicated to another number in
//     the set, which results in repetition of one number and loss of another number. You are given an integer array nums representing the data status of this set after the error.
//     Find the number that occurs twice and the number that is missing and return them in the form of an array. [Leetcode 645]
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>nums={1,2,2,4};
    int n=nums.size(),i=0;
    while(i<n)
    {
        int correctidx=nums[i]-1;
        if(i==correctidx || nums[i]==nums[correctidx]) i++;
        else swap(nums[i],nums[correctidx]);    
    }
    vector<int>v;
    for(i=0;i<n;i++)
    {
        if(nums[i]-1!=i){
            v.push_back(nums[i]);
            v.push_back(i+1);
        }
    }
    //print
    for(int ele:v) cout<<ele<<" ";
}




// Q3) Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.
//     leetcode -442
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>nums={4,3,2,7,8,2,3,1};
    int n=nums.size(),i=0;
    while(i<n)
    {
        int correctidx=nums[i]-1;
        if(i==correctidx || nums[i]==nums[correctidx]) i++;
        else swap(nums[i],nums[correctidx]);
    }
    //push in vector
    vector<int>v;
    for(i=0;i<n;i++)
    {
        if(nums[i]-1!=i) v.push_back(nums[i]);
    }
    //print
    for(int ele:v) cout<<ele<<" ";
}