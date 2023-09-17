#include <iostream>
#include<algorithm>
using namespace std;

long long binarySearch(vector<long long> arr, long long size, long long N){
    long long start = 0;
    long long end = size;
    long long mid = 0;
    long long max_height = 0;
    while(start <= end){
        mid = start + (end - start)/2;
        if(arr[mid] == N){
            return mid;
        }
        
        else if(arr[mid]>N){
            end = mid-1;
            max_height = mid-1;
        }
        
        else{
            start = mid+1;
            max_height = mid;
        }
    }
    
    return max_height;
}


int main() {
	int t;
	cin>>t;
	while(t--){
	    long long N;
	    cin>>N;
	    vector<long long> arr;
	    int size = 0;
	    int sum = 0;
	    for(int i=0; i<=N; i++){
	        sum += i;
	        arr.push_back(sum);
	        if(arr[i] >= N){
	            size = i;
	            break;
	        }
	    }
	    long long max_height = binarySearch(arr, size, N);
	    cout<<max_height<<endl;
	}
	return 0;
}
