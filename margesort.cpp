#include<iostream>
using namespace std;
void marge(int a[],int f , int mid ,int l)
    {
        int i = f ; int j = mid+1 ; int tmp[l+1]; int k = f ;

        while(i<=mid and j<=l)
        {
            if (a[i]<a[j])
            {

                tmp[k]=a[i];
                i++;
            }
            else
            {

                tmp[k]=a[j];
                j++;
            }
            k++;

        }
        while(i<=mid)
        {

            tmp[k]=a[i];
            i++;
            k++;

        }
        while(j<=l)
        {

            tmp[k]=a[j];
            j++;
            k++;

        }

        for(int x = f ; x<=l ; x++)
        {

            a[x]=tmp[x];
        }

    }
void margesort(int a[],int f , int l)
{
    if (f<l){
    int m = ((f+l)/2);
    margesort(a,f,m);
    margesort(a,m+1,l);

    marge(a,f,m,l);
    }
}

int main()



{
    int n ; cin>>n ;
int a[n];/*={10 , 2 , 40 ,20 ,5};
int n = (sizeof a)/(sizeof a[0]);*/
for (int i = 0 ;i< n; i++)
{

    cin>>a[i];
}

margesort(a , 0 , n-1);

for (int i = 0 ;i< n; i++)
{

    cout<<a[i]<<" ";
}







}
