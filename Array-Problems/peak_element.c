#include<stdio.h>
#include<stdlib.h>
//finding a peak in given array(element which is greater than its neighboring elements can be multiple)
int peak(int a[],int start,int end)
{
    int mid;
    mid=start+(end-start)/2;
   //base case
    if(start==end)//if one element or mid reaches to extreme points
    {
        if(a[start]>a[start+1])
        {
            return start;
        }
        else if(a[end]>a[end-1])
        {
            return end;
        }
        else{
        return -1;
        }
    }
    //recursive case
    if(a[mid+1]>a[mid])
    {
        return peak(a,mid+1,end);
    }else if(a[mid-1]>a[mid])
    {
        return peak(a,start,mid-1);
    }else
    {
        return mid;
    }

    return -1;
}

int main()
{
    int a[5]={4,3,5,6,9};
    int n;
    n=peak(a,0,4);
    if(n!=-1)
    {
        printf("peak element found at index %d\n",n);
    }else{
    printf("peak element not present\n");
    }
    return 0;
}
