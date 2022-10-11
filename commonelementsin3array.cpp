//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
           int i=0,j=0,k=0;
           set<int>s;
           while(i<n1 && j<n2){
               if(A[i]<B[j]){
                   i++;
               }
               else if(A[i]>B[j]){
                   j++;
               }
               else{
                   s.insert(A[i]);
                   i++;
                   j++;
               }
        }
        
        vector<int>v;
        set<int>s1;
        while(k<n3){
            if(s1.find(C[k])!=s1.end()){
                k++;
                continue;
            }
            
            if(s.find(C[k])!=s.end()){
                v.push_back(C[k]);
                s1.insert(C[k]);
            }
            k++;
        }
     
        if(v.empty()){
            v.push_back(-1);
            return v;
        }
        else{
            return v;
        }
        }//in this first we have took the elemnents of 2 arrays found common elements and stored them in set
//then we took a vector in which we will store the commonn elements of 3 arrays and also took another set  s1 
//so that the duplicate elements of array does not store in vector "v" again we will check if new element is repeatitive or not  in s1.find operation 
};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends