#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    long long int l1, r1, l2, r2, k, tot;
    cin >> l1 >> r1 >> l2 >> r2 >> k;
    //scanf("%lld %lld %lld %lld %lld", &l1, &r1, &l2, &r2, &k);

    if(r1<l2 || r2<l1){
        cout <<"0"<<endl;
    }
    else{
        if(l1==r2){
            if(k==l1){
                cout<<"0"<<endl;
            }
            else
                cout<<"1"<<endl;
        }
        else if(l2==r1){
            if(k==l2){
                cout<<"0"<<endl;
            }
            else
                cout<<"1"<<endl;
        }
        else if(l1==r1){
            if(k==l1){
                cout<<"0"<<endl;
            }
            else{
                if(l2<=l1 && r2>=r1){
                    cout << 1 << endl;
                }
            }
        }
        else if(l2==r2){
            if(k==l2){
                cout<<"0"<<endl;
            }
            else{
                if(l2>=l1 && r2<=r1){
                    cout << 1 << endl;
                }
            }
        }
        else{
            if (l1<=l2) {
                if (r1<=r2) {
                    if (k>=l2 && k<=r1) {
                        cout<< r1-l2 <<endl;
                    }
                    else{
                        cout<< r1-l2+1 <<endl;
                    }
                }
                else{
                    if (k>=l2 && k<=r2) {
                        cout<< r2-l2 <<endl;
                    }
                    else{
                        cout<< r2-l2+1 <<endl;
                    }
                }
            }
            else{
                if (r1<=r2) {
                    if (k>=l1 && k<=r1) {
                        cout<< r1-l1 <<endl;
                    }
                    else{
                        cout<< r1-l1+1 <<endl;
                    }
                }
                else{
                    if (k>=l1 && k<=r2) {
                        cout<< r2-l1 <<endl;
                    }
                    else{
                        cout<< r2-l1+1 <<endl;
                    }
                }
            }
        }
    }
    return 0;
}
