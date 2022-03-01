#include <iostream>
#include <thread>
#include <chrono>
#include <vector>


//spaceship
bool command_center_on = false, main_door = false, 
//humans
ground_control = false, family = false,
//small objects in spaceship
radio_found = false, engines = false, music_radio = false, lintern = false, 
//violence
plasma_gun = false, migr_x_gun = false, metich_bomb = false, prnl_grnd= false, molotov = false, 
//consumable
anticold = false,
//main character.
capsule = false , space_suit = true, oxygen = true, health = true , shield = true, batteries = true; 




//:::Add interactable objets:::


int _hP = 5000; //vulnerable
int _xP = 0;
int _ShielDCount_iron = 10000;
float ShielDCount_titanium = 18.000;
float oxygenLevel = 15.000;
float bATerries = 15.000;
std::vector<std::string> inventory;
std::vector<std::string> cargo_bay;
std::vector<std::string> research_points;
std::vector<std::string> xp;
std::vector<std::string> hp;


using namespace std::this_thread;

//add int cmnd

/* 
void command_center();
void engine_room();
void dormitories();
void coms_center();
void lab_center();
void earth();
void planet_dwarf();
void planet_gasgiant();
void moon();
void universe();
void space_craft();
void spAce_vacum();
*/
void inv3ntory()
{
 std::cout<<std::endl;
 std::cout<<"Inventory"<<std::endl;
 for (int i = 0; i < inventory.size (); ++i)
 {
     std::cout<< i+1<< "_"<< inventory[i]<<std::endl;
 }
 if (inventory.size() ==0)
 {
     std::cout<<"Your Inventory is Empty\n";
 }
 std::cout<<std::endl;
}

void intro()
{
    std::cout<<"New movement detected!"<<std::endl;
    std::this_thread::sleep_for (std::chrono::seconds (2));
    std::cout<<"Face detectors are activated \n";
    std::this_thread::sleep_for (std::chrono::milliseconds(700));
    std::cout<<"Detected lifeform:  ";
    std::this_thread::sleep_for (std::chrono::milliseconds(700));
    std::cout<<" Human. ";
    std::this_thread::sleep_for (std::chrono::seconds(3));
    std::cout<<"Arc defense systems are active. Please be calm. You are being surveilled by  ";
    std::this_thread::sleep_for (std::chrono::milliseconds(700));
    std::cout<<" Arc Defense and Protection System developed by // ??? . "<< std::endl; //find a cool name here.
    std::this_thread::sleep_for (std::chrono::seconds(1));
    std::cout<<"All the commmand functions are idle and blocked for safety reasons. \n";
    std::this_thread::sleep_for (std::chrono::milliseconds(700));
    std::cout<<"The spaceship is currently under control of the AI."<<std::endl;
    std::this_thread::sleep_for (std::chrono::milliseconds(700));
    std::cout<<"Only the assigned commander of this spaceship can take control"<<std::endl;
    std::this_thread::sleep_for (std::chrono::seconds(2));
    
    char aCCess_c0de;
    
    std::cout<<"Enter the code to access. (A single character)  "<<std::endl;
    std::this_thread::sleep_for (std::chrono::nanoseconds(3000));
    std::cin>> aCCess_c0de;
    std::cout<<"Code Number " << aCCess_c0de << ":" << (int)aCCess_c0de;
    std::this_thread::sleep_for (std::chrono::milliseconds(1500));
    std::cout<<"Analyzing the access code "<<std::endl;
    std::this_thread::sleep_for (std::chrono::seconds(1));
    std::cout<<".";
    std::this_thread::sleep_for (std::chrono::seconds(1));
    std::cout<<" .";
    std::this_thread::sleep_for (std::chrono::seconds(1));
    std::cout<<" ."<<std::endl;    //some sound effect would be nice here...
    std::this_thread::sleep_for (std::chrono::seconds(3));
    std::cout<<"Access granted \n";
    std::this_thread::sleep_for (std::chrono::nanoseconds(8000));
    std::cout<<"Initializing Enigma and giving access to the command center."<<std::endl;
    std::cout<<"Starting in "<<std::endl;
    std::this_thread::sleep_for (std::chrono::seconds(2));
    std::cout<<". ";
    std::this_thread::sleep_for (std::chrono::milliseconds(700));
    std::cout<<" .."<<std::endl;
}


void tutorial()
{

    std::cout<<"Welcome aboard commander. This is Enigma. The AI that powers Arch.  "<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"First, I'll show you arouund \n";
    std::this_thread::sleep_for (std::chrono::seconds(3));
    std::cout<<"You're in the command center. This is where you control Arch." <<std::endl;
    std::this_thread::sleep_for (std::chrono::seconds(2));
    std::cout<<"There are several commands that you should learn in order to move around.  \n"; //EXPECT: command centr to advance.
    std::this_thread::sleep_for (std::chrono::nanoseconds(5000));
    std::cout<<"Use arrow keys to move around\n";//move
    std::this_thread::sleep_for (std::chrono::seconds(3));
    std::cout<<"To use an item from your inventory, press 'u'. \n";//use 
    std::this_thread::sleep_for (std::chrono::seconds(3));
    std::cout<<"You can also use an item from your inventory together with another item that is not in your inventory with the same command. "<<std::endl;
    std::this_thread::sleep_for (std::chrono::nanoseconds(5000));
    std::cout<<"press 'a' to analyze an item. \n"; //analyze
    std::this_thread::sleep_for (std::chrono::seconds(3));
    std::cout<<"If you want to pickup an item, press 'p' \n";
    std::this_thread::sleep_for (std::chrono::seconds(3));
    std::cout<<"That's all. If you want to see this window again, just press 'h' for help"<<std::endl;
    std::this_thread::sleep_for (std::chrono::milliseconds(700));  
}




// Priority: Finish the intro, make a new plan for objects.
// How to introduce the story to the player...?

/* 

Fix needed    
    L 6 - 12 objects
    L 29 int comd
    L 31 - 44 improve with a better design.
    L 74
    L 96

    */
