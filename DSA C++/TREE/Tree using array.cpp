/*we have to put a comlete binary tree in this code */
#include <bits/stdc++.h>
#include <vector>
using namespace std;
// create a tree 

     void create(int a[],int n,int i)
    {
        int data ;
        cout<<"Enter -1 for no Nodes"<<endl ;
        cin>>data ;
        if( data == -1 ) return ;
        a[i]= data ;
        cout<<"Enter the left of "<<data<<endl ;
        create(a,n,2*i+1) ;
        
        cout<<"Enter the right of "<<data<<endl ;
        create(a,n,2*i+2) ;
        
        
    }
// inorder left-root-right 
void inorder(int a[],int i,int MaxIdx )
{
    if(i>MaxIdx) return ;
    
    inorder(a,2*i+1,MaxIdx) ;
    cout<<a[i]<<" ";
    inorder(a,2*i+2,MaxIdx) ;
}
// preorder root-left-right 
void preorder(int a[],int i , int MaxIdx)
{
    if(i>MaxIdx) return ;
    cout<<a[i]<<" ";
    preorder(a,2*i+1,MaxIdx) ;
    preorder(a,2*i+2 , MaxIdx) ;
}
// postorder left-right-root 
void postorder(int a[],int i , int MaxIdx)
{
    if(i>MaxIdx) return ;
    
    postorder(a,2*i+1,MaxIdx) ;
    
    postorder(a,2*i+2 , MaxIdx) ;
    cout<<a[i]<<" ";
}
int main()
{
    
    int n ;
    // creat tree 
    cout<<" Enter the total number: " ;
    cin>>n;
    int a[n]={0} ;
    create(a,n,0) ;
    // traversal 
    n= sizeof(a)/sizeof(a[0]) ;
    int height = log(n)/log(2) ;
    int MaxIdx = pow(2,height) ;
    // inorder: 1,2,3 ;
        
       cout<<"Inorder : " ; inorder(a,0,MaxIdx) ;  cout<<endl ;
       
    // preorder : 2 ,1,3 ;
    
     cout<<"Preorder : " ;   preorder(a,0,MaxIdx) ; cout<<endl ;
    // postorder : 1,3,2 ;
   
     cout<<"Postorder "; postorder(a,0,MaxIdx) ;
}
