#include<iostream>
#include<string>

using namespace std;

template<class T>
class Arithmetic
{
    private:
        T a{};
        T b{};
    
    public:

        Arithmetic(T a, T b);

        T add()
        {
            return a+b;
        }

        T substract()
        {
            return a-b;
        }

        T divide()
        {
            return a/b;
        }

        ~Arithmetic()
        {
            cout<<"Constructor Destroyed";

        }

};

template<class T>

Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a=a;
    this->b=b;
}



int main()

{
    Arithmetic<int> r(100,50);

    Arithmetic<float> r1(15.5,5.5);

    cout<<r.add()<<endl;
    cout<<r.substract()<<endl;
    cout<<r.divide()<<endl;

    cout<<r1.add()<<endl;
    cout<<r1.substract()<<endl;
    cout<<r1.divide()<<endl;
    
    return 0;
}