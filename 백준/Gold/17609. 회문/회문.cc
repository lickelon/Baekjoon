#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

void solve(char arr[100001],int left,int right,int *ans){
    while(left <= right){
        if(arr[left] != arr[right]){
            
            *ans = 2;
           
            break;
        }
        left++;
        right--;
    }
}


int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    while (n--){
        
        char arr[100001];
        cin >> arr;
        
        int ans = 0;
        int left = 0;
        int right  = strlen(arr)-1;
        
        while(left <= right){
            if(arr[left] != arr[right]){
                
             
                    ans++;
                    if(ans ==2 ){
                        break;
                    }
                
                    solve(arr, left+1, right, &ans);
                  
                    if(ans == 1){
                        break;
                    }
                    if(ans == 2){
                        ans=1;
                        
                        solve(arr, left, right-1, &ans);
                        
                    }
                    break;
                    
                    
                
            
            }
            left++;
            right--;
            
        }
        
        cout<<ans<<"\n";
        
    }
}