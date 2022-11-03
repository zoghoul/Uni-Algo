//Binary Search
//only SORTED Array
#include <iostream>
using namespace std;

int search(int[],int,int,int);
int main()
{
    const int n=15;
    int a[n]={1,3,7,10,15,19,20,29,30,35,40,50,57,60,70};
     //index: 0,1,2,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10,11,12,13,14 index
    cout << "found at "<<search(a,50,0,n-1);
}
int search(int a[],int item,int l,int h)
{
    if(l>h) return -1;
    int m=(l+h)/2;
    if (a[m]==item) return m;
    if (a[m]>item)  return search(a,item,l,m-1);
    return search(a,item,m+1,h);
}
