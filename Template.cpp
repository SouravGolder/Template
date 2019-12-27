#include <iostream>

using namespace std;

template<class T>T add(T &a, T &b)
{
    T r=a+b;
    return r;
}

template<class X, class Y>float fun(X a, Y b)
{
    //cout<<a<<" "<<b<<endl;
    return a+b;
}

template<class X>float fun(X a)
{
    return a*a;
}

template <class P>
class A{
public:
    P add(P x, P y);
    /*{
        return x+y;
    }*/
};
template <class P>
P A<P>::add(P x, P y)
    {
        return x+y;
    }


template <class P,class Q>
class B{
    P x;
    Q y;
public:
    B(P a, Q b){
    x=a;
    y=b;
    }
    float add();/*
    {
        return x+y;
    }*/
};
template<class P, class Q>
float B<P,Q>::add()
    {
        return x+y;
    }


template<class P, int size>
class C{

public:
    P ar[size];
    void insert();
    void display();
};

template<class P,int size>
void C<P,size>::insert(){
for(int i=0;i<size;i++)ar[i]=i+1;
}
template<class P,int size>
void C<P,size>::display(){
for(int i=0;i<size;i++)cout<<ar[i]<<" ";
cout<<endl;
}
int main()
{
    int i=2,j=5;
    float m=3.5,n=9;
    cout<<"Int = "<<add(i,j)<<endl;
    cout<<"float = "<<add(m,n)<<endl;
    cout<<"fun = "<<fun(m,n)<<endl;
    cout<<"Function Overloading => fun "<<fun(m)<<endl;
    A<float>tuf;
    cout<<"Template class "<<tuf.add(m,n)<<endl;
    B<float,float>fut(n,m);
    cout<<"Multiple Parameter template "<<fut.add()<<endl;
    cout<<"Template array ";
    C<float,5>vex;
    vex.insert();
    vex.display();
    return 0;
}
