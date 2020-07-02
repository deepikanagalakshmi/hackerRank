//This logic is also applicable to find count of each element in array, count of duplicate element, count of unique element, Display unique element, Display duplicate element
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ar[n];
    int ans=0;

    int len=sizeof(ar)/sizeof(ar[0]);
    int freq[len];

     //storing n-1 elements in array
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    
    //comparing the first element of array with rest of array element and incrementing   count. Setting -1 to avoid repetition of counting same element

    for(int i=0;i<n;i++){
      int no=ar[i];
      int count=1;
      
      for(int j=i+1;j<n;j++){
        if(no==ar[j]){
         count++;
         freq[j]=-1;
         }
    }
    
         if(freq[i]!=-1){
           freq[i]=count;
         }
   }
   
 //Displaying the total no of pair
  
  for(int i=0;i<n;i++){
        if(freq[i]!=-1 && freq[i]/2 >=1 ){
         //cout<<ar[i]<<"---> " <<freq[i]<<endl;
         ans=ans+(freq[i]/2);
         }
   }
      cout<<ans;
}
