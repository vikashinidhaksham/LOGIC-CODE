bool isPalindrome(int x) {
  long int y=x;
  long int s=0;
  long int b;
  while(y!=0){
    b=y%10;
    y=y/10;
    s=s*10+b;
}
printf("%d",s);
if(s==x&&x>=0)
    return true;
else
   return false;
}