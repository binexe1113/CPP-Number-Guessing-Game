#include<iostream>
#include <conio.h>
#include<cstdlib>
#include<ctime>
#include<random>
#include<cctype>
#include <string>
#include "numguess.h"
using namespace std;

int main(){
    int ch;
    bool running = true;
    int answer;

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distrib(1,20);

    do{
        int tries=5;


        int roll = distrib(gen);

        

        cout<<string(80,'-')<<endl;
        cout<<string(80,'-')<<endl;
        cout<<"LET'S PLAY A GAME!"<<endl;
        cout<<"I AM THINKING OF A NUMBER BETWEEN 1 AND 20"<<endl;
        cout<< "YOU HAVE 5 ATTEMPTS TO GUESS THE NUMBER CORRECTLY OR ELSE..."<<endl;

        while(tries>0){
            cout<<"GUESS NOW WHAT NUMBER I AM THINKING!"<<endl;
            answer = returnInt();
            if(answer == roll ){
                cout<<"HOW YOU DID IT??? YOU GUESSED..."<<endl;
                cout<<"CORRECTLY"<<endl;
                cout<<"You win"<<endl;
                cout<<"Let's play again! I will think of a different number!"<<endl;
                cout<<"Press [ESCAPE] to end the game or Any other KEY to continue playing"<<endl;
                ch = _getch();
                if (ch == 27){
                    running = false;
            }else{
                roll = distrib(gen);
                tries=5;
            }

                
            }else{
                cout<<"WRONG GUESS HAHAHHAHAH!"<<endl;
                tries--;
                if(tries != 0){
                cout<<"You only have "<<tries<<" left"<<endl;
            }
                

            }

        };
        cout<<"YOU LOST HAHAHHAHAHA"<<endl;
        cout<<"The number was: "<<roll<<endl;
        cout<<"I WILL THINK OF ANOTHER NUMBER NOW (press [ESCAPE] to exit game or any other key to continue playing)"<<endl;
            ch = _getch();
            if (ch == 27){
                running = false;
            }
        

    
    }while(running==true);
    return 0;
}