/**************************
 * Includes
 *
 **************************/

#include <windows.h>
#include <gl/gl.h>
#include <math.h>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
/**************************
 * Function Declarations
 *
 **************************/

LRESULT CALLBACK WndProc (HWND hWnd, UINT message,
WPARAM wParam, LPARAM lParam);
void EnableOpenGL (HWND hWnd, HDC *hDC, HGLRC *hRC);
void DisableOpenGL (HWND hWnd, HDC hDC, HGLRC hRC);


/**************************
 * WinMain
 *
 **************************/
 class wheel//for the players, their enemies and the hostage
{
float xs, ys, zs, r, R, G, B;
int mode;
public:
wheel(float xsi, float ysi, float zsi, float ri, float Ri, float Gi, float Bi, int modei)
{
xs=xsi;
ys=ysi;
zs=zsi;
r=ri;
R=Ri;
G=Gi;
B=Bi;
mode=modei;
switch(mode)
{
case 1:
	{
	glBegin(GL_POLYGON);
	glColor3f(R,G,B);
	glVertex3f(xs+r, ys, zs);
	glVertex3f(xs+(r/pow(2.0, 0.5)), ys+(r/pow(2.0, 0.5)), zs);
	glVertex3f(xs, ys+r, zs);
	glVertex3f(xs-(r/pow(2.0, 0.5)), ys+(r/pow(2.0, 0.5)), zs);
	glVertex3f(xs-r, ys, zs);
	glVertex3f(xs-(r/pow(2.0, 0.5)), ys-(r/pow(2.0, 0.5)), zs);
	glVertex3f(xs, ys-r, zs);
	glVertex3f(xs+(r/pow(2.0, 0.5)), ys-(r/pow(2.0, 0.5)), zs);
	glEnd();
	break;
	}
case 2:
	{
	glBegin(GL_POLYGON);
	glColor3f(R,G,B);
	glVertex3f(xs+r, ys, zs);
	glVertex3f(xs+(r/pow(2.0, 0.5)), ys, zs+(r/pow(2.0, 0.5)));
	glVertex3f(xs, ys, zs+r);
	glVertex3f(xs-(r/pow(2.0, 0.5)), ys, zs+(r/pow(2.0, 0.5)));
	glVertex3f(xs-r, ys, zs);
	glVertex3f(xs-(r/pow(2.0, 0.5)), ys, zs-(r/pow(2.0, 0.5)));
	glVertex3f(xs, ys, zs-r);
	glVertex3f(xs+(r/pow(2.0, 0.5)), ys, zs-(r/pow(2.0, 0.5)));
	glEnd();
	break;
	}
case 3:
	{
	glBegin(GL_POLYGON);
	glColor3f(R,G,B);
	glVertex3f(xs, ys+r, zs);
	glVertex3f(xs, ys+(r/pow(2.0, 0.5)), zs+(r/pow(2.0, 0.5)));
	glVertex3f(xs, ys, zs+r);
	glVertex3f(xs, ys-(r/pow(2.0, 0.5)), zs+(r/pow(2.0, 0.5)));
	glVertex3f(xs, ys-r, zs);
	glVertex3f(xs, ys-(r/pow(2.0, 0.5)), zs-(r/pow(2.0, 0.5)));
	glVertex3f(xs, ys, zs-r);
	glVertex3f(xs, ys+(r/pow(2.0, 0.5)), zs-(r/pow(2.0, 0.5)));
	glEnd();
	break;
	}
}
}
};
class circle//for the electromagnetic wave
{
float xs, ys, zs, r, R, G, B;
int mode;
public:
circle(float xsi, float ysi, float zsi, float ri, float Ri, float Gi, float Bi, int modei)
{
xs=xsi;
ys=ysi;
zs=zsi;
r=ri;
R=Ri;
G=Gi;
B=Bi;
mode=modei;
switch(mode)
{
case 1:
	{
	glBegin(GL_LINE_LOOP);
	glColor3f(R,G,B);
	glVertex3f(xs+r, ys, zs);
	glVertex3f(xs+(r/pow(2.0, 0.5)), ys+(r/pow(2.0, 0.5)), zs);
	glVertex3f(xs, ys+r, zs);
	glVertex3f(xs-(r/pow(2.0, 0.5)), ys+(r/pow(2.0, 0.5)), zs);
	glVertex3f(xs-r, ys, zs);
	glVertex3f(xs-(r/pow(2.0, 0.5)), ys-(r/pow(2.0, 0.5)), zs);
	glVertex3f(xs, ys-r, zs);
	glVertex3f(xs+(r/pow(2.0, 0.5)), ys-(r/pow(2.0, 0.5)), zs);
	glEnd();
	break;
	}
case 2:
	{
	glBegin(GL_LINE_LOOP);
	glColor3f(R,G,B);
	glVertex3f(xs+r, ys, zs);
	glVertex3f(xs+(r/pow(2.0, 0.5)), ys, zs+(r/pow(2.0, 0.5)));
	glVertex3f(xs, ys, zs+r);
	glVertex3f(xs-(r/pow(2.0, 0.5)), ys, zs+(r/pow(2.0, 0.5)));
	glVertex3f(xs-r, ys, zs);
	glVertex3f(xs-(r/pow(2.0, 0.5)), ys, zs-(r/pow(2.0, 0.5)));
	glVertex3f(xs, ys, zs-r);
	glVertex3f(xs+(r/pow(2.0, 0.5)), ys, zs-(r/pow(2.0, 0.5)));
	glEnd();
	break;
	}
case 3:
	{
	glBegin(GL_LINE_LOOP);
	glColor3f(R,G,B);
	glVertex3f(xs, ys+r, zs);
	glVertex3f(xs, ys+(r/pow(2.0, 0.5)), zs+(r/pow(2.0, 0.5)));
	glVertex3f(xs, ys, zs+r);
	glVertex3f(xs, ys-(r/pow(2.0, 0.5)), zs+(r/pow(2.0, 0.5)));
	glVertex3f(xs, ys-r, zs);
	glVertex3f(xs, ys-(r/pow(2.0, 0.5)), zs-(r/pow(2.0, 0.5)));
	glVertex3f(xs, ys, zs-r);
	glVertex3f(xs, ys+(r/pow(2.0, 0.5)), zs-(r/pow(2.0, 0.5)));
	glEnd();
	break;
	}
}
}
};
class object_on_the_board//the board displayed consists of objects of this type
{
public:
string name;
object_on_the_board(string what_is_it="corridor")//constructor - the name is defaulted to be "corridor"
{
name=what_is_it;
}
void draw(float x, float y)//how to draw the objects?
{
if(name=="player")
{
wheel *wski=new wheel(x, y, 0.0f, 0.05f, 0.0f, 0.0f, 1.0f, 1);
delete wski;
}
if(name=="playeri")
{
wheel *wski=new wheel(x, y, 0.0f, 0.05f, 0.0f, 1.0f, 0.0f, 1);
delete wski;
}
if(name=="wall")
{
glBegin(GL_POLYGON);
glColor3f(0.5f, 0.5f, 0.5f);
glVertex2f(x+0.05f, y+0.05f);
glVertex2f(x+0.05f, y-0.05f);
glVertex2f(x-0.05f, y-0.05f);
glVertex2f(x-0.05f, y+0.05f);
glEnd();
}
if(name=="water")
{
glBegin(GL_POLYGON);
glColor3f(0.0f, 0.5f, 0.5f);
glVertex2f(x+0.05f, y+0.05f);
glVertex2f(x+0.05f, y-0.05f);
glVertex2f(x-0.05f, y-0.05f);
glVertex2f(x-0.05f, y+0.05f);
glEnd();
}
if(name=="TNT")
{
glBegin(GL_POLYGON);
glColor3f(1.0f, 0.0f, 0.0f);
glVertex2f(x+0.05f, y+0.05f);
glVertex2f(x+0.05f, y-0.05f);
glVertex2f(x-0.05f, y-0.05f);
glVertex2f(x-0.05f, y+0.05f);
glEnd();
}
if(name=="explosion")
{
glBegin(GL_POLYGON);
glColor3f(0.8f, 0.6f, 0.0f);
glVertex2f(x+0.05f, y+0.05f);
glVertex2f(x+0.05f, y-0.05f);
glVertex2f(x-0.05f, y-0.05f);
glVertex2f(x-0.05f, y+0.05f);
glEnd();
}
if(name=="TNTi")
{
glBegin(GL_POLYGON);
glColor3f(1.0f, 0.0f, 0.0f);
glVertex2f(x+0.05f, y+0.05f);
glVertex2f(x+0.05f, y-0.05f);
glVertex2f(x-0.05f, y-0.05f);
glVertex2f(x-0.05f, y+0.05f);
glEnd();
}
if(name=="explosioni")
{
glBegin(GL_POLYGON);
glColor3f(0.8f, 0.6f, 0.0f);
glVertex2f(x+0.05f, y+0.05f);
glVertex2f(x+0.05f, y-0.05f);
glVertex2f(x-0.05f, y-0.05f);
glVertex2f(x-0.05f, y+0.05f);
glEnd();
}
if(name=="fire")
{
wheel *wski=new wheel(x, y, 0.0f, 0.05f, 0.9f, 0.2f, 0.0f, 1);
delete wski;
}
if(name=="hostage")
{
wheel *wski=new wheel(x, y, 0.0f, 0.05f, 0.9f, 0.0f, 0.2f, 1);
delete wski;
}
if(name=="door")
{
glBegin(GL_POLYGON);
glColor3f(0.8f, 0.3f, 0.0f);
glVertex2f(x+0.05f, y+0.05f);
glVertex2f(x+0.05f, y-0.05f);
glVertex2f(x-0.05f, y-0.05f);
glVertex2f(x-0.05f, y+0.05f);
glEnd();
}
}
};
int TNT=0;//is the TNT set?
int TNTi=0;//as above, but for Player 2
int IMPULS;//is the wave on?
int IMPULSi;//as above, but for Player 2
float x;
float y;
//creating a table of objects_on_the_board - players, fires (enemies), walls, hostage(s), door
object_on_the_board board[20][20]={object_on_the_board("player"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board(), object_on_the_board("wall"), object_on_the_board("fire"), object_on_the_board("wall"), object_on_the_board("fire"), object_on_the_board("wall"), object_on_the_board("fire"), object_on_the_board(), object_on_the_board(), object_on_the_board(), object_on_the_board(), object_on_the_board(), object_on_the_board("fire"), object_on_the_board(), object_on_the_board(), object_on_the_board("fire"), object_on_the_board("wall"),
object_on_the_board(), object_on_the_board(), object_on_the_board("wall"), object_on_the_board(), object_on_the_board(), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board(), object_on_the_board("wall"),
object_on_the_board(), object_on_the_board("wall"), object_on_the_board(), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board(), object_on_the_board("wall"),
object_on_the_board(), object_on_the_board("wall"), object_on_the_board("fire"), object_on_the_board("fire"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board(), object_on_the_board("wall"),
object_on_the_board(), object_on_the_board(), object_on_the_board(), object_on_the_board(), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board(), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board(), object_on_the_board("wall"),
object_on_the_board(), object_on_the_board("wall"), object_on_the_board("fire"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("fire"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board(), object_on_the_board("fire"), object_on_the_board(), object_on_the_board("wall"),
object_on_the_board(), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("fire"), object_on_the_board("fire"), object_on_the_board("fire"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("fire"), object_on_the_board(), object_on_the_board(), object_on_the_board("wall"),
object_on_the_board(), object_on_the_board(), object_on_the_board("wall"), object_on_the_board("fire"), object_on_the_board("wall"), object_on_the_board("fire"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("fire"), object_on_the_board("fire"), object_on_the_board(), object_on_the_board("wall"),
object_on_the_board(), object_on_the_board(), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board(), object_on_the_board(), object_on_the_board(), object_on_the_board("fire"), object_on_the_board("wall"),
object_on_the_board(), object_on_the_board(), object_on_the_board("wall"), object_on_the_board("hostage"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board(), object_on_the_board("wall"), object_on_the_board(), object_on_the_board(), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"),
object_on_the_board("wall"), object_on_the_board("fire"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board(), object_on_the_board(), object_on_the_board(), object_on_the_board(), object_on_the_board(), object_on_the_board(), object_on_the_board("fire"), object_on_the_board("wall"),
object_on_the_board(), object_on_the_board("wall"), object_on_the_board(), object_on_the_board(), object_on_the_board(), object_on_the_board("wall"), object_on_the_board(), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board(), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"),
object_on_the_board(), object_on_the_board("fire"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("fire"), object_on_the_board(), object_on_the_board(), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"),
object_on_the_board(), object_on_the_board(), object_on_the_board("fire"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("fire"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board(), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"),
object_on_the_board(), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("fire"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board(), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("fire"), object_on_the_board("fire"), object_on_the_board("fire"), object_on_the_board("fire"), object_on_the_board("wall"),
object_on_the_board(), object_on_the_board("wall"), object_on_the_board("fire"), object_on_the_board(), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board(), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("fire"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"),
object_on_the_board(), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("fire"), object_on_the_board("wall"), object_on_the_board(), object_on_the_board(), object_on_the_board(), object_on_the_board(), object_on_the_board(), object_on_the_board(), object_on_the_board(), object_on_the_board("wall"), object_on_the_board("fire"), object_on_the_board("wall"), object_on_the_board(), object_on_the_board(), object_on_the_board(), object_on_the_board(), object_on_the_board("wall"),
object_on_the_board(), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("fire"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board(), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"),
object_on_the_board(), object_on_the_board(), object_on_the_board("wall"), object_on_the_board("fire"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("fire"), object_on_the_board("fire"), object_on_the_board("fire"), object_on_the_board("fire"), object_on_the_board("wall"),
object_on_the_board("playeri"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board(), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("fire"), object_on_the_board("wall"), object_on_the_board("fire"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("wall"), object_on_the_board("fire"), object_on_the_board(), object_on_the_board(), object_on_the_board("wall"), object_on_the_board("fire"), object_on_the_board("fire"), object_on_the_board("wall"), object_on_the_board("door")};
//board[0][1]=object_on_the_board("corridor");
float iksy[20]={-0.95f, -0.85f, -0.75f, -0.65f, -0.55f, -0.45f, -0.35f, -0.25f, -0.15f, -0.05f, 0.05f, 0.15f, 0.25f, 0.35f, 0.45f, 0.55f, 0.65f, 0.75f, 0.85f, 0.95f};
float igreki[20]={-0.95f, -0.85f, -0.75f, -0.65f, -0.55f, -0.45f, -0.35f, -0.25f, -0.15f, -0.05f, 0.05f, 0.15f, 0.25f, 0.35f, 0.45f, 0.55f, 0.65f, 0.75f, 0.85f, 0.95f};
int direction=3;
int directioni=4;
int lives=10;//Player 1 - how many lives?
int livesi=10;//Player 2 - how many lives?
int message1=0;//is Player 1 informed about his death?
int message2=0;//is Player 2 informed about his death?
int is_lifeguard=0;//Did Player 1 save the hostage?
int is_lifeguardi=0;//Did Player 2 save the hostage?
//the main function for WINAPI and OPENGL
int WINAPI WinMain (HINSTANCE hInstance,
                    HINSTANCE hPrevInstance,
                    LPSTR lpCmdLine,
                    int iCmdShow)
{
    WNDCLASS wc;
    HWND hWnd;
    HDC hDC;
    HGLRC hRC;        
    MSG msg;
    BOOL bQuit = FALSE;
    float theta = 0.0f;
	float thetai = 0.0f;
    /* register window class */
    wc.style = CS_OWNDC;
    wc.lpfnWndProc = WndProc;
    wc.cbClsExtra = 0;
    wc.cbWndExtra = 0;
    wc.hInstance = hInstance;
    wc.hIcon = LoadIcon (NULL, IDI_APPLICATION);
    wc.hCursor = LoadCursor (NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH) GetStockObject (BLACK_BRUSH);
    wc.lpszMenuName = NULL;
    wc.lpszClassName = "GLSample";
    RegisterClass (&wc);

    /* create main window */
    hWnd = CreateWindow (
      "GLSample", "Labyrinth", 
      WS_CAPTION | WS_POPUPWINDOW | WS_VISIBLE | WS_MAXIMIZEBOX,
      0, 0, 1280, 1024,//dimensions (they are different for every screen, so adjust them for yours - I haven't already learnt how to "read" the dimensions of the current screen - I doubt if it is possible, but perhaps it is)
      NULL, NULL, hInstance, NULL);

    /* enable OpenGL for the window */
    EnableOpenGL (hWnd, &hDC, &hRC);

    /* program main loop */
    while (!bQuit)
    {
        /* check for messages */
        if (PeekMessage (&msg, NULL, 0, 0, PM_REMOVE))
        {
            /* handle or dispatch messages */
            if (msg.message == WM_QUIT)
            {
                bQuit = TRUE;
            }
            else
            {
                TranslateMessage (&msg);
                DispatchMessage (&msg);
            }
        }
        else
        {
            /* OpenGL animation code goes here */

            glClearColor (0.0f, 0.0f, 0.0f, 0.0f);
            glClear (GL_COLOR_BUFFER_BIT);
            glPushMatrix ();
            if(!lives && message1==0)
            {
            int check_it_out=0;
            for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(board[i][j].name=="player")
            {
            check_it_out=1;
            }
            }
            }
            if(check_it_out==0)
            {
			MessageBox(NULL, "Player 1 killed!", "Problem...", MB_OK);
            message1=1;
        	}
            }
            if(!livesi && message2==0)
            {
            int check_it_out=0;
            for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(board[i][j].name=="playeri")
            {
            check_it_out=1;
            }
            }
            }
            if(check_it_out==0)
            {
			MessageBox(NULL, "Player 2 killed!", "Problem...", MB_OK);
            message2=1;
        	}
            }
            if(!lives && !livesi)
            {
            MessageBox(NULL, "All players are dead!", "Game over!", MB_OK);
            bQuit=true;
            }
            if(board[19][19].name!="door")
            {
            if(board[19][19].name=="player")
            {
            int check_it_out=0;
            for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(board[i][j].name=="fire")
            {
            check_it_out=1;
            }
            }
            }
            if(check_it_out==0)
            {
            if(is_lifeguard)
            {
            MessageBox(NULL, "Player 1 wins!\nHe saved the hostage!", "Game over!", MB_OK);
            bQuit=true;
        	}
        	else
        	{
        	//MessageBox(NULL, "Player 1 wins!", "Game over!", MB_OK);
            //bQuit=true;
            MessageBox(NULL, "You have to save the hostage!", "Don't cheat!", MB_OK);
            board[19][19].name="door";
            board[0][0].name="player";
        	}
			}
			else
			{
			MessageBox(NULL, "You have to kill all the monsters!", "Don't cheat!", MB_OK);
			board[19][19].name="door";
			board[0][0].name="player";
			}
            }
            else if(board[19][19].name=="playeri")
            {
            int check_it_out=0;
            for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(board[i][j].name=="fire")
            {
            check_it_out=1;
            }
            }
            }
            if(check_it_out==0)
            {
            if(is_lifeguardi)
            {
            MessageBox(NULL, "Player 2 wins!\nHe saved the hostage!", "Game over!", MB_OK);
            bQuit=true;
        	}
        	else
        	{
        	//MessageBox(NULL, "Player 2 wins!\n", "Game over!", MB_OK);
            //bQuit=true;
            MessageBox(NULL, "You have to save the hostage!", "Don't cheat!", MB_OK);
            board[19][19].name="door";
            board[19][0].name="playeri";
        	}
			}
			else
			{
			MessageBox(NULL, "You have to kill all the monsters!", "Don't cheat!", MB_OK);
			board[19][19].name="door";
			board[19][0].name="playeri";
			}
            }
            else
            {
            MessageBox(NULL, "No winner! The door is destroyed", "Game over!", MB_OK);
            bQuit=true;
            }
            
            }
            srand(time(NULL));
            for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            board[i][j].draw(iksy[i], igreki[j]);
            }
            }
            for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(board[i][j].name=="explosion")
            {
            board[i][j].name="corridor";
            }
            }
            }
            for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(board[i][j].name=="explosioni")
            {
            board[i][j].name="corridor";
            }
            }
            }
            for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(board[i][j].name=="fire")
            {
            int ruch=rand()%4+1;
            switch(ruch)
            {
            case 1:
            {
            if(i<19 && board[i+1][j].name!="wall" && board[i+1][j].name!="water" && board[i+1][j].name!="fire" && board[i+1][j].name!="door")
            {
            if(board[i+1][j].name!="TNT" || board[i+1][j].name!="TNTi")
            {
            board[i+1][j].name="fire";
            board[i][j].name="corridor";
			}
        	}
            break;
            }
            case 2:
            {
            if(i>0 && board[i-1][j].name!="wall" && board[i-1][j].name!="water" && board[i-1][j].name!="fire"  && board[i-1][j].name!="door" && board[i-1][j].name!="TNT" && board[i-1][j].name!="TNTi")
            {
            board[i-1][j].name="fire";
            board[i][j].name="corridor";
        	}
            break;
            }
            case 3:
            {
            if(j<19 && board[i][j+1].name!="wall" && board[i][j+1].name!="water" && board[i][j+1].name!="fire" && board[i][j+1].name!="door" && board[i][j+1].name!="TNT" && board[i][j+1].name!="TNTi")
            {
            board[i][j+1].name="fire";
            board[i][j].name="corridor";
        	}
            break;
            }
            case 4:
            {
            if(j>0 && board[i][j-1].name!="wall" && board[i][j-1].name!="water" && board[i][j-1].name!="fire" && board[i][j-1].name!="door" && board[i][j-1].name!="TNT" && board[i][j-1].name!="TNTi")
            {
            board[i][j-1].name="fire";
            board[i][j].name="corridor";
        	}
            break;
            }
            }
			}
			}
            }
            /*for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(board[i][j].name=="hostage")
            {
            int ruch=rand()%4+1;
            switch(ruch)
            {
            case 1:
            {
            if(i<19 && board[i+1][j].name!="wall" && board[i+1][j].name!="water"  && board[i+1][j].name!="fire"  && board[i+1][j].name!="player" && board[i+1][j].name!="playeri")
            {
        	if(board[i+1][j].name=="door")
			{
			bQuit=true;
			}
			board[i+1][j].name="hostage";
            board[i][j].name="corridor";
        	}
            break;
            }
            case 2:
            {
            if(i>0 && board[i-1][j].name!="wall" && board[i-1][j].name!="water" && board[i-1][j].name!="fire"  && board[i-1][j].name!="player" && board[i-1][j].name!="playeri")
            {
            board[i-1][j].name="hostage";
            board[i][j].name="corridor";
        	}
            break;
            }
            case 3:
            {
            if(j<19 && board[i][j+1].name!="wall" && board[i][j+1].name!="water"  && board[i][j+1].name!="fire" && board[i][j+1].name!="player" && board[i][j+1].name!="playeri")
            {
            if(board[i+1][j].name=="door")
			{
			bQuit=true;
			}
            board[i][j+1].name="hostage";
            board[i][j].name="corridor";
        	}
            break;
            }
            case 4:
            {
            if(j>0 && board[i][j-1].name!="wall" && board[i][j-1].name!="water"  && board[i][j-1].name!="fire" && board[i][j-1].name!="player" && board[i][j-1].name!="playeri")
            {
            board[i][j-1].name="hostage";
            board[i][j].name="corridor";
        	}
            break;
            }
            }
			}
			}
            }*/
            if(IMPULS==1)
            {
            for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(board[i][j].name=="player")
            {
            circle *wsk=new circle(iksy[i], igreki[j], 0.0f, (float)(((int)theta)%500)/4000.0f, 1.0f, 1.0f, 1.0f, 1);
            delete wsk;
			}
			}
            }
            }
            if(IMPULSi==1)
            {
            for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(board[i][j].name=="playeri")
            {
            circle *wsk=new circle(iksy[i], igreki[j], 0.0f, (float)(((int)thetai)%500)/4000.0f, 1.0f, 1.0f, 1.0f, 1);
            delete wsk;
			}
			}
            }
            }
            glPopMatrix ();

            SwapBuffers (hDC);
			if(IMPULS==1)
			{
            theta+=1.0f;
        	}
        	else
        	{
        	theta=0.0f;
        	}
        	if(IMPULSi==1)
			{
            thetai+=1.0f;
        	}
        	else
        	{
        	thetai=0.0f;
        	}
            Sleep (1);
        }
}
    /* shutdown OpenGL */
    DisableOpenGL (hWnd, hDC, hRC);

    /* destroy the window explicitly */
    DestroyWindow (hWnd);

    return msg.wParam;
}


/********************
 * Window Procedure
 *
 ********************/
//Here you deal with the signals from the user (keyboard, mouse, etc.)
LRESULT CALLBACK WndProc (HWND hWnd, UINT message,
                          WPARAM wParam, LPARAM lParam)
{

    switch (message)
    {
    case WM_CREATE:
        return 0;
    case WM_CLOSE:
        PostQuitMessage (0);
        return 0;

    case WM_DESTROY:
        return 0;

    case WM_KEYDOWN:
        switch (wParam)
        {
        case VK_ESCAPE:
            PostQuitMessage(0);
            return 0;
        case VK_UP://Player 1 moving up
        	{
        	for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(board[i][j].name=="player" && j<19 && board[i][j+1].name!="wall" && board[i][j+1].name!="playeri"  && board[i][j+1].name!="hostage"  && board[i][j+1].name!="fire")
            {
            board[i][j+1]=object_on_the_board("player");
            board[i][j]=object_on_the_board("corridor");
            goto done;
            }
            }
        	}
        	done:
        	direction=1;
        	break;
			}
        	case VK_DOWN://Player 1 moving down
        	{
        	for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(board[i][j].name=="player" && j>0 && board[i][j-1].name!="wall" && board[i][j-1].name!="playeri" && board[i][j-1].name!="hostage"  && board[i][j-1].name!="fire")
            {
            board[i][j-1]=object_on_the_board("player");
            board[i][j]=object_on_the_board("corridor");
            goto donei;
            }
            }
        	}
        	donei:
        	direction=2;
        	break;
        	}
        	case VK_RIGHT://Player 1 moving right
        	{
        	for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(board[i][j].name=="player" && i<19 && board[i+1][j].name!="wall" && board[i+1][j].name!="playeri" && board[i+1][j].name!="hostage"  && board[i+1][j].name!="fire")
            {
            board[i+1][j]=object_on_the_board("player");
            board[i][j]=object_on_the_board("corridor");
            goto doneii;
            }
            }
        	}
        	doneii:
        	direction=3;
        	break;
        	}
        	case VK_LEFT://Player 1 moving left
        	{
			for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(board[i][j].name=="player" && i>0 && board[i-1][j].name!="wall" && board[i-1][j].name!="playeri" && board[i-1][j].name!="hostage"  && board[i-1][j].name!="fire")
            {
            board[i-1][j]=object_on_the_board("player");
            board[i][j]=object_on_the_board("corridor");
            goto doneiii;
            }
            }
        	}
        	doneiii:
        	direction=4;
			break;
			}
        	case VK_RETURN://Player 1 putting/exploding TNT
        	{
        	if(TNT==0)
        	{
        	for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            switch(direction)
            {
            case 1:
			{
			if(board[i][j].name=="player" && j<19 && board[i][j+1].name!="wall")
            {
            board[i][j+1]=object_on_the_board("TNT");
            TNT=1;
            }
            break;
            }
            case 2:
            {
            if(board[i][j].name=="player" && j>0 && board[i][j-1].name!="wall")
            {
            board[i][j-1]=object_on_the_board("TNT");
            TNT=1;
            }
            break;
            }
            case 3:
            {
            if(board[i][j].name=="player" && i<19 && board[i+1][j].name!="wall")
            {
            board[i+1][j]=object_on_the_board("TNT");
            TNT=1;
            }
            break;
            }
            case 4:
            {
            if(board[i][j].name=="player" && i>0 && board[i-1][j].name!="wall")
            {
            board[i-1][j]=object_on_the_board("TNT");
            TNT=1;
            }
            break;
            }
            }
            }
        	}
        	}
        	else
        	{
        	for(int i=0; i<20; i++)
        	{
        	for(int j=0; j<20; j++)
        	{
        	if(board[i][j].name=="TNT")
        	{
        	board[i][j].name="explosion";
        	if(i>0)
        	{
        	board[i-1][j].name="explosion";
        	}
        	else
        	{
        	board[i+4][j].name="explosion";
        	}
        	if(i<19)
        	{
        	board[i+1][j].name="explosion";
        	}
        	else
        	{
        	board[i-4][j].name="explosion";
        	}
        	if(j>0)
        	{
        	board[i][j-1].name="explosion";
        	}
        	else
        	{
        	board[i][j+4].name="explosion";
        	}
        	if(j<19)
        	{
        	board[i][j+1].name="explosion";
        	}
        	else
        	{
        	board[i][j-4].name="explosion";
        	}
        	if(i>1)
        	{
        	board[i-2][j].name="explosion";
        	}
        	else
        	{
        	board[i+3][j].name="explosion";
        	}
        	if(i<18)
        	{
        	board[i+2][j].name="explosion";
        	}
        	else
        	{
        	board[i-3][j].name="explosion";
        	}
        	if(j>1)
        	{
        	board[i][j-2].name="explosion";
        	}
        	else
        	{
        	board[i][j+3].name="explosion";
        	}
        	if(j<18)
        	{
        	board[i][j+2].name="explosion";
        	}
        	else
        	{
        	board[i][j-3].name="explosion";
        	}
        	}
        	}
        	}
        	TNT=0;
        	}
        	break;
        	}
			case VK_SPACE://Player 1 putting water
			{
			for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            switch(direction)
            {
            case 1:
			{
			if(board[i][j].name=="player" && j<19 && board[i][j+1].name!="wall")
            {
            board[i][j+1]=object_on_the_board("water");
            }
            break;
            }
            case 2:
            {
            if(board[i][j].name=="player" && j>0 && board[i][j-1].name!="wall")
            {
            board[i][j-1]=object_on_the_board("water");
            }
            break;
            }
            case 3:
            {
            if(board[i][j].name=="player" && i<19 && board[i+1][j].name!="wall")
            {
            board[i+1][j]=object_on_the_board("water");
            }
            break;
            }
            case 4:
            {
            if(board[i][j].name=="player" && i>0 && board[i-1][j].name!="wall")
            {
            board[i-1][j]=object_on_the_board("water");
            }
            break;
            }
            }
            }
        	}
        	break;
			}
			case VK_SHIFT://Player 1 creating an electromagnetic wave
			{
			if(IMPULS==0)
			{
			IMPULS=1;
			}
			else
			{
			IMPULS=0;
			}
			break;
			}
			case VK_NUMPAD8://Player 2 moving up (NumLock must be on)
			{
			for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(board[i][j].name=="playeri" && j<19 && board[i][j+1].name!="wall" && board[i][j+1].name!="player" && board[i][j+1].name!="hostage" && board[i][j+1].name!="fire")
            {
            board[i][j+1]=object_on_the_board("playeri");
            board[i][j]=object_on_the_board("corridor");
            goto doneiiii;
            }
            }
        	}
        	doneiiii:
        	directioni=1;
        	break;
			}
			case VK_NUMPAD5://Player 2 moving down (NumLock must be on)
			{
			for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(board[i][j].name=="playeri" && j>0 && board[i][j-1].name!="wall" && board[i][j-1].name!="player" && board[i][j-1].name!="hostage" && board[i][j-1].name!="fire")
            {
            board[i][j-1]=object_on_the_board("playeri");
            board[i][j]=object_on_the_board("corridor");
            goto doneiiiii;
            }
            }
        	}
        	doneiiiii:
        	directioni=2;
        	break;
			}
			case VK_NUMPAD4://Player 2 moving left (NumLock must be on)
			{
			for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(board[i][j].name=="playeri" && i>0 && board[i-1][j].name!="wall" && board[i-1][j].name!="player" && board[i-1][j].name!="hostage" && board[i-1][j].name!="fire")
            {
            board[i-1][j]=object_on_the_board("playeri");
            board[i][j]=object_on_the_board("corridor");
            goto doneiiiiiii;
            }
            }
        	}
        	doneiiiiiii:
        	directioni=4;
			break;
			}
			case VK_NUMPAD6://Player 2 moving right (NumLock must be on)
			{
			for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(board[i][j].name=="playeri" && i<19 && board[i+1][j].name!="wall" && board[i+1][j].name!="player" && board[i+1][j].name!="hostage" && board[i+1][j].name!="fire")
            {
            board[i+1][j]=object_on_the_board("playeri");
            board[i][j]=object_on_the_board("corridor");
            goto doneiiiiii;
            }
            }
        	}
        	doneiiiiii:
        	directioni=3;
        	break;
			}
			case VK_NUMPAD0://Player 2 putting water (NumLock must be on)
			{
			for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            switch(directioni)
            {
            case 1:
			{
			if(board[i][j].name=="playeri" && j<19 && board[i][j+1].name!="wall")
            {
            board[i][j+1]=object_on_the_board("water");
            }
            break;
            }
            case 2:
            {
            if(board[i][j].name=="playeri" && j>0 && board[i][j-1].name!="wall")
            {
            board[i][j-1]=object_on_the_board("water");
            }
            break;
            }
            case 3:
            {
            if(board[i][j].name=="playeri" && i<19 && board[i+1][j].name!="wall")
            {
            board[i+1][j]=object_on_the_board("water");
            }
            break;
            }
            case 4:
            {
            if(board[i][j].name=="playeri" && i>0 && board[i-1][j].name!="wall")
            {
            board[i-1][j]=object_on_the_board("water");
            }
            break;
            }
            }
            }
        	}
        	break;
			}
			case VK_ADD://Player 2 putting TNT
			{
			if(TNTi==0)
        	{
        	for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            switch(directioni)
            {
            case 1:
			{
			if(board[i][j].name=="playeri" && j<19 && board[i][j+1].name!="wall")
            {
            board[i][j+1]=object_on_the_board("TNTi");
            TNTi=1;
            }
            break;
            }
            case 2:
            {
            if(board[i][j].name=="playeri" && j>0 && board[i][j-1].name!="wall")
            {
            board[i][j-1]=object_on_the_board("TNTi");
            TNTi=1;
            }
            break;
            }
            case 3:
            {
            if(board[i][j].name=="playeri" && i<19 && board[i+1][j].name!="wall")
            {
            board[i+1][j]=object_on_the_board("TNTi");
            TNTi=1;
            }
            break;
            }
            case 4:
            {
            if(board[i][j].name=="playeri" && i>0 && board[i-1][j].name!="wall")
            {
            board[i-1][j]=object_on_the_board("TNTi");
            TNTi=1;
            }
            break;
            }
            }
            }
        	}
        	}
        	else
        	{
        	for(int i=0; i<20; i++)
        	{
        	for(int j=0; j<20; j++)
        	{
        	if(board[i][j].name=="TNTi")
        	{
        	board[i][j].name="explosioni";
        	if(i>0)
        	{
        	board[i-1][j].name="explosioni";
        	}
        	else
        	{
        	board[i+4][j].name="explosioni";
        	}
        	if(i<19)
        	{
        	board[i+1][j].name="explosioni";
        	}
        	else
        	{
        	board[i-4][j].name="explosioni";
        	}
        	if(j>0)
        	{
        	board[i][j-1].name="explosioni";
        	}
        	else
        	{
        	board[i][j+4].name="explosioni";
        	}
        	if(j<19)
        	{
        	board[i][j+1].name="explosioni";
        	}
        	else
        	{
        	board[i][j-4].name="explosioni";
        	}
        	if(i>1)
        	{
        	board[i-2][j].name="explosioni";
        	}
        	else
        	{
        	board[i+3][j].name="explosioni";
        	}
        	if(i<18)
        	{
        	board[i+2][j].name="explosioni";
        	}
        	else
        	{
        	board[i-3][j].name="explosioni";
        	}
        	if(j>1)
        	{
        	board[i][j-2].name="explosioni";
        	}
        	else
        	{
        	board[i][j+3].name="explosioni";
        	}
        	if(j<18)
        	{
        	board[i][j+2].name="explosioni";
        	}
        	else
        	{
        	board[i][j-3].name="explosioni";
        	}
        	}
        	}
        	}
        	TNTi=0;
        	}
        	break;
			}
			case VK_SUBTRACT://Player 2 creating an electromagnetic wave
			{
			if(IMPULSi==0)
			{
			IMPULSi=1;
			}
			else
			{
			IMPULSi=0;
			}
			break;
			}
			case VK_CONTROL://Player 1 respawning
			{
			int control=0;
			for(int i=0; i<20; i++)
			{
			for(int j=0; j<20; j++)
			{
			if(board[i][j].name=="player")
			{
			control=1;
			goto check;
			}
			}
			}
			check:
			if(control==0 && lives)
			{
			board[0][0].name="player";
			direction=3;
			lives--;
			}
			break;
			}
			case VK_MULTIPLY://Player 2 respawning
			{
			int control=0;
			for(int i=0; i<20; i++)
			{
			for(int j=0; j<20; j++)
			{
			if(board[i][j].name=="playeri")
			{
			control=1;
			goto checkit;
			}
			}
			}
			checkit:
			if(control==0 && livesi)
			{
			directioni=4;
			board[19][0].name="playeri";
			livesi--;
			}
			break;
			}
			case VK_BACK://Player 1 saving the hostage
			{
			//MessageBox(NULL, "Backspace", "Klawisz", MB_OK);
			for(int i=0; i<20; i++)
			{
			for(int j=0; j<20; j++)
			{
			if(board[i][j].name=="player")
			{
			if((i>0 && board[i-1][j].name=="hostage") || (i<20 && board[i+1][j].name=="hostage") || (j>0 && board[i][j-1].name=="hostage") || (j<20 && board[i][j+1].name=="hostage"))
			{
			is_lifeguard=1;
			board[9][3].name="corridor";
			}
			}
			}
			}
			break;
			}
			case VK_DIVIDE://Player 2 saving the hostage
			{
			for(int i=0; i<20; i++)
			{
			for(int j=0; j<20; j++)
			{
			if(board[i][j].name=="playeri")
			{
			is_lifeguardi=1;
			board[3][9].name="corridor";
			}
			}
			}
			break;
			}
        }
        return 0;

    default:
        return DefWindowProc (hWnd, message, wParam, lParam);
    }
}


/*******************
 * Enable OpenGL
 *
 *******************/

void EnableOpenGL (HWND hWnd, HDC *hDC, HGLRC *hRC)
{
    PIXELFORMATDESCRIPTOR pfd;
    int iFormat;

    /* get the device context (DC) */
    *hDC = GetDC (hWnd);

    /* set the pixel format for the DC */
    ZeroMemory (&pfd, sizeof (pfd));
    pfd.nSize = sizeof (pfd);
    pfd.nVersion = 1;
    pfd.dwFlags = PFD_DRAW_TO_WINDOW | 
      PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER;
    pfd.iPixelType = PFD_TYPE_RGBA;
    pfd.cColorBits = 24;
    pfd.cDepthBits = 16;
    pfd.iLayerType = PFD_MAIN_PLANE;
    iFormat = ChoosePixelFormat (*hDC, &pfd);
    SetPixelFormat (*hDC, iFormat, &pfd);

    /* create and enable the render context (RC) */
    *hRC = wglCreateContext( *hDC );
    wglMakeCurrent( *hDC, *hRC );

}


/******************
 * Disable OpenGL
 *
 ******************/

void DisableOpenGL (HWND hWnd, HDC hDC, HGLRC hRC)
{
    wglMakeCurrent (NULL, NULL);
    wglDeleteContext (hRC);
    ReleaseDC (hWnd, hDC);
}
