#include <iomanip>

inline void display(int a[], int n){
  int i;
  for(i=0;i<n;i++){
    cout<<setw(5)<<a[i];
  }
  cout<<endl;

}
inline void swap(int &a,int &b){
 int temp;
  temp=a;
  a=b;
  b=temp;
  
}

// selection sort function module in C 
void selectionSort(int data[], int length) { 
	int i, j, m, mi; 
  for(j=0; j<length-1;j++){
 //you can remove this one m=
//m=data[j]; //m is the smallest number
  mi=j;
    //
	for (i = j+1; i < length ; i++) 
	{ 
	   /* find the minimum */ 
    
      if(data[mi]>data[i])
      {
        //m=data[i];
        mi=i;
      }
    swap(data[j],data[mi]);
    display(data,length);
  }
  }
        
  }
  
	  
     
     
	
 



void insertion(int a[],int n){
 int i,j;
  for(i=1;i<n;i++){
    int value=a[i],j;
    for(j=i-1;j>=0;j--){
          if(a[j]>value) a[j+1]=a[j];
      else break;
      display(a,n);
      
    }
    a[j+1]=value;
    display(a,n);
  }
  //int new_number= 2; //decendingly
  //int temp;
 

}


void bubbleSort(int *a,int n){

int i,j;
int sorted;
  for (j=0;j<n-1;j++)
  {sorted=0;
    for(i=0;i<n-1;i++)
    {
      if(a[i]>a[i+1]) 
      swap(a[i],a[i+1]);
      sorted=1;
    }
    display(a,n);
  
  if (sorted==0) break;
  }
}