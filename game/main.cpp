#include <iostream>
#include "Person.h"
#include "Timer.h"
#include <time.h>
#include <string>
#include <fstream>
#include "Warrior.h"
#include "Magician.h"
using namespace std;


int main()
{
    cout<<"Little summary :)"<<endl;
    //display the contents of the file
    ifstream file("name_winner.txt");
    if(file){
        string line;
        while(getline(file, line))//as long as we are not at the end
        {
            cout<<line<<endl;//display us in the terminal
        }
    }
    else{
        cout<<"Error: Impossible to open file"<<endl;
    }
    cout<<endl;
    int take_time;
    int action;
    string name_1,name_2;
    Warrior frank ;//Warrior
    Magician jordan;//Magician

    cout<<"Put name first player(Warrior)"<<endl;
    cin>>name_1;
    cout<<"Put name second player(Magician)"<<endl;
    cin>>name_2;
    frank.set_name(name_1);//Enter the name player
    jordan.set_name(name_2);
    cout<<"Press number \"0\" to have list command"<<endl;
    unsigned long seconds = 60;//time to play game
	Timer t;
	t.start();

	while(true) {
		if(t.elapsedTime() >= seconds) {
			break;
		}
		else {
            if(frank.get_level_health() == 0 || jordan.get_level_health() == 0){
                seconds = 1; //if this is one winner, then put seconds = 1 to stop the fight
            }
            else{

                cout<<"TIMER : "<<"/* "<<t.elapsedTime()<<" seconds */"<<endl;
                take_time=t.elapsedTime();
                cin>>action;
                if(action == 0){
                    cout<<"HOW TO PLAY"<<endl;
                    cout<<"Press 0 : "<<jordan.get_name()<<" to have command of the game "<<endl;
                    cout<<"Press 1 : "<<jordan.get_name()<<" attacks "<<frank.get_name()<<endl;
                    cout<<"Press 2 : "<<frank.get_name()<<" attacks "<<jordan.get_name()<<endl;
                    cout<<"Press 3 : "<<frank.get_name()<<" increases its level health of "<<frank.get_level_health()<<endl;
                    cout<<"Press 4 : "<<jordan.get_name()<<" increases its level health of "<<jordan.get_level_health()<<endl;
                    cout<<"Press 5 : "<<jordan.get_name()<<" changes arm"<<endl;
                    cout<<"Press 6 : "<<frank.get_name()<<" changes arm"<<endl;
                    cout<<"Press 7 : "<<jordan.get_name()<<" Fatal attack : attacks with fireball"<<endl;
                    cout<<"Press 8 : "<<frank.get_name()<<" Fatal attack : makes a series of fist cups"<<endl;
                }
                else if(action == 1){
                    cout<<jordan.get_name()<<" attacks "<<frank.get_name()<<endl;
                    jordan.attack(frank);
                    frank.show_person();
                }
                else if(action == 2){
                    cout<<frank.get_name()<<" attacks "<<jordan.get_name()<<endl;
                    frank.attack(jordan);
                    jordan.show_person();
                }
                else if(action == 3){
                    cout<<frank.get_name()<<" increases its level health of "<<frank.get_level_health()<<endl;
                    frank.health_drink(10);
                }
                else if(action == 4){
                    cout<<jordan.get_name()<<" increases its level health of "<<jordan.get_level_health()<<endl;
                    jordan.health_drink(10);
                }
                else if(action == 5){
                    cout<<jordan.get_name()<<" changes arm"<<endl;
                    jordan.to_change_arm();
                    jordan.show_person();
                }
                else if(action == 6){
                    cout<<frank.get_name()<<" changes arm"<<endl;
                    frank.to_change_arm();
                    frank.show_person();
                }else if(action == 7){
                    cout<<jordan.get_name()<<" Fatal attack : attacks with fireball"<<endl;
                    jordan.fireball(frank);
                    for(int i(0); i < 2; i++){
                        cout<<"*"<<endl;
                        for(int j(0);j < 5; j++)
                            {
                                cout<<"*"<<endl;
                                for(int h(0);h < 10;h++){
                                    cout<<"*";
                                    }

                            }
                    cout<<endl;
                    }
                    frank.show_person();
                }else if(action == 8){
                    cout<<frank.get_name()<<" Fatal attack : makes a series of fist cups"<<endl;
                    frank.super_attack(jordan);
                    for(int i(0); i < 2; i++){
                    cout<<"*"<<endl;
                    for(int j(0);j < 5; j++)
                    {
                        cout<<"*"<<endl;
                        for(int h(0);h < 10;h++){
                        cout<<"*";
                        }

                        }
                    cout<<endl;
                    }
                    jordan.show_person();
                }

                else{
                    cout<<"Enter number between 1-6"<<endl;
                }
            }

		}
	}
	cout <<"///////////////////////////////////////////////////" << endl;
	cout <<"Finally, the WINNER is : " << endl;


	string const my_file("name_winner.txt");
    ofstream my_flow(my_file.c_str(), ios::app);//ios::app allows to write at the end of the file
    if(my_flow){
        if (frank == jordan){
            cout<<"anyone. Null figth"<<endl;
            frank.show_person();
            jordan.show_person();//show us its features
            my_flow << "anyone didn't win"<<endl;//Write in a file

        }
        else if (frank > jordan){
            frank.show_person();//show us its features
            my_flow << frank.get_name()<<" won in "<<take_time<<" seconds"<<endl;//Write in a file
        }
        else{
            jordan.show_person();//show us its features
            my_flow << jordan.get_name()<<" won in "<<take_time<<" seconds"<<endl;//Write in a file
        }
    }

    else{
        //if we don't have to access to file, then display this sentence
        cout<<"Impossible to open file"<<endl;
    }

    return 0;

}
