#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int health = 100;
int damage;

void healthDeduct(){
    srand(time(0));
    damage = (rand() % 10) ;
    health = health - damage;
}
int main()
{  int timeAlive = 0;
    char answer;
    cout << "Press 1 to start" <<endl;
    cin >> answer;
    if (answer = 1){
        while (health > 0){
              cin.get();
              cout<<"  Present health :" << health <<endl;
            healthDeduct();
            timeAlive++;
        }
        cout << "Player was alive for :- " << timeAlive << "steps." endl ;
    }else{
        exit(0);
    }
}
