#include<stdio.h>
main()
{
    int n,i,l,h,mid,key,found=0;
    printf("enter the number of books to be added:");
    scanf("%d",&n);
    int a[n];
    printf("enter the book id's of %d books",n);
    for(i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
    l=0;
    h=n-1;
    mid=(l+h)/2;
    printf("enter a book id");
    scanf("%d",&key);
    while(l<=h){
        if(key==a[mid]){
            found=1;
            break;
        }
        else if(key<a[mid])
            l=mid+1;
        else
            h=mid-1;
    }
    if(found=1){
        printf("the book is present in the library");
    }
    else
        printf("the book isn't present in the library");
}
