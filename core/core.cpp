#include <iostream>
#include <thread>
#include <chrono>
#include <vector>

//dry the code when you finish

//spaceship
static bool spaceship = true;
bool command_center_on = false, main_door = false, spaceship_batteries = false, engines = false,
//humans
ground_control = false, family = false,
//small objects in spaceship
radio_found = false, music_radio = false, lintern = false, 
//violence | adding guns but I didn't add any enemy, is he gonna kill himself or what?
plasma_gun = false, migr_x_gun = false, metich_bomb = false, prnl_grnd= false, molotov = false, 
//consumable
anticold = false, health_pill = false, painkiller = false, chocolate = false, protein_pill = false,
//main character
capsule = false , space_suit = true, oxygen = true, health = true , shield = true, visor = false, suit_batteries = false, sleep= false;



//:::Add interactable objets::: feel like still so less, wanna add like 1000 at least.



int _hP = 5000; //vulnerable // character should be able to improve. | add more characters?
int _xP = 0;
int _ShielDCount_iron = 10000;
float ShielDCount_titanium = 18.000;
float oxygenLevel = 15.000;
float bATerries = 15.000;
float sTreNgTH= 3000; //this is power
std::vector<std::string> inventory;
std::vector<std::string> cargo_bay;
std::vector<std::string> research_points;
std::vector<std::string> xp;
std::vector<std::string> hp;



using namespace std::this_thread;


//add int cmnd --added

void command_center();
void engine_room();
void dormitories();
void arsenal();
void coms_center();
void lab_center();
void earth();
void planet_dwarf();
void planet_gasgiant();
void moon();
void universe();
void space_craft();
void spAce_vacum();

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
    std::cout<<"Use 'w,a,s,d' keys to move around\n";//move
    std::this_thread::sleep_for (std::chrono::seconds(3));
    std::cout<<"To use an item from your inventory, press 'u'. \n";//use 
    std::this_thread::sleep_for (std::chrono::seconds(3));
    std::cout<<"You can also use an item from your inventory together with another item that is not in your inventory with the same command. "<<std::endl;
    std::this_thread::sleep_for (std::chrono::nanoseconds(5000));
    std::cout<<"press 'x' to analyze an item." <<std::endl;
    std::cout<<"if you are not sure what to do in a certain please, don't forget to analyze \n";
    std::this_thread::sleep_for (std::chrono::seconds(3));
    std::cout<<"If you want to pickup an item, press 'p' \n";
    std::this_thread::sleep_for (std::chrono::seconds(3));
    std::cout<<"That's all. If you want to see this window again, just press 'h' for help"<<std::endl;
    std::this_thread::sleep_for (std::chrono::milliseconds(700));  
}


void dormitories()
{

        std::cout<<"Dormitories \n";
        std::this_thread::sleep_for (std::chrono::seconds(5));
        std::cout<<"This is where your capsule is, you can sleep here."<<std::endl;
        std::cout<<"Meanwhile you walk between the capsules and tubes, you started feeling cold in this metal tube \n";
        std::cout<<"you are the only human being in the vacuum of space."<<std::endl;
        std::this_thread::sleep_for (std::chrono::milliseconds(700));
        std::cout<<"or are you? ";
        std::this_thread::sleep_for (std::chrono::seconds(1));
        std::cout<<". ";
        std::this_thread::sleep_for (std::chrono::seconds(1));
        std::cout<<" .";
        std::this_thread::sleep_for (std::chrono::milliseconds(700));
        std::cout<<"  .";
        std::this_thread::sleep_for (std::chrono::milliseconds(700));
        inv3ntory ();
        std::string command;
        bool standby = true;
        while (standby) 
        {
            std::cout<<"Command: "<<std::endl;
            std::cin>>command;
            if (command  == "h")
            {
                std::cout<<"serve yourself, I ain't gonna tell you what to do."<<std::endl;
                std::cout<<"I'm not getting paid to tell everything you need, the help service is when I want not when you want."<<std::endl;
                std::cout<<"discover yourself. "<<std::endl;
                std::this_thread::sleep_for (std::chrono::milliseconds(700));
                std::cout<<" ."<<std::endl;
                std::this_thread::sleep_for (std::chrono::milliseconds(700));
                std::cout<<"  ."<<std::endl;                
            }
            else if (command == "x")
            {
                std::cout<<"You are in dormitories. \n";
                    std::this_thread::sleep_for(std::chrono::nanoseconds(1000));
                    std::cout<<"there are two sleeping capsules here. One is yours.\n";
                    std::cout<<"And the other one is for the astronout that will come "<<std::endl;
                    std::this_thread::sleep_for (std::chrono::seconds(2));
                    std::cout<<"Only 5  days left for her docking. When she comes, she will sleep threre"<<std::endl;
                    std::this_thread::sleep_for (std::chrono::milliseconds(700));
                    std::cout<<"anything else you want to do? "<<std::endl;
            }
            else if (command == "p")
            {
                    std::cout<<"spacesuit added to your inventory. "<<std::endl;
                    inventory.push_back("spacesuit");
                    std::this_thread::sleep_for (std::chrono::milliseconds(1900));
                    std::cout<<"Keep checking, this can't be the only thing here "<<std::endl;
            }
        }
}

void engine_room()
{
    //bool standby = false;
    //bool valid = false;
    std::string command;
    
    std::cout<< std::string (50, '\n');
    engine_room();  //check
    std::cout<<"You came to the engine room"<<std::endl; //bug here, yes/no for what?
    std::cout<<""<<std::endl;
    std::cout<<"There are some things to do here, would you like to do now?"<<std::endl;
    std::this_thread::sleep_for (std::chrono::seconds(2));
    std::cout<<"Type : "<<std::endl;
    std::cout<<"YES"<<std::endl;
    std::cout<<"Skip"<<std::endl;

    if (command == "yes")
    {
      std::cout<<"Type command"<<std::endl;
      std::this_thread::sleep_for (std::chrono::milliseconds(700));
      std::cout<<"ERM- Run ERM module to analyze main engine's conditions."<<std::endl;
      std::cout<<"TRM- Run TRM module to analyze thrusters "<<std::endl;
      std::cout<<"EPM-  Run EP to analyze electrical systems"<<std::endl;
    }
      else if (command =="ERM")
    {
      std::cout<<"Checking the main engine Number 1"<<std::endl;
      std::this_thread::sleep_for (std::chrono::seconds (6));
      std::cout<<"All functions with the main engine #1 looks great"<<std::endl;
      std::this_thread::sleep_for (std::chrono::seconds (2));
      std::cout<<"Checking the main engine Number 2"<<std::endl;
      std::this_thread::sleep_for (std::chrono::seconds (6));
      std::cout<<"All functions with the main engine #2 looks great"<<std::endl;
      std::this_thread::sleep_for (std::chrono::seconds(2));
      std::cout<<"Checking the main engine Number 3"<<std::endl;
      std::this_thread::sleep_for (std::chrono::seconds (6));
      std::cout<<"All functions with the main engine #3 looks great"<<std::endl;
      std::this_thread::sleep_for (std::chrono::seconds(2));
      std::cout<<"Preparing a maintenance report, please wait."<<std::endl;
      std::this_thread::sleep_for (std::chrono::seconds(10));
      std::cout<<"Here is the report I prepared for you"<<std::endl;
      std::cout<<"ENGINE 1 || ALL FUNCTIONS - CHECKED"<<std::endl;
      std::cout<<"ENGINE 2 || ALL FUNCTIONS - CHECKED"<<std::endl;
      std::cout<<"ENGINE 3 || ALL FUNCTIONS - CHECKED"<<std::endl;
      std::cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<std::endl;
      std::this_thread::sleep_for (std::chrono::milliseconds(700));
      std::cout<<"END OF ENGINE MAINTENANCE REPORT"<<std::endl;
      std::this_thread::sleep_for (std::chrono::nanoseconds(1000));
      std::cout<<"THIS REPORT IS GENERATED by ENIGMA AI"<<std::endl;

    }  //all messed up but I'm gonna fix it... 
/*




   /* std::cout<<"yes "<<std::endl;
    std::cout<<"no "<<std::endl;
    if (command == "yes")
    {
        std::cout<<"Choose action - Type the number"<<std::endl;
        std::this_thread::sleep_for (std::chrono::microseconds(700));
        std::cout<<"1- Maintance and Check Engine's Conditions (Warning, checking everything takes a while)"<<std::endl;
        std::cout<<"2- Look Around"<<std::endl;
        std::cout<<"3- Check inventory"<<std::endl;
        std::cout<<"4- Nevermind"<<std::endl;
      //SOLVE THE ISSUE HERE. REMOVE SWITCHES FROM CONDITIONAL STATEMENT AND TRY AGAIN.
    }*/
    

    

}

            /*  // else if (command == "w") this is necessary, add this to in previous place. 
            {
                
                ///you can also change the whole void? but you wanna do it here then? - I DID THIS
                if (command == "yes")
                {
                std::cout<<"Choose action (type the number)"<<std::endl;
                std::this_thread::sleep_for (std::chrono::milliseconds(700));
                std::cout<<"1 - Check the Engine's condition "<<std::endl;
                std::cout<<"2 - Look Around "<<std::endl;
                std::cout<<"3 - Nevermind "<<std::endl;
                }
                else if (command == "1")
                {
                    std::cout<<"Engines are in optimum condition and they can be started from command center\n";
                    std::this_thread::sleep_for (std::chrono::seconds(1));
                    std::cout<<"But do you even know where to go in the vacuum of space though? "<<std::endl;
                }
                else if (command == "2", command =="p")
                {
                    std::cout<<"You walk around this giant engineering masterpiece"<<std::endl;
                    std::this_thread::sleep_for (std::chrono::milliseconds(700));
                    std::cout<<"and it makes you think if the technology used to make this giant machine"<<std::endl;
                    std::cout<<"used to solve the problems the world is facing, would it be necessary for you to be in space and do this research? "<<std::endl;
                    std::this_thread::sleep_for (std::chrono::seconds(1));
                    std::cout<<"You found a flashlight. Do you want to take it?"<<std::endl;
                    //can push help
                    //continue 
                }
                else if (command == "p");
                {
                    std::cout<<"Flashlight is added in your inventory."<<std::endl;
                    inventory.push_back("flashlight");
                }
                std::cout<<"You saw some footsteps on the ground. But how is that possible?"<<std::endl;
                std::cout<<"You're the only person in this spacecrat."<<std::endl;
                std::this_thread::sleep_for (std::chrono::seconds (1));
                std::cout<<".";
                std::this_thread::sleep_for (std::chrono::seconds(1));
                std::cout<<" .";
                std::this_thread::sleep_for (std::chrono::seconds(1));
                std::cout<<"  ."<<std::endl;
                std::this_thread::sleep_for (std::chrono::seconds(3));





                //else (command == "no");
                {
                    std::cout<<"It's okay. "<<std::endl; 
                }
            }
        } 
    }

}

*/



int main() 
{
  std::cout<<"New movement detected!"<<std::endl;
    std::this_thread::sleep_for (std::chrono::seconds (2));
    std::cout<<"Face detectors are activated \n";
    std::this_thread::sleep_for (std::chrono::milliseconds(700));
    std::cout<<"Detected lifeform:  ";
    std::this_thread::sleep_for (std::chrono::milliseconds(700));
    std::cout<<" Human. "<<std::endl;
    std::this_thread::sleep_for (std::chrono::seconds(3));
    std::cout<<"Arc defense systems are active. Please be calm. You are being surveilled by  \n";
    std::this_thread::sleep_for (std::chrono::milliseconds(700));
    std::cout<<" Arc Defense and Protection System. Developed by ::Goktug Erol | ge_dev@yahoo.com ::"<< std::endl; //find a cool name here.
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
    std::cout<<"Code Number " << aCCess_c0de << ":" << (int) aCCess_c0de;
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
  
  
  char skip;
  char engine;
  bool valid = false;
  while (!valid) 
  {
    std::cout << "enter 's' to skip the instructions, otherwise, enter 'i'\n";
    std::cout<< "enter 'e' to enter engine room\n";
    std::cin >> engine;
    std::cin >> skip;
    engine == 'e';
    if (skip == 'i') {
      valid = true;
      tutorial();
      std::cout << "It's just the begining.";
      std::cout << __STRING (50)<<std::endl;
      std::cout << "You are transported to the main room in the spacecraft: ";
      dormitories();
    } else if (skip == 's')
    {
      valid = true;
      std::cout << "It's just the begining.\n";
      std::cout << __STRING (50)<<std::endl;
      std::cout << "You are transported to the main room in the spacecraft.";
      dormitories();
    }
      else 
    {
      std::cout << "Unauthorized. \n";
    }
  }
  return 0;
}

