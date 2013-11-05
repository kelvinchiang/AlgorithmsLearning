#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> a;
    int i;
    for(i=0;i<10;i++)
        a.push_back(10-i);

    sort(a.begin(), a.end());

    for(i=0;i<10;i++)
        cout<<a[i]<<" "<<endl;
    return 0;
}
