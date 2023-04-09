// #include <stdio.h>
// #include <graphics.h>

// int main()
// {
//     int gd = DETECT, gm;
//     initgraph(&gd, &gm, "");

//     int num_vertices;
//     printf("Enter the number of vertices of the polygon: ");
//     scanf("%d", &num_vertices);

//     int vertices[num_vertices*2];
//     printf("Enter the x and y coordinates of each vertex:\n");
//     for (int i = 0; i < num_vertices; i++) {
//         printf("Vertex %d: ", i+1);
//         scanf("%d %d", &vertices[i*2], &vertices[i*2+1]);
//     }

//     drawpoly(num_vertices, vertices);

//     getch();
//     closegraph();

//     return 0;
// }

// #include <SDL.h>
// #include <SDL_image.h>
// #include <SDL_ttf.h>
// #include <stdio.h>

// int main(int argc, char *argv[]) {
//     // Initialize SDL
//     if (SDL_Init(SDL_INIT_VIDEO) != 0) {
//         printf("SDL_Init Error: %s\n", SDL_GetError());
//         return 1;
//     }

//     // Create a window
//     SDL_Window *window = SDL_CreateWindow("Polygon", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);
//     if (window == NULL) {
//         printf("SDL_CreateWindow Error: %s\n", SDL_GetError());
//         SDL_Quit();
//         return 1;
//     }

//     // Create a renderer
//     SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
//     if (renderer == NULL) {
//         printf("SDL_CreateRenderer Error: %s\n", SDL_GetError());
//         SDL_DestroyWindow(window);
//         SDL_Quit();
//         return 1;
//     }

//     // Set the drawing color to white
//     SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

//     // Draw a polygon with n sides
//     int n = 6;  // Change this to any number of sides
//     int x = 320;
//     int y = 240;
//     int r = 100;
//     double angle = 2 * 3.14159265358979323846 / n;
//     SDL_Point points[n];
//     for (int i = 0; i < n; i++) {
//         points[i].x = (int)(x + r * cos(i * angle));
//         points[i].y = (int)(y + r * sin(i * angle));
//     }
//     SDL_RenderDrawLines(renderer, points, n);

//     // Update the screen
//     SDL_RenderPresent(renderer);

//     // Wait for a key press
//     SDL_Event event;
//     while (SDL_WaitEvent(&event)) {
//         if (event.type == SDL_QUIT) {
//             break;
//         }
//         if (event.type == SDL_KEYDOWN) {
//             break;
//         }
//     }

//     // Clean up resources
//     SDL_DestroyRenderer(renderer);
//     SDL_DestroyWindow(window);
//     SDL_Quit();

//     return 0;
// }
