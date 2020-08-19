binary_search(int a[],int l,int r,int k)
{
    if(l<r)
    {
        mid=l+(r-1)/2;
         if(a[mid]==k) return mid;
         if(a[mid]>k) 
             return binary_search(a,l,mid-1,k);
        if(a[mid]<k)  
            return binary_search(a,mid+1,r,k);
    }
    return -1
}