#include<iostream>
#include<chrono>
#include<thread>
using namespace std;
const static int sleep_time = 1; //seconds
const static int game_times = 5; //Number of times to play the game
const static int num_range = 20; //Range of Number
//フラッシュ暗算プログラム

void opening(); //openig comment
void setup(); //Determine the level of difficulty

int main(){
    opening();
    srand((unsigned int)time(NULL));
    int sum = 0;
    for(int i = 1; i <= game_times; i++){
        int num = rand()%num_range+1;
        sum += num;
        cout<<"No "<<i<<"."<<endl;
        cout<<num<<endl;
        this_thread::sleep_for(chrono::seconds(sleep_time));
        system("clear");
    }
    cout<<"************************"<<endl;
    cout<<"Please enter the answer."<<endl;
    cout<<"************************"<<endl;
    int input;
    cin>>input;
    if(input==sum){
        cout<<"*****************"<<endl;
        cout<<"You winner."<<endl;
        cout<<"*****************"<<endl;
    }else{
        cout<<"***********"<<endl;
        cout<<"You failed."<<endl;
        cout<<"Answer is "<<sum<<endl<<endl;
    }
}

void opening(){
    cout<<"*****************************************************"<<endl;
    cout<<"You will start flash mental arithmetic."<<endl;
    cout<<"The game will start soon when you make appropriate input."<<endl;
    cout<<"*****************************************************"<<endl;
    cout<<">>>";
    getchar();
    system("clear");
}
