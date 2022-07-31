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
 class kolo
{
float xs, ys, zs, r, R, G, B;
int tryb;
public:
kolo(float xsi, float ysi, float zsi, float ri, float Ri, float Gi, float Bi, int trybi)
{
xs=xsi;
ys=ysi;
zs=zsi;
r=ri;
R=Ri;
G=Gi;
B=Bi;
tryb=trybi;
switch(tryb)
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
class okrag
{
float xs, ys, zs, r, R, G, B;
int tryb;
public:
okrag(float xsi, float ysi, float zsi, float ri, float Ri, float Gi, float Bi, int trybi)
{
xs=xsi;
ys=ysi;
zs=zsi;
r=ri;
R=Ri;
G=Gi;
B=Bi;
tryb=trybi;
switch(tryb)
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
class obiekt_na_planszy
{
public:
string nazwa;
obiekt_na_planszy(string co_to_jest="sciezka")
{
nazwa=co_to_jest;
}
void narysuj(float x, float y)
{
if(nazwa=="gracz")
{
kolo *wski=new kolo(x, y, 0.0f, 0.05f, 0.0f, 0.0f, 1.0f, 1);
delete wski;
}
if(nazwa=="graczi")
{
kolo *wski=new kolo(x, y, 0.0f, 0.05f, 0.0f, 1.0f, 0.0f, 1);
delete wski;
}
if(nazwa=="murek")
{
glBegin(GL_POLYGON);
glColor3f(0.5f, 0.5f, 0.5f);
glVertex2f(x+0.05f, y+0.05f);
glVertex2f(x+0.05f, y-0.05f);
glVertex2f(x-0.05f, y-0.05f);
glVertex2f(x-0.05f, y+0.05f);
glEnd();
}
if(nazwa=="woda")
{
glBegin(GL_POLYGON);
glColor3f(0.0f, 0.5f, 0.5f);
glVertex2f(x+0.05f, y+0.05f);
glVertex2f(x+0.05f, y-0.05f);
glVertex2f(x-0.05f, y-0.05f);
glVertex2f(x-0.05f, y+0.05f);
glEnd();
}
if(nazwa=="TNT")
{
glBegin(GL_POLYGON);
glColor3f(1.0f, 0.0f, 0.0f);
glVertex2f(x+0.05f, y+0.05f);
glVertex2f(x+0.05f, y-0.05f);
glVertex2f(x-0.05f, y-0.05f);
glVertex2f(x-0.05f, y+0.05f);
glEnd();
}
if(nazwa=="wybuch")
{
glBegin(GL_POLYGON);
glColor3f(0.8f, 0.6f, 0.0f);
glVertex2f(x+0.05f, y+0.05f);
glVertex2f(x+0.05f, y-0.05f);
glVertex2f(x-0.05f, y-0.05f);
glVertex2f(x-0.05f, y+0.05f);
glEnd();
}
if(nazwa=="TNTi")
{
glBegin(GL_POLYGON);
glColor3f(1.0f, 0.0f, 0.0f);
glVertex2f(x+0.05f, y+0.05f);
glVertex2f(x+0.05f, y-0.05f);
glVertex2f(x-0.05f, y-0.05f);
glVertex2f(x-0.05f, y+0.05f);
glEnd();
}
if(nazwa=="wybuchi")
{
glBegin(GL_POLYGON);
glColor3f(0.8f, 0.6f, 0.0f);
glVertex2f(x+0.05f, y+0.05f);
glVertex2f(x+0.05f, y-0.05f);
glVertex2f(x-0.05f, y-0.05f);
glVertex2f(x-0.05f, y+0.05f);
glEnd();
}
if(nazwa=="plomien")
{
kolo *wski=new kolo(x, y, 0.0f, 0.05f, 0.9f, 0.2f, 0.0f, 1);
delete wski;
}
if(nazwa=="wiezien")
{
kolo *wski=new kolo(x, y, 0.0f, 0.05f, 0.9f, 0.0f, 0.2f, 1);
delete wski;
}
if(nazwa=="drzwi")
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
int TNT=0;
int IMPULS;
float x;
float y;
obiekt_na_planszy plansza[20][20]={obiekt_na_planszy("gracz"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"),
obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("plomien"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("plomien"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("plomien"),
obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"),
obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("wiezien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"),
obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("drzwi")};
//plansza[0][1]=obiekt_na_planszy("sciezka");
float iksy[20]={-0.95f, -0.85f, -0.75f, -0.65f, -0.55f, -0.45f, -0.35f, -0.25f, -0.15f, -0.05f, 0.05f, 0.15f, 0.25f, 0.35f, 0.45f, 0.55f, 0.65f, 0.75f, 0.85f, 0.95f};
float igreki[20]={-0.95f, -0.85f, -0.75f, -0.65f, -0.55f, -0.45f, -0.35f, -0.25f, -0.15f, -0.05f, 0.05f, 0.15f, 0.25f, 0.35f, 0.45f, 0.55f, 0.65f, 0.75f, 0.85f, 0.95f};
int kier=3;
////////////////////////////////////////////////////////////////////////////////////////////////////////
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
      "GLSample", "OpenGL Sample", 
      WS_CAPTION | WS_POPUPWINDOW | WS_VISIBLE | WS_MAXIMIZEBOX,
      0, 0, 1280, 1024,
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
            srand(time(NULL));
            for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            plansza[i][j].narysuj(iksy[i], igreki[j]);
            }
            }
            for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(plansza[i][j].nazwa=="wybuch")
            {
            plansza[i][j].nazwa="sciezka";
            }
            }
            }
            for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(plansza[i][j].nazwa=="plomien")
            {
            int ruch=rand()%4+1;
            switch(ruch)
            {
            case 1:
            {
            if(i<19 && plansza[i+1][j].nazwa!="murek" && plansza[i+1][j].nazwa!="woda" && plansza[i+1][j].nazwa!="plomien" && plansza[i+1][j].nazwa!="drzwi")
            {
            plansza[i+1][j].nazwa="plomien";
            plansza[i][j].nazwa="sciezka";
        	}
            break;
            }
            case 2:
            {
            if(i>0 && plansza[i-1][j].nazwa!="murek" && plansza[i-1][j].nazwa!="woda" && plansza[i-1][j].nazwa!="plomien"  && plansza[i-1][j].nazwa!="drzwi")
            {
            plansza[i-1][j].nazwa="plomien";
            plansza[i][j].nazwa="sciezka";
        	}
            break;
            }
            case 3:
            {
            if(j<19 && plansza[i][j+1].nazwa!="murek" && plansza[i][j+1].nazwa!="woda" && plansza[i][j+1].nazwa!="plomien" && plansza[i][j+1].nazwa!="drzwi")
            {
            plansza[i][j+1].nazwa="plomien";
            plansza[i][j].nazwa="sciezka";
        	}
            break;
            }
            case 4:
            {
            if(j>0 && plansza[i][j-1].nazwa!="murek" && plansza[i][j-1].nazwa!="woda" && plansza[i][j-1].nazwa!="plomien" && plansza[i][j-1].nazwa!="drzwi")
            {
            plansza[i][j-1].nazwa="plomien";
            plansza[i][j].nazwa="sciezka";
        	}
            break;
            }
            }
			}
			}
            }
            for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(plansza[i][j].nazwa=="wiezien")
            {
            int ruch=rand()%4+1;
            switch(ruch)
            {
            case 1:
            {
            if(i<19 && plansza[i+1][j].nazwa!="murek" && plansza[i+1][j].nazwa!="woda"  && plansza[i+1][j].nazwa!="plomien"  && plansza[i+1][j].nazwa!="gracz" && plansza[i+1][j].nazwa!="graczi")
            {
        	if(plansza[i+1][j].nazwa=="drzwi")
			{
			bQuit=true;
			}
			plansza[i+1][j].nazwa="wiezien";
            plansza[i][j].nazwa="sciezka";
        	}
            break;
            }
            case 2:
            {
            if(i>0 && plansza[i-1][j].nazwa!="murek" && plansza[i-1][j].nazwa!="woda" && plansza[i-1][j].nazwa!="plomien"  && plansza[i-1][j].nazwa!="gracz" && plansza[i-1][j].nazwa!="graczi")
            {
            plansza[i-1][j].nazwa="wiezien";
            plansza[i][j].nazwa="sciezka";
        	}
            break;
            }
            case 3:
            {
            if(j<19 && plansza[i][j+1].nazwa!="murek" && plansza[i][j+1].nazwa!="woda"  && plansza[i][j+1].nazwa!="plomien" && plansza[i][j+1].nazwa!="gracz" && plansza[i][j+1].nazwa!="graczi")
            {
            if(plansza[i+1][j].nazwa=="drzwi")
			{
			bQuit=true;
			}
            plansza[i][j+1].nazwa="wiezien";
            plansza[i][j].nazwa="sciezka";
        	}
            break;
            }
            case 4:
            {
            if(j>0 && plansza[i][j-1].nazwa!="murek" && plansza[i][j-1].nazwa!="woda"  && plansza[i][j-1].nazwa!="plomien" && plansza[i][j-1].nazwa!="gracz" && plansza[i][j-1].nazwa!="graczi")
            {
            plansza[i][j-1].nazwa="wiezien";
            plansza[i][j].nazwa="sciezka";
        	}
            break;
            }
            }
			}
			}
            }
            if(IMPULS==1)
            {
            for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(plansza[i][j].nazwa=="gracz")
            {
            okrag *wsk=new okrag(iksy[i], igreki[j], 0.0f, (float)(((int)theta)%500)/4000.0f, 1.0f, 1.0f, 1.0f, 1);
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
        case VK_UP:
        	{
        	for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(plansza[i][j].nazwa=="gracz" && j<19 && plansza[i][j+1].nazwa!="murek" && plansza[i][j+1].nazwa!="graczi"  && plansza[i][j+1].nazwa!="wiezien"  && plansza[i][j+1].nazwa!="plomien")
            {
            plansza[i][j+1]=obiekt_na_planszy("gracz");
            plansza[i][j]=obiekt_na_planszy("sciezka");
            goto done;
            }
            }
        	}
        	done:
        	kier=1;
        	break;
			}
        	case VK_DOWN:
        	{
        	for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(plansza[i][j].nazwa=="gracz" && j>0 && plansza[i][j-1].nazwa!="murek" && plansza[i][j-1].nazwa!="graczi" && plansza[i][j-1].nazwa!="wiezien"  && plansza[i][j-1].nazwa!="plomien")
            {
            plansza[i][j-1]=obiekt_na_planszy("gracz");
            plansza[i][j]=obiekt_na_planszy("sciezka");
            goto donei;
            }
            }
        	}
        	donei:
        	kier=2;
        	break;
        	}
        	case VK_RIGHT:
        	{
        	for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(plansza[i][j].nazwa=="gracz" && i<19 && plansza[i+1][j].nazwa!="murek" && plansza[i+1][j].nazwa!="graczi"  && plansza[i+1][j].nazwa!="wiezien"  && plansza[i+1][j].nazwa!="plomien")
            {
            plansza[i+1][j]=obiekt_na_planszy("gracz");
            plansza[i][j]=obiekt_na_planszy("sciezka");
            goto doneii;
            }
            }
        	}
        	doneii:
        	kier=3;
        	break;
        	}
        	case VK_LEFT:
        	{
			for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(plansza[i][j].nazwa=="gracz" && i>0 && plansza[i-1][j].nazwa!="murek" && plansza[i-1][j].nazwa!="graczi" && plansza[i-1][j].nazwa!="wiezien"  && plansza[i-1][j].nazwa!="plomien")
            {
            plansza[i-1][j]=obiekt_na_planszy("gracz");
            plansza[i][j]=obiekt_na_planszy("sciezka");
            goto doneiii;
            }
            }
        	}
        	doneiii:
        	kier=4;
			break;
			}
        	case VK_RETURN:
        	{
        	if(TNT==0)
        	{
        	for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            switch(kier)
            {
            case 1:
			{
			if(plansza[i][j].nazwa=="gracz" && j<19 && plansza[i][j+1].nazwa!="murek")
            {
            plansza[i][j+1]=obiekt_na_planszy("TNT");
            TNT=1;
            }
            break;
            }
            case 2:
            {
            if(plansza[i][j].nazwa=="gracz" && j>0 && plansza[i][j-1].nazwa!="murek")
            {
            plansza[i][j-1]=obiekt_na_planszy("TNT");
            TNT=1;
            }
            break;
            }
            case 3:
            {
            if(plansza[i][j].nazwa=="gracz" && i<19 && plansza[i+1][j].nazwa!="murek")
            {
            plansza[i+1][j]=obiekt_na_planszy("TNT");
            TNT=1;
            }
            break;
            }
            case 4:
            {
            if(plansza[i][j].nazwa=="gracz" && i>0 && plansza[i-1][j].nazwa!="murek")
            {
            plansza[i-1][j]=obiekt_na_planszy("TNT");
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
        	if(plansza[i][j].nazwa=="TNT")
        	{
        	plansza[i][j].nazwa="wybuch";
        	if(i>0)
        	{
        	plansza[i-1][j].nazwa="wybuch";
        	}
        	else
        	{
        	plansza[i+4][j].nazwa="wybuch";
        	}
        	if(i<19)
        	{
        	plansza[i+1][j].nazwa="wybuch";
        	}
        	else
        	{
        	plansza[i-4][j].nazwa="wybuch";
        	}
        	if(j>0)
        	{
        	plansza[i][j-1].nazwa="wybuch";
        	}
        	else
        	{
        	plansza[i][j+4].nazwa="wybuch";
        	}
        	if(j<19)
        	{
        	plansza[i][j+1].nazwa="wybuch";
        	}
        	else
        	{
        	plansza[i][j-4].nazwa="wybuch";
        	}
        	if(i>1)
        	{
        	plansza[i-2][j].nazwa="wybuch";
        	}
        	else
        	{
        	plansza[i+3][j].nazwa="wybuch";
        	}
        	if(i<18)
        	{
        	plansza[i+2][j].nazwa="wybuch";
        	}
        	else
        	{
        	plansza[i-3][j].nazwa="wybuch";
        	}
        	if(j>1)
        	{
        	plansza[i][j-2].nazwa="wybuch";
        	}
        	else
        	{
        	plansza[i][j+3].nazwa="wybuch";
        	}
        	if(j<18)
        	{
        	plansza[i][j+2].nazwa="wybuch";
        	}
        	else
        	{
        	plansza[i][j-3].nazwa="wybuch";
        	}
        	}
        	}
        	}
        	TNT=0;
        	}
        	break;
        	}
			case VK_SPACE:
			{
			for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            switch(kier)
            {
            case 1:
			{
			if(plansza[i][j].nazwa=="gracz" && j<19 && plansza[i][j+1].nazwa!="murek")
            {
            plansza[i][j+1]=obiekt_na_planszy("woda");
            }
            break;
            }
            case 2:
            {
            if(plansza[i][j].nazwa=="gracz" && j>0 && plansza[i][j-1].nazwa!="murek")
            {
            plansza[i][j-1]=obiekt_na_planszy("woda");
            }
            break;
            }
            case 3:
            {
            if(plansza[i][j].nazwa=="gracz" && i<19 && plansza[i+1][j].nazwa!="murek")
            {
            plansza[i+1][j]=obiekt_na_planszy("woda");
            }
            break;
            }
            case 4:
            {
            if(plansza[i][j].nazwa=="gracz" && i>0 && plansza[i-1][j].nazwa!="murek")
            {
            plansza[i-1][j]=obiekt_na_planszy("woda");
            }
            break;
            }
            }
            }
        	}
        	break;
			}
			case VK_SHIFT:
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
			case VK_CONTROL:
			{
			int control=0;
			for(int i=0; i<20; i++)
			{
			for(int j=0; j<20; j++)
			{
			if(plansza[i][j].nazwa=="gracz")
			{
			control=1;
			goto check;
			}
			}
			}
			check:
			if(control==0)
			{
			plansza[0][0].nazwa="gracz";
			kier=3;
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
