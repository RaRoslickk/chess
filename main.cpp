#include <iostream> 

using namespace std;

class Playgroung {
private:
    int length = 8;
    int width = 8;
    class Pawn
    {
    public:
        char image = '1';
        int x;
        int y;

        void move() {
            x++;
            y++;
        }
    };

    Pawn pawns[8];
    void init_figures() {
        for (int i = 0; i < length; i++) {
            pawns[i].x = 0;
            pawns[i].y = i;
        }
    }

    void show_playgroung() {
        for (int i = 0; i < length; i++) {
            printf("pawn%d: x - %d, y - %d\n",i,pawns[i].x, pawns[i].y);
        }
    }

public:
    Playgroung() {
        init_figures();
        show_playgroung();
    }
};

int main() {
    Playgroung playgroung;

    return 1;
}
