/*
    ੴ ਸਤਿ ਨਾਮੁ ਕਰਤਾ ਪੁਰਖੁ ਨਿਰਭਉ ਨਿਰਵੈਰੁ ਅਕਾਲ ਮੂਰਤਿ ਅਜੂਨੀ ਸੈਭੰ ਗੁਰ ਪ੍ਰਸਾਦਿ
*/
#include <iostream>
#include<bits/stdc++.h>
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
using namespace std;
using ll=long long;
using lld = long double;
#define mod 10000000007
#define INF 1e18
#define pi 3.141592653589793238462
#define pb push_back
#define ppb pop_back
#define mp make_pair

struct Customer {
    int money;
    int id;
    
    bool operator<(const Customer& other) const {
        if (money == other.money) {
            return id > other.id;
        }
        return money < other.money;
    }
};

void solve(){
    int q; cin>>q;
    queue<int> arrivingQueue;
    priority_queue<Customer> maxHeap;
    unordered_set<int> ans;
    int custID = 1;
    while(q--){
        int type;
        cin>>type;
        if(type==1){
            int m; cin>>m;
            arrivingQueue.push(custID);
            maxHeap.push({m , custID});
            custID++;
        }else if(type==2){
            while(!arrivingQueue.empty()){
                int firstCust = arrivingQueue.front();
                arrivingQueue.pop();
                if(ans.find(firstCust)==ans.end()){
                    ans.insert(firstCust);
                    cout << firstCust << " ";
                    break;
                }
            }
        }else if(type==3){
            while (!maxHeap.empty())
            {
                Customer cust = maxHeap.top();
                maxHeap.pop();
                if(ans.find(cust.id)==ans.end()){
                    ans.insert(cust.id);
                    cout << cust.id << " ";
                    break;
                }
            }
            
        }
        // for(int i : ans) cout<<i<<" ";
    }
}

int32_t main()
{
    FAST_IO;
    int tc=1;
    // cin>>tc;
    while(tc--)
    {
    solve();
    }
    return 0;
}