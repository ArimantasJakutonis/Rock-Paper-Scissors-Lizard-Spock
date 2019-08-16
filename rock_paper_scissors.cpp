/* This program is used to play rock,paper,scissors,lizard,Spock game.
You will have to make your choice and then computer will randomly select its choice and will state the winner */

#include <iostream>
#include <cstdlib>
 int main() {
   int user;
   srand (time(NULL));
   int computer = rand() % 5 + 1;
  
   std::cout << "******************* \n";
   std::cout << "ROCK PAPER SCISSORS \n";
   std::cout << "******************* \n\n";

   std::cout << "1. ROCK \n";
   std::cout << "2. PAPER \n";
   std::cout << "3. SCISSORS \n";
   std::cout << "4. LIZARD \n";
   std::cout << "5. SPOCK \n";
   std::cin >> user;
   if (user > 5) {std::cout << "Invalid entry";}
   else{
   
// The game
// If computer picks rock:
   switch (computer){
    	case 1:
        if (user == 1) {std::cout << "Draw! Computer chose rock";}
        else if (user == 2) {std::cout << "You win! Computer chose rock";}
        else if (user == 3) {std::cout << "You lose! Computer chose rock";}
       	else if (user == 4) {std::cout << "You lose! Computer chose rock";}
       	else if (user == 5) {std::cout << "You win! Computer chose rock";}
       break;
// If computer picks paper:
    	case 2:
        if (user == 2) {std::cout << "Draw! Computer chose paper";}
        else if (user == 3) {std::cout << "You win! Computer chose paper";}
        else if (user == 1) {std::cout << "You lose! Computer chose paper";}
       	else if (user == 4) {std::cout << "You win! Computer chose paper";}
       	else if (user == 5) {std::cout << "You lose! Computer chose paper";}
       break;
// If computer picks scissors:
    	case 3:
        if (user == 3) {std::cout << "Draw! Computer chose scissors";}
        else if (user == 1) {std::cout << "You win! Computer chose scissors";}
        else if (user == 2) {std::cout << "You lose! Computer chose scissors";}
       	else if (user == 4) {std::cout << "You lose! Computer chose scissors";}
       	else if (user == 5) {std::cout << "You win! Computer chose scissors";}
       break;
// If computer picks lizard:
    	case 4:
        if (user == 3) {std::cout << "You win! Computer chose lizard";}
        else if (user == 1) {std::cout << "You win! Computer chose lizard";}
        else if (user == 2) {std::cout << "You lose! Computer chose lizard";}
       	else if (user == 4) {std::cout << "Draw! Computer chose lizard";}
       	else if (user == 5) {std::cout << "You lose! Computer chose lizard";}
       break;
// If computer picks Spock:
    	case 5:
        if (user == 3) {std::cout << "You lose! Computer chose Spock";}
        else if (user == 1) {std::cout << "You lose! Computer chose Spock";}
        else if (user == 2) {std::cout << "You win! Computer chose Spock";}
       	else if (user == 4) {std::cout << "You win! Computer chose Spock";}
       	else if (user == 5) {std::cout << "Draw! Computer chose Spock";}
       break;       
   }
 }
 }  