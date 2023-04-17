#include <iostream>
#include <queue>
using namespace std;
int main() {
    //max heap
    priority_queue<int> maxi;
    //min heap
    priority_queue<int,vector<int>, greater<int> > mini;
    //add elements
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout<< "size-> "<<maxi.size()<<endl;
    int n = maxi.size();
    for (int i=0; i<n; i++) {
        cout<< maxi.top()<< " ";
        maxi.pop();
    }
    cout<<endl;
    //add elements
    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);
    cout<< "size-> "<<mini.size()<<endl;
    int m = mini.size();
    for (int i=0; i<m; i++) {
        cout<< mini.top()<< " ";
        mini.pop();
    }
    cout<<endl;
    //to check empty
    cout<<"empty or not-> "<< mini.empty()<<endl;
}