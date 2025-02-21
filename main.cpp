#include "raylib.h"
#include "goat.h"
#include "duck.h"
#include <vector>
#include <string>

int main(void){
    //Intitialize
    InitWindow(1000,800,"Interactive Farm v0.5");

    SetTargetFPS(60);

    std::vector<Animal> farmAnimals;
    std::vector<Texture2D> im;

    std::string text = "";

    //Create animals and put them in the vector of animals
    Animal cow("Cow","assets/images/cow.png",100,200);
    Animal sheep("Sheep","assets/images/sheep.png",100,500);
    Goat goat("Goat","assets/images/goat.png",700,200);
    Duck duck("Duck","assets/images/duck.png",700,500);
    farmAnimals.push_back(cow);
    farmAnimals.push_back(sheep);
    farmAnimals.push_back(goat);
    farmAnimals.push_back(duck);

    //Load textures of animals to draw later
    for(Animal ans : farmAnimals){
        Image gt = LoadImage(ans.getImage().c_str());
        ImageResize(&gt,100,100);
        im.push_back(LoadTextureFromImage(gt));
    }

    while(!WindowShouldClose()){
        Rectangle mp;

        //check for mouse input and set text to animal info if collides with animal
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
            Vector2 pos = GetMousePosition();
            for(Animal ans : farmAnimals){
                mp = {pos.x,pos.y,10,10};
                Rectangle ansr = {ans.posX,ans.posY,100,100};
                if(CheckCollisionRecs(mp,ansr)){
                    text = ans.printInfo();
                }
            }
        }

        //Draw the animals
        BeginDrawing();
            ClearBackground(DARKGREEN);
            int i = 0;
            for(Animal ay : farmAnimals){
                DrawTextureRec(im.at(i),{ay.posX,ay.posY,100,100},{ay.posX,ay.posY},WHITE);
                i += 1;
            }
            if(text != "")DrawText(text.c_str(),300,720,25,WHITE);
            DrawRectangleRec(mp,RED);
            
        EndDrawing();
    }

    CloseWindow();
    return 0;
}