#include<iostream>
using namespace std;
 struct player{
 	string name;
 	int score;
 	int level;
 };
  void displayplayer(const player &p){
  	cout<<"player name:  "<<p.name<<endl;
  		cout<<"player score :  "<<p.score<<endl;
  		cout<<"player level: " <<p.level<<endl;
  	
  }
   int main(){
  
   	player player1={"Nelly", 5, 10};
   	player player2={"Gloria",7, 9};
   	
   	displayplayer(player1);
   	displayplayer(player2);
   	return 0;
   }
