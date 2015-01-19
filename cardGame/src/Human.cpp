#include "Human.hpp"

#include "Movement.hpp"
#include "exception/IllegalEntry.hpp"

void Human::ask(Action& action, int what, int request){
  Movement movement;
  string query;
   switch(request){
   case 0 :   cout << "Choisir carte(s) " << endl; break;
   case 1 :  cout << "Choisir carte(s) ou piocher" << endl; break;
   case 2 :  cout << "Piocher 2 fois " << endl;break;
   case 3:  cout << "Piocher encore une fois " << endl;break;
   case 4: cout << "Associer une couleur  a votre joker" << endl; break;  
   default:  cout << "_" << endl;
   }
   cout << hand << endl;
   
  cin >> query;



  if(request==4)
    
  try{
    movement = Movement(query, what);
    action.setFrom(hand, movement);
  }catch(IllegalEntry e){
    cout << e.what() << endl;
    ask(action, what);
  }
}
