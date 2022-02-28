#include <iostream>
#include <thread>
#include <chrono>
#include <vector>

/*add more bools and fix this mess

bool command_center_on = false, radio_found = false, batteries_on = false, 
capsule = true , space_suit = true, oxygen = true, health = true, shield = true, batteries = true;  //check T/F validity. 

:::Add interactable objets:::
*/

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

void command_center();
void engine_room();
void dormitories();
void coms_center();
void lab_center();
void earth();
void planet_dwarf();
void planet_gasgiant();
void moon();
void sun();
void ocean();
void universe();
void space_craft();
void spAce_vacum();
void black_hole();

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

    
    //This is Enigma. An early stage AI to assist you in this journey"<<std::endl;
    std::this_thread::sleep_for (std::chrono::seconds(1));
    std::cout<<"There are several commands that you should learn in order to play.  \n";
    std::this_thread::sleep_for (std::chrono::nanoseconds(5000));
    //std::cout<<"I suggest you to "
    std::this_thread::sleep_for (std::chrono::seconds(5));
    std::cout<<"Use arrow keys to move around\n";
    std::this_thread::sleep_for (std::chrono::seconds(3));
    std::cout<<"To use an item type 'u'. \n";
    std::this_thread::sleep_for (std::chrono::seconds(3));
    std::cout<<"If you are next to an interactable item, and you have an item in your hand that can be used together "<<std::endl;
    std::this_thread::sleep_for (std::chrono::nanoseconds(5000));
    std::cout<<"you can do interact just by typing 'u'\n";
    std::this_thread::sleep_for (std::chrono::seconds(4));
    std::cout<<"If you want to pickup an item, type 'p' \n";





    
}

// Priority: Finish the intro, make a plan for objects.

/* 

Fix needed    
    L 6 - 12 objects
    L 29 int comd
    L 74
    L 96

    */
