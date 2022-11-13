#include <iostream>

using namespace std;

int sumByFor(int nums[],int size)
{
    int sum = 0;
    for(int i = 0;i<size;i++){
        sum += nums[i];
    }
    return sum;
}

int sumByWhile(int nums[],int size)
{
    int sum = 0;
    while(size > 0){
        sum += nums[size-1];
        size --;
    }
    return sum;
}

int sumByRecursion(int nums[],int size,int sum)
{
    if(size == 0) return sum;
    sum += nums[--size];
    return sumByRecursion(nums,size,sum);
}

int main()
{
    int n;
    cin >> n;
    int nums[n];
    for(int i = 0; i< n ; i++){
        cin >> nums[i];
    }
    int size = sizeof(nums)/sizeof(nums[0]);
    cout << sumByFor(nums,size) << "\n" << sumByWhile(nums,size) << "\n" << sumByRecursion(nums,size,0);
    return 0;
}
