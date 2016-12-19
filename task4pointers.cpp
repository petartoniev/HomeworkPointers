#include <iostream>

using namespace std;

const int size=40;

void input(int* array, int size, int size1 )
{
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size1; j++)
            cin>>array[i*size1+j];
    }
}

void print(int* array, int size, int size1 )
{
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size1; j++)
        {
            cout<<array[i*size1+j]<<" ";
        }
        cout<<endl;
    }
}


void transp(int* array, int  size, int size1, int* array1)
{
    for(int i=0; i<size; i++)
        for(int j=0; j<size1; j++)
        {
            array1[i*size1+j]=array[j*size1+i];
            array1[j*size1+i]=array[i*size1+j];
        }
}


int main()
{
    int a[size][size],n,m;
    cout<<"Input both sizes: ";
    cin>>n>>m;

    input(a[m],n,m);

    int b[size][size],n1,m1;

    transp(a[m],n,m,b[n]);

    print(b[m],m,n);

    return 0;
}
