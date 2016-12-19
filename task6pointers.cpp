#include <iostream>
using namespace std;

const int size=50;

void input(double* array,int size)
{
    for(int i=0; i<size; i++)
        cin>>array[i];
}

double average(double* array,int size)
{
    double averageArray[size];
    for(int i=0; i<size; i++)
    {
        if(i==0) averageArray[i]=array[i+1];
        if(i==size-1) averageArray[i]=array[i-1];
        if(i!=0&&i!=size-1) averageArray[i]=(array[i-1]+array[i+1])/2;
    }

    int flag=0,save;
    for(int j=size-1; j>=0; j--)
    {
        if(array[j]==averageArray[j])
        {
            flag=1;
            save=j;
            break;
        }
    }
    if(flag==1) return save;
    if(flag==0) return -1;

}


int main()
{
    double a[size],n;
    cout<<"Input size of the array: ";
    cin>>n;
    input(a,n);

    cout<<average(a,n)<<endl;

    return 0;
}
