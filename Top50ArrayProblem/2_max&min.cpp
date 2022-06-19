
pair<long long, long long> getMinMax(long long arr[], int n) {
    long long int min=arr[0];
    long long int max=arr[0];
    pair<long long, long long> ans;
    for(long long int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
        if(arr[i]<min) min=arr[i];
    }
    ans.first=min;
    ans.second=max;
    return ans;
}
