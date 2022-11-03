//Liner Search
#include <iostream>
using namespace std;

int search(int*, const int&, const int&);
int main()
{
    const int n=10;
    int a[n]={0,1,2,3,4,5,6,7,8,9};
    if (search(a,n,5)==-1)
        cout << "not found\n";
    else
        cout << "found\n";

    if (search(a,n,50)==-1)
        cout << "not found\n";
    else
        cout << "found\n";

}
int search(int*a, const int& size, const int& item)
{
    int i;
    for (i=0;i<size;i++) // binary search
      if(a[i]==item)
        return i;
    return -1;
}
