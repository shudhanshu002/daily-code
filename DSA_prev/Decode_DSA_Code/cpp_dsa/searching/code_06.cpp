
int search(int nums[],int n,int target)
{
    int lo=0;
    int hi=n-1;
    //finding pivot element
    int pivot=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(nums[mid]<nums[mid+1] && nums[mid]<num[mid-1]){
            pivot=mid;
            break;
        }
        else if(nums[mid]>nums[mid+1] && numms[mid]>nums[mid-1] ){
            pivot=mid+1;
            break;
        }
        else if(nums[mid]>nums[hi]) lo=mid+1;
        else hi=mid-1;
    }
    if(target>=nums[0]&& target<=nums[pivot-1]){
        lo=0;
        hi=pivot-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
        }
    }
}
