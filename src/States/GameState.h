//

#ifndef GAMESTATE_H
#define GAMESTATE_H

class GameState
{
    public:
        virtual void init() = 0; //Load resources
        virtual void unload() = 0; //Unload everything

        virtual void pause() = 0;
        virtual void resume() = 0;

        virtual void handleEnvents() = 0;
        virtual void update() = 0;
        virtual void draw() = 0;

    private:
        //
};

#endif // GAMESTATE_H
