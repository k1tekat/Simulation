#include "lib.h"

Object::Object (int p_x, int p_y) {
    x = p_x;
    y = p_y;
    path_x.push_back(p_x);
    path_y.push_back(p_y);
}

void Object::path_print () {
    cout << "\n Proideniy put";
    for (int i = 0; i < path_x.size(); i++)
        cout << "(" << path_x[i] << "," << path_y[i] << ")  "; 
}


void Object::random_walk () {
    int coord_x = rand() % 1000 - 500;
    int coord_y = rand() % 1000 - 500;
    int walked_x = fabs (x) + fabs (coord_x);
    int walked_y = fabs (y) + fabs (coord_y);
    x = coord_x;
    y = coord_y;
    way = way + walked_x + walked_y;
    path_x.push_back(x);
    path_y.push_back(y);
}

void Object::current_pos_check () {
    cout << "\nPosition now : (" << x << ", " << y << ")" << endl
    << "lenght way: " << way << endl;
}

int Object::distance_check (int obj_x, int obj_y) {
    float dist; int diff_x, diff_y;
    if (obj_x == x || obj_y == y) 
        dist = fabs (x - obj_x) + fabs (y - obj_y);
    else {
        diff_x = fabs (x - obj_x);
        diff_y = fabs (y - obj_y);
        dist = sqrt (pow(diff_x, 2) + pow(diff_y, 2));
    }
    cout << "\nDistance obj - point: " << dist << endl;
    return dist;
}