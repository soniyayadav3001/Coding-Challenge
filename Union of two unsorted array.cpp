#include<iostream>

using namespace std;

int main()
{
    int a1[20],a2[20],u[40],i,j,k,n,m,flag;

    cout<<"********Enter size of first array******** ";
    cin>>n;
    cout<<"\nEnter elements to the array :: \n";

    for(i=0;i<n;++i)
    {
        cout<<"\nEnter "<<i+1<<" element :: ";
        cin>>a1[i];
    }

    cout<<"\n********Enter size of second array******** ";
    cin>>m;
    cout<<"\nEnter elements to the array :: \n";

    for(i=0;i<m;++i)
    {
        cout<<"\nEnter "<<i+1<<" element :: ";
        cin>>a2[i];
    }

        k=0;
    for(i=0;i<n;++i){
        u[k]=a1[i];
        k++;
    }

    for(i=0;i<m;++i){
        flag=1;
        for(j=0;j<n;++j){
            if(a2[i]==a1[j]){
                flag=0;
                break;
            }
        }

        if(flag){
            u[k]=a2[i];
            k++;
        }
    }

    cout<<"\nUnion of two arrays is :: \n\n";
    for(i=0;i<k;++i)
    {
        cout<<u[i]<<"  ";
    }

    cout<<"\n";

    return 0;
}
