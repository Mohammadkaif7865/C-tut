#include <iostream>
using namespace std;
float round(float var)
{

    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}

int main()
{
    // your code goes here
    float k1, k2, k3, f, speed, time;
    cin >> k1 >> k2 >> k3 >> speed;
    f = k1 * k2 * k3;
    speed = speed * f;
    time = 100 / speed;
    time = round(time);
    if (time >= 9.58)
    {
        cout << "no";
    }
    if (time < 9.58)
    {
        cout << "yes";
    }
    return 0;
}
