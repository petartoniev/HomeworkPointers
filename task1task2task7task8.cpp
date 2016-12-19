#include <iostream>

using namespace std;

const int SIZE = 50;


void initArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

void swap(int* var1,int* var2)
{
    int* save = var1;
    *var1=*var2;
    *var2=*save;

}


void reverse(int* array,int size)
{
for(int i=0;i<=size/2;i++)
    {
        swap(array[i],array[size-i-1]);
    }
}

int remove(int array[], int size, int n)
{
     int flag=0,i=0;
     do
     {
         if(array[i]==n) {
                flag=1;
                int c=i;
                size--;
            do
        {
                array[c]=array[c+1];
                c++;
        }
            while(c!=size-1);
         }
         i++;
     }
     while(i!=size-1);
     if(flag==0) return false;
     if(flag==1) return true;
}

int searchNumber(int array[],int size,int n){
    int* p;
    int flag=0;
    for(int i=0;i<size;i++){
        if(array[i]==n){
            flag=1;
            p=&i;
            break;
        }
    }
    if(flag==0) {return NULL;}
    if(flag==1) {return *p;}
}

void coutArray(int array[], int size)
{
        for (int i = 0; i < size; i++)
    {
            cout << array[i]<<endl;
    }
}

int main()
{
    int array[SIZE], size,n,a=2,b=3;
    char arr[SIZE];
    cout<<"Zadacha 1:"<<endl;
    swap(a,b);
    cout<<a<<"  "<<b<<endl;
    cout<<"Zadacha 2:"<<endl;
    cout << "Enter the size of the array : ";
    cin >> size;
    initArray(array, size);
    reverse(array, size);
    coutArray(array,size);

    cout<<"Zadacha 7: "<<endl;
    initArray(array, size);
    cout<<"Insert value of n: ";
    cin>>n;
    cout<<remove(array,size,n)<<endl;
    cout<<"Zadacha 8: "<<endl;
    initArray(array, size);
    cout<<"Insert value of n: ";
    cin>>n;
    cout<<searchNumber(array,size,n);

    return 0;
}
