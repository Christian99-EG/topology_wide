#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <SDL2/SDL.h>

//estructura del nodo
typedef struct 
{
    int x;
    int y;
}Nodo;

//Funcion para dibujar el nodo
void dibujaNodo(SDL_Renderer* renderer, int centroX, int centroY, int radio, Nodo nodo)
{

    for(int y = -radio; y <= radio; y++)
    {
        for(int x = -radio; x <= radio; x++)
        {
            if(x*x + y*y <= radio*radio)
            {
                SDL_RenderDrawPoint(renderer, centroX + x, centroY + y);
            }
        }
    }
    /*int x,y;

    for(double angulo = 0; angulo < 360; angulo += 1.0)
    {
        x = centroX + radio * cos(angulo * M_PI / 180);
        y = centroY + radio * sin(angulo * M_PI / 180);
        SDL_RenderDrawPoint(renderer, x, y);
    }*/
}

//Funcion para dibujar la aristas
void dibujaArista(SDL_Renderer* renderer, Nodo inicio, Nodo fin)
{
    SDL_RenderDrawLine(renderer, inicio.x, inicio.y, fin.x, fin.y);
}

int main(int argv, char* argc[])
{
    const int window_width = 800;
    const int window_height = 800;

    if(SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        printf("Error al iniciar SDL %s \n", SDL_GetError());
        return 0;
    }

    SDL_Window *window = SDL_CreateWindow
    (
        "Red 1", 
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        window_width, 
        window_height,
        SDL_WINDOW_SHOWN
    );

    if(!window)
    {
        printf("Error al iniciar la ventana %s \n", SDL_GetError());
        return 1;
    }

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if(!renderer)
    {
        printf("Error al crear render %s \n", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    //color de fondo
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);

    Nodo nodo1 = {150,100};
    Nodo nodo2 = {200, 100};
    Nodo nodo3 = {250, 150};
    Nodo nodo4 = {250, 200};
    Nodo nodo5 = {200, 250};
    Nodo nodo6 = {150, 250};
    Nodo nodo7 = {100, 200};
    Nodo nodo8 = {100, 150};
    Nodo nodo9 = {250, 300};

    Nodo nodo10 = {350, 300};
    Nodo nodo11 = {300, 150};
    Nodo nodo12 = {200, 400};
    Nodo nodo13 = {300, 200};
    Nodo nodo14 = {150, 300};
    Nodo nodo15 = {150, 450};       
    Nodo nodo16 = {250, 450};
    Nodo nodo17 = {100, 500};
    Nodo nodo18 = {200, 500};
    Nodo nodo19 = {220, 500};
    Nodo nodo20 = {300, 500};
    Nodo nodo21 = {100, 550};
    Nodo nodo22 = {200, 550};
    Nodo nodo23 = {220, 550};
    Nodo nodo24 = {300, 550};
    Nodo nodo25 = {450, 400};
    Nodo nodo26 = {450, 150};
    Nodo nodo27 = {450, 350};
    Nodo nodo28 = {500, 350};
    Nodo nodo29 = {500, 400};
    Nodo nodo30 = {500, 450};
    Nodo nodo31 = {450, 450};
    Nodo nodo32 = {400, 450};
    Nodo nodo33 = {400, 400};


    //Dibujar nodos 
    SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255); //verde
    dibujaNodo(renderer, nodo1.x, nodo1.y, 10, nodo1);
    dibujaNodo(renderer, nodo2.x, nodo2.y, 10, nodo2);
    dibujaNodo(renderer, nodo3.x, nodo3.y, 10, nodo3);
    dibujaNodo(renderer, nodo4.x, nodo4.y, 10, nodo4);
    dibujaNodo(renderer, nodo5.x, nodo5.y, 10, nodo5);
    dibujaNodo(renderer, nodo6.x, nodo6.y, 10, nodo6);
    dibujaNodo(renderer, nodo7.x, nodo7.y, 10, nodo7);
    dibujaNodo(renderer, nodo8.x, nodo8.y, 10, nodo8);
    dibujaNodo(renderer, nodo9.x, nodo9.y, 10, nodo9);
    dibujaNodo(renderer, nodo10.x, nodo10.y, 10, nodo10);
    dibujaNodo(renderer, nodo11.x, nodo11.y, 10, nodo11);
    dibujaNodo(renderer, nodo12.x, nodo12.y, 10, nodo12);
    dibujaNodo(renderer, nodo13.x, nodo13.y, 10, nodo13);
    dibujaNodo(renderer, nodo14.x, nodo14.y, 10, nodo14);
    dibujaNodo(renderer, nodo15.x, nodo15.y, 10, nodo15);
    dibujaNodo(renderer, nodo16.x, nodo16.y, 10, nodo16);
    dibujaNodo(renderer, nodo17.x, nodo17.y, 10, nodo17);
    dibujaNodo(renderer, nodo18.x, nodo18.y, 10, nodo18);
    dibujaNodo(renderer, nodo19.x, nodo19.y, 10, nodo19);
    dibujaNodo(renderer, nodo20.x, nodo20.y, 10, nodo20);
    dibujaNodo(renderer, nodo21.x, nodo21.y, 10, nodo21);
    dibujaNodo(renderer, nodo22.x, nodo22.y, 10, nodo22);
    dibujaNodo(renderer, nodo23.x, nodo23.y, 10, nodo23);
    dibujaNodo(renderer, nodo24.x, nodo24.y, 10, nodo24);
    dibujaNodo(renderer, nodo25.x, nodo25.y, 10, nodo25);
    dibujaNodo(renderer, nodo26.x, nodo26.y, 10, nodo26);
    dibujaNodo(renderer, nodo27.x, nodo27.y, 10, nodo27);
    dibujaNodo(renderer, nodo28.x, nodo28.y, 10, nodo28);
    dibujaNodo(renderer, nodo29.x, nodo29.y, 10, nodo29);
    dibujaNodo(renderer, nodo30.x, nodo30.y, 10, nodo30);
    dibujaNodo(renderer, nodo31.x, nodo31.y, 10, nodo31);
    dibujaNodo(renderer, nodo32.x, nodo32.y, 10, nodo32);
    dibujaNodo(renderer, nodo33.x, nodo33.y, 10, nodo33);

    //Dibujar aristas
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255); //blanco
    dibujaArista(renderer, nodo1, nodo2);
    dibujaArista(renderer, nodo2, nodo3);
    dibujaArista(renderer, nodo3, nodo4);
    dibujaArista(renderer, nodo4, nodo5);
    dibujaArista(renderer, nodo5, nodo6);
    dibujaArista(renderer, nodo6, nodo7);
    dibujaArista(renderer, nodo7, nodo8);
    dibujaArista(renderer, nodo1, nodo8);

    dibujaArista(renderer, nodo3, nodo11);
    dibujaArista(renderer, nodo11, nodo13);
    dibujaArista(renderer, nodo4, nodo13);
    dibujaArista(renderer, nodo5, nodo9);
    dibujaArista(renderer, nodo5, nodo14);
    dibujaArista(renderer, nodo9, nodo14);
    dibujaArista(renderer, nodo9, nodo10);
    dibujaArista(renderer, nodo9, nodo12);
    dibujaArista(renderer, nodo10, nodo26);
    dibujaArista(renderer, nodo12, nodo15);
    dibujaArista(renderer, nodo12, nodo16);
    dibujaArista(renderer, nodo16, nodo19);
    dibujaArista(renderer, nodo16, nodo20);
    dibujaArista(renderer, nodo15, nodo17);
    dibujaArista(renderer, nodo15, nodo18);
    dibujaArista(renderer, nodo17, nodo21);
    dibujaArista(renderer, nodo18, nodo22);
    dibujaArista(renderer, nodo19, nodo23);
    dibujaArista(renderer, nodo20, nodo24);
    dibujaArista(renderer, nodo10, nodo25);
    dibujaArista(renderer, nodo25, nodo27);
    dibujaArista(renderer, nodo25, nodo28);
    dibujaArista(renderer, nodo25, nodo29);
    dibujaArista(renderer, nodo25, nodo30);
    dibujaArista(renderer, nodo25, nodo31);
    dibujaArista(renderer, nodo25, nodo32);
    dibujaArista(renderer, nodo25, nodo33);
    SDL_RenderPresent(renderer);
  
    SDL_Event evento;
    int recorrido = 1;
    while(recorrido)
    {
        while(SDL_PollEvent(&evento))
        {
            if(evento.type == SDL_QUIT)
            {
                recorrido = 0;
            }
        }
    }

    //Libera recursos
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}

//https://chatgpt.com/share/6771f5d9-4e48-8008-8b5b-6fd40e5f5e67