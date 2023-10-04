#include<iostream>
#include<string>

using namespace std;

class Rectangle
{
    private:
        int length{};
        int breadth{};
    
    public:
        Rectangle()
        {
            int length=1;
            int breadth=1;
        }

        Rectangle(int l, int b);

        int area();
        int perimeter();

        int getlength()
        {
            return length;
        }

        void setlength(int l)
        {
            length=l;
        }

        ~Rectangle();
        
};

Rectangle::Rectangle(int l, int b)
{
    length=l;
    breadth=b;
}

int Rectangle::area()
{
    return length*breadth;
}

int Rectangle::perimeter()
{
    return 2*(length+breadth);
}

Rectangle::~Rectangle()
{
    cout<<"Constructor is deleted"<<endl;

}


int main()

{
    Rectangle r(50,40);

    cout<<"Output"<<endl;

    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    
    r.setlength(20);

    cout<<r.getlength()<<endl;
    
    return 0;
}