#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
    int tam, vet[100010], a, b=-1, c=-1, nVal, aa, cc, bb;
    long long tot=0, media;
    bool possib=true, twoValues=true;

    cin>>tam;
    for (int i = 0; i < tam; i++) {
        cin>>vet[i];
        if (i == 0){ a=vet[i]; nVal = 1;}
        else if (b==-1 && vet[i]!=a){ b=vet[i]; nVal = 2;}
        else if (c==-1 && vet[i]!=a && vet[i] != b){ c=vet[i]; nVal = 3;}
        else if (vet[i]!=c && vet[i]!=a && vet[i] != b){ possib = false;}
    }
    aa=(min(a, min(b,c)));
    cc=(max(a,max(b,c)));
    bb=a+b+c-aa-cc;
    if(possib == true){
        switch (nVal){
            case 1:
                cout<<"YES"<<endl;
                break;
            case 2:
                cout<<"YES"<<endl;
                break;
            case 3:
                if(bb-aa == cc-bb){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
                break;
        }
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
