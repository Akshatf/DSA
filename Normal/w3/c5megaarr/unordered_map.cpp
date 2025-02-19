#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<int,int>desk_map; // roll_no, desk_number

    //insertion
    desk_map[1]=53; //desk_map ki 1st key par, 53 desk no assigned hai
    desk_map[2]=54;
    desk_map[3]=55;

    // IT IS NOT NEW KEY , IT IS ALREADY ASSNIED , HERE KEY IS REASSIGNED 
    desk_map[2]=57;

    for()
}