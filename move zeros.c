void moveZeroes(int* nums, int numsSize) {
    for(int i=0;i<numsSize;i++){
        if(nums[i]==0){
            for(int k=i;k<numsSize;k++){
                if(nums[k]!=0){
                    int temp=nums[i];
                    nums[i]=nums[k];
                    nums[k]=temp;
                    break;
                }
            }
        }
    }
    
}