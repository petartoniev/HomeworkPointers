#include <iostream>
using namespace std;

void input(int* array,int size)
{
    for(int i=0; i<size; i++)
        cin>>array[i];
}

void sortingArrays(int* array,int size)
{
    for(int i=0; i<size-1; i++)
    {
        for(int j=i; j<size; j++)
        {
            if(array[j]<array[i])
            {
                int save=array[i];
                array[i]=array[j];
                array[j]=save;
            }
        }

    }
}

void  thirdArray(int* array,int size,int* array1,int size1,int* array2,int* size2)
{
    int i=0,j=0,f=0;

    do
    {
        if(array[i]<array1[j])
        {
            array2[f]=array[i];
            f++;
            if(i!=size) i++;
        }


        else    if(array[i]>array1[j])
        {
            array2[f]=array1[j];
            f++;
            if(j!=size1) j++;
        }


        else if(array[i]==array1[j])
        {
            array2[f]=array[i];
            f++;
            if(i!=size) i++;
            if(j!=size) j++;
        }


    }
    while(i!=size||j!=size1);

    *size2=f;
    cout<<f<<endl;

}




void print(int* array,int size)
{
    for(int i=0; i<size; i++)
        cout<<array[i]<<" ";
}



int main()
{
    int a[50],n,b[50],m,c[50],k=0;
    cout<<"Input size of the first array: ";
    cin>>n;
    input(a,n);
    sortingArrays(a,n);
    cout<<"Input size of the second array: ";
    cin>>m;
    input(b,m);
    sortingArrays(b,m);

    thirdArray(a,n,b,m,c,&k);

    print(c,k);

    return 0;
}

