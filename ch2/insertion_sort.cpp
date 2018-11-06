#include<bits/stdc++.h>
using namespace std;

vector<int> insertion_sort(vector<int> a){
    int key,i,j;
    for(i = 1;i<a.size();i++){
        key = a[i];
        j = i-1;
        while(j >= 0 && a[j] > key){
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = key;
    }
    return a;
}

int main(){
    vector<int> arr = {5,7,32,1,6};
    arr = insertion_sort(arr);
    for(auto v : arr) cout<<v<<" ";
    return 0;
}