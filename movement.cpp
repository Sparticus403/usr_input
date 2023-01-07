#include <conio.h>
#include <iostream>
#include <string.h>

const int MAX_WIDTH = 50;
const int MAX_HEIGHT = 20;

struct Point{
    int x;
    int y;
};

struct Player {
    char c = '@';
    Point position;
    int max_hp = 10;
    int current_hp = max_hp;
};

void drawMap(Player& myPlayer){
 std::string map;
    for(int y = 0; y < MAX_HEIGHT; y++){
        for (int x = 0; x < MAX_WIDTH; x++){
            if(myPlayer.position.x == x && myPlayer.position.y == y){
                // std::cout << myPlayer.c;
            
                map += myPlayer.c;
            }
            else {
                // std::cout << ".";
                map += ".";
            }
        }
        // std::cout << std::endl;
        map += "\n";
    }
    std::cout << map << std::endl;
    std::cout << "HP: " << myPlayer.current_hp << "/" << myPlayer.max_hp << std::endl;
}

int main() {
    Player myPlayer;
    myPlayer.position.x = 0;
    myPlayer.position.y = 0;
    int input;

    while(true){

        // TODO: clear screen before next print
        std::cout << "\033[2J\033[1;1H" << std::endl;
        drawMap(myPlayer);
        input = getch();
        switch(input){
            case 'w':
                myPlayer.position.y--;
                if(myPlayer.position.y < 0){
                    myPlayer.position.y = 0;
                }
                break;
            case 's':
                myPlayer.position.y++;
                if(myPlayer.position.y >= MAX_HEIGHT){
                    myPlayer.position.y = MAX_HEIGHT - 1;
                }
                break;
            case 'a':
                myPlayer.position.x--;
                if (myPlayer.position.x < 0){
                    myPlayer.position.x = 0;
                }
                break;
            case 'd':
                myPlayer.position.x++;
                if(myPlayer.position.x >= MAX_WIDTH){
                    myPlayer.position.x = MAX_WIDTH - 1;
                }
                break;
            case 'q':
                return 0;
        }
    }

    return 0;
}