#include<iostream>
#include<algorithm>
using namespace std;

class ptr{
    
   public:
   int size1;
   int size2;
   int *arr1;
   int *arr2;
   int size3;
   int *marge;
   int k=0,j=0;

   void insert_data(){
      cout<<"enter 1 array size: ";
      cin>>size1;
      arr1 = new int[size1];

      cout<<"enter 2 array size: ";
      cin>>size2;
      arr2 = new int[size2];

      cout<<"array 1 elements: \n";
      for(int i=0;i<size1;i++){
         cout<<i+1<<".element is ";
         cin>>arr1[i];
      }

      cout<<"array 2 elements: \n";
      for(int j=0;j<size2;j++){
        cout<<j+1<<".element is ";
        cin>>arr2[j];
      }
   }

      void sort_array(){
        sort(arr1,arr1 + size1);
        sort(arr2,arr2 + size2);
      }

      void merge_data(){
        size3 = size1 + size2;
         marge = new int[size3];

        for(int i=0;i<size3;i++){
            if(k<size1 && (j >= size2 || arr1[k]<arr2[j]))
            marge[i]=arr1[k++];

            else
            marge[i]=arr2[j++];
        
       }
      }

      void display_data(){
       cout<<"\narray 1 elements: \n";
        for(int i=0;i<size1;i++){
         cout<<i+1<<".element is "<<arr1[i]<<"  \n";
        }

       cout<<"\narray 2 elements: \n";
        for(int j=0;j<size2;j++){
        cout<<j+1<<".element is "<<arr2[j]<<"  \n";
        }

        cout<<"\nmerge array element: \n";
        for(int j=0;j<size3;j++){
            cout<<j+1<<".element is "<<marge[j]<<"  \n";
         }
      }
      void delete_data(){
      delete[] arr1;
      delete[] arr2;
      delete[] marge;
      }
};

int main(){
    ptr* p=new ptr;

    p -> insert_data();
    p -> sort_array();
    p -> merge_data();
    p -> display_data();
    p -> delete_data();

    delete p;
    return 0;
}