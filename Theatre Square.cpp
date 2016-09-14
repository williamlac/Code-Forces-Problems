#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n, m, a;
    cin>>n >> m >> a;
    long long int tot = ( (long long) ceil( n/a) ) * ( (long long) ceil(m/a) );
    cout<< tot <<endl;
}
