#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,m,i,j;
    cin >> n;
	cin>> m;
    
    vector<long> v (10000); 
    
    for(i=0;i<n;i++)
    v[i] = i;
	
	
    
    int a,b,k;
    while (m--){
        cin >> a >> b >> k;
       // v[a-1] += k;
      //  v[b] -= k;
        for(i=a;i<=b;i++)
        v[i]+=k;
    }
    int l;
    long long sum = 0;
    long long max = 0;
    for (int i=0; i<n; i++) {
     //   sum += v[i];
        if (max < v[i])
            {
			max = v[i];
			l=i;
        }
    }
  
   cout << max;
    
    return 0;
}
