#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
    Point p1, p2, p3;

    p1.setName("P1");

    p1.setXY(10, 20);

    p2.setXY(10, 30);

    p1.show();
    p2.show();
    p3.show();
}// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.