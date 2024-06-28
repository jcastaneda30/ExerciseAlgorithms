#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    freopen("hps.in", "r", stdin);
    freopen("hps.out", "w", stdout);
    int N;
    cin >> N; 
    char jugada;
    vector<int> H(N + 1, 0);
    vector<int> P(N + 1, 0);
    vector<int> S(N + 1, 0);

    for (int i = 0; i < N; i++)
    {
        cin >> jugada;
        if (jugada == 'P')
        {
            H[i + 1] = H[i];
            S[i + 1] = S[i] + 1;
            P[i + 1] = P[i];
        }
        else if (jugada == 'H')
        {
            H[i + 1] = H[i];
            S[i + 1] = S[i];
            P[i + 1] = P[i] + 1;
        }
        else
        {
            H[i + 1] = H[i]+1;
            S[i + 1] = S[i];
            P[i + 1] = P[i];
        }
    }

    int absoluto=-1,ganadasS=0,ganadasH=0,ganadasP=0;

    for(int i=1;i<N+1;i++){
        ganadasS=max(S[i]+H[H.size()-1]-H[i],S[i]+P[P.size()-1]-P[i]);
        ganadasH=max(H[i]+S[S.size()-1]-S[i],H[i]+P[P.size()-1]-P[i]);
        ganadasP=max(P[i]+H[H.size()-1]-H[i],P[i]+S[S.size()-1]-S[i]);
        absoluto=max(ganadasS,max(ganadasH,max(ganadasP,absoluto)));
    }
    cout<<absoluto<<endl;
    return 0;
}