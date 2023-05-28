#include "menu.h"

void interface () {
    cout << "Menu: " << endl
        << "1. Random walk." << endl
        << "2. Position now." << endl
        << "3. Lenght way." << endl
        << "4. Output menu." << endl
        << "5. Exit." << endl;
}

int show_menu() 
{
    int ch=9, obj_x, obj_y, menu_ch;

    Object* dot1 = new Object (0, 0);
    UserEquipment* bag = new UserEquipment(0, 0);

    cout << "Create obj:" << endl<< "1. Object." << endl << "2. UserEquipment." << endl;
    cin >> menu_ch;
    cout << "Enter x&y: " << endl;
    cin >> obj_x >> obj_y;
    switch (menu_ch)
    {
        case 1:
            {
                
                dot1->step_on(obj_x, obj_y);
                break;
            }
        case 2:
            {
                
                bag->step_on(obj_x, obj_y);
                break;
            }
        default:
            {
                break;
            }
    }


    

    while (ch!=0)
    {
        interface();

        cin>>ch;

        switch (ch) 
        {
        case 1:
        {
            switch (menu_ch) {
            case 1:
            {
                cout << "\nPos before";
                dot1->current_pos_check();
                dot1->random_walk();
                cout << "\nPos after";
                dot1->current_pos_check();
                break;
            }
            case 2:
            {
                cout << "\nPos before";
                bag->current_pos_check();
                bag->random_walk();
                cout << "\nPos after";
                bag->current_pos_check();
                break;
            }
            default:
            {    
                break;
            }
            }
            break;
        }
        case 2:
        {
            cout << "Pos now: " << endl;

            switch (menu_ch) {
            case 1:
            {
                dot1->current_pos_check();
                break;
            }
            case 2:
            {
                bag->current_pos_check();
                break;
            }
            default:
            {    
                break;
            }
            }
            break;
        }
        case 3:
        {
            cout << "Lenght way: " << endl;

            switch (menu_ch)
            {
                case 1:
                    {  
                        dot1->path_print();
                        break;
                    }
                case 2:
                    {
                        bag->path_print();
                        break;
                    }
                default:
                {    
                    break;
                }
            }
            break;
        }
        case 4:
            interface();
            break;
        case 5:
            return 0;
            break;
        default:
            break;
        }
    }
}