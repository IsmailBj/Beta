#include <iostream>
using namespace std;
/*
creates a variable of a type structure with the name enemy taking
the form as defined for the struct student.
struct variables can be declared right after the definition of the
structure
*/

struct enemy{
char name[30];
int hp;
float size;
}alien, monster, ninja;


int main(){
//Variables of struct type can be initialized in the following way:

   enemy alien = {"Chees",150,1.20};
   enemy monster = {"Wolf",600,2.10};
   enemy ninja = {"lee",200,1.70};

/*
A structure is a singular object, but the individual components can be
accessed using the name of the struct variable and the name of the
component separated by the “dot” operator “.”, and treated as a regular
variable.
*/

   cout<<"Name:\t"<<alien.name<<"\nHP:\t"<<alien.hp<<"\nSize:\t"<<alien.size<<endl;
   cout<<endl;
   cout<<"Name:\t"<<monster.name<<"\nHP:\t"<<monster.hp<<"\nSize:\t"<<monster.size<<endl;
   cout<<endl;
   cout<<"Name:\t"<<ninja.name<<"\nHP:\t"<<ninja.hp<<"\nSize:\t"<<ninja.size<<endl;

  return 0;
}
