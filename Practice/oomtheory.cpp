#include <iostream>
using namespace std;
class room
{
private:
    int length, breadth, height;

public:
    void set()
    {
        length = 0, breadth = 0, height = 0;
    }
    void set(int l, int b, int h)
    {
        length = l, breadth = b, height = h;
    }
    void display()
    {
        cout << "The length of the room is " << length << endl;
        cout << "The breadth of the room is " << breadth << endl;
        cout << "The height of the room is " << height << endl;
    }
};

int main()
{
    room room1, room2;
    room1.set();
    room2.set(10, 30, 50);
    room1.display();
    room2.display();
    return 0;
}