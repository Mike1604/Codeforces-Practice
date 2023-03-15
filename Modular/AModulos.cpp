    #include <iostream>
    using namespace std;
     
    int main()
    {
        long long int sum=0, mult=1,a=0;
        for(int i; i<5; i++){
            cin>>a;
            a=a%100000009;
            sum=sum+a;
            sum=sum%100000009;
            mult=mult*a;
            mult=mult%100000009;       
        }
        
        cout<<sum<<" "<<mult<<endl;
        return 0;
    }