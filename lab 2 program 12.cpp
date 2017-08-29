    #include<iostream>
    #include<cmath>
    using namespace std;
    main(){
    float a,b,c,d;
    cout<<"Enter principal,time(in years) and rate(percentage per annum) and number of times interest is compounded";
    cin>>a>>b>>c>>d;
    cout<<"\nYour compound interest is:"<<a*pow(1+c/100*1/d,b*d)-a;
    }
     


