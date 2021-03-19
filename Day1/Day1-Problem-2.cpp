#include <iostream>
using namespace std;


int aoc1(){
    
    int *arr= new int [200];
    
    for(int i=0;i<200;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    
    for(int i=0;i<200;i++){
        for(int j=0;j<200;j++){
            for(int k=0;k<200;k++){
                if(arr[i]+arr[j]+arr[k]==2020){
                    return arr[i]*arr[j]*arr[k];
                }
            }
        }
    }
    
    
}



int main()
{
  cout<<aoc1();
  
  
  
   
   return 0;
}
