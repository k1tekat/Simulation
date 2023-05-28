#include "lib.h"

int main () 
{
    setlocale(LC_ALL, "Russian");

    Object* dot1 = new Object (1, 2);

    dot1->random_walk();
    dot1->random_walk();
    dot1->path_print();
    dot1->current_pos_check();

    int x, y;

    x = dot1->x; y = dot1->y;
    
    dot1->distance_check(x, y);
}