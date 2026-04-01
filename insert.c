int searchInsert(int* nums, int numsSize, int target) {
    int b;
    if(target==0){
        b=0;
      
        }
        else{
    for(int i=0;i<numsSize;i++){
        
        if(nums[i]==target){
            b= i;
            break;
        }
        if(target<nums[i]&&target-nums[i]==1){
            b=i-1;
            break;
        }
        if(target>nums[i]&&target-nums[i]==1){
            b=i+1;
            break;
        }


    }}
    return b;
}