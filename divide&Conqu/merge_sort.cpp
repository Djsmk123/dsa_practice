#include<bits/stdc++.h>
using namespace std; 

//helper method
void merge(vector<int> &array,int s,int e){
	int i = s;
	int m = (s+e)/2;
	int j = m + 1;

	vector<int> temp;


	while(i<=m and j<=e){
		if(array[i] < array[j]){
			temp.push_back(array[i]);
			i++;
		}
		else{
			temp.push_back(array[j]);
			j++;
		}
	}

	//copy rem elements from first array
	while(i<=m){
		temp.push_back(array[i++]);
	}

	// or copy rem elements from second array
	while(j<=e){
		temp.push_back(array[j++]);
	}

	//copy back the eleemtns from temp to original array
	int k = 0 ;
	for(int idx = s; idx <=e ;idx++){
		array[idx] = temp[k++];
	}
	return;
}

//sorting method
void mergesort(vector<int> &arr,int s,int e){
	//base case
	if(s>=e){
		return;
	}
	//rec case
	int mid = (s+e)/2;
	mergesort(arr,s,mid);
	mergesort(arr,mid+1,e);
	return merge(arr,s,e);
}
int main(){
    vector<int> array={1,23,4,34,22,23,1231,4,12,3,123,25};
    mergesort(array,0,array.size()-1);
    for(auto x: array)
    cout<<x<<"  ";

    return 0;
}