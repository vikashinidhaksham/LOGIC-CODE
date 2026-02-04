int missingNumber(int* nums, int numsSize) {
     int i,j;
   for(i=0;i<numsSize;i++){
    for(j=i+1;j<numsSize;j++){
        if(nums[i]>nums[j]){
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
    }
   }
    int p=0;
   int k;
   for(i=0;i<numsSize;i++){
    if(nums[i]==p){
        p=p+1;
    }else{
       k=p;
       break;
   }
   }
   return k;
    
    
}