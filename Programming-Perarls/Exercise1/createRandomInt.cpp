
/*
4.生成[0,n)的之间k个不重复的随机整数。
如果要想生成这样一个数组，可以直接从头到尾循环，每个数跟后面的随机位置交换值就可以。
*/

#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstdio>
using namespace std;
const int N = 1000;
const int K = 100;

//生成位于[left,right-left)之间的随机整数
int randint( int left, int right ){
    return rand() % ( right-left ) + left;
}
int a[ N ];
int main(void){
    for( int i = 0; i < N; i++ )
        a[i] = i;
    for( int i = 0; i < K; i++ ){
        swap( a[i], a[ randint(i,N) ] );
        printf("%d\n",a[i]);
    }
    return 0;
}
