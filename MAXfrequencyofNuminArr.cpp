#include<iostream>
#include<unordered_map>
using namespace std;

int freq(int arr[],int size){
    unordered_map<int, int> freqMap;
    
       for (int i = 0; i < size; i++) {
        freqMap[arr[i]]++;
    }

    int maxValue = 0;
    int maxKey = -1;
    for(const auto& pair: freqMap){
        if(pair.second > maxValue){
            maxValue = pair.second;
            maxKey = pair.first;
        }
    }
    return maxKey;
}

int main(){
    int arr[] = {1,2,3,4,5,1,2,2,3,3,3,1,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<freq(arr,size);

    return 0;
}
