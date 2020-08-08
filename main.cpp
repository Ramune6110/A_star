#include<queue>
#include<vector>

#include"A_star.h"

using namespace std;

int main()
{
    A_star AS;

    // obstacle range
    for(int i = 0; i < 60; i++){
        AS.ox.push_back(i);
        AS.oy.push_back(60.0);
    }
    for(int i = 0; i < 60; i++){
        AS.ox.push_back(60.0);
        AS.oy.push_back(i);
    }
    for(int i = 0; i < 61; i++){
        AS.ox.push_back(i);
        AS.oy.push_back(60.0);
    }
    for(int i = 0; i < 61; i++){
        AS.ox.push_back(0.0);
        AS.oy.push_back(i);
    }
    for(int i = 0; i < 40; i++){
        AS.ox.push_back(20.0);
        AS.oy.push_back(i);
    }
    for(int i = 0; i < 40; i++){
        AS.ox.push_back(40.0);
        AS.oy.push_back(60.0 - i);
    }

    AS.a_star_method(AS.ox, AS.oy);

    return 0;
}