//function to find duplicate in array

vector<int> duplicates(int arr[], int n) {
    // code here
    vector<int> result;
    sort(arr,arr+n);
    int check=-1;
    for(int i=1;i<n;i++){
        if(arr[i-1]==arr[i]&&arr[i]!=check){
            result.push_back(arr[i]);
            check=arr[i];
        }
    }
    if(result.size()==0) cout<<"-1";
    return result;
}