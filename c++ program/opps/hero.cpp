#include<iostream>
using namespace std;


class hero {
     public:
     int health;
     char level;
     static int timeToComplete;

hero() {
    cout<<"constuctor called"<<endl;
}
hero(int health){
    cout<<"this ->" <<this <<endl;
    this-> health = health;
}

~hero(){
    cout<< "destructor called "<<endl;
}
    
};

int hero::timeToComplete=65;

int main(){

    cout<<"static member  "<<hero::timeToComplete<<endl;
    cout<<"hello world"<<endl;
    //statically constrctor called
    hero ramesh(10);
    cout<<"adress of ramesh "<<&ramesh<<endl;
    //dynamically constrctor called;
    hero *b=new hero;
    
   
    // a.health=45;
    // cout<<"health is:"<< a.health <<endl;
    // hero *b=new hero;
    // b->health=87;
    // cout<<"health is: "<< (*b).health<<endl;

    // return 0;
}