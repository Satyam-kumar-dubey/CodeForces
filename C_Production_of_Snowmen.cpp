#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    while(n--)
    {
        int a;
        cin>>a;

        vector<int> A(a), B(a), C(a);

        for(int i=0; i<a; i++)
        cin>>A[i];
        for(int i=0; i<a; i++)
        cin>>B[i];
        for(int i=0; i<a; i++)
        cin>>C[i];

        int temp1 = 0;
        int temp2 = 0;

        for(int i=0; i<a; i++)
        {
            bool check = false;
            for(int j=0; j<a; j++)
            {
                if(A[j] >= B[(i+j)%a])
                {
                    check = true;
                    break;
                }
            }
            if(!check)
            temp1++;
        }
        for(int i=0; i<a; i++)
        {
            bool check = false;
            for(int j=0; j<a; j++)
            {
                if(B[j] >= C[(i+j)%a])
                {
                    check = true;
                    break;
                }
            }
            if(!check)
            temp2++;
        }
        long long ans = 1LL * a * temp1 *temp2;
        cout<<ans<<endl;
        
    }
}