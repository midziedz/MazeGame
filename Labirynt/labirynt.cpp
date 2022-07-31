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
 //-----------------------------------------------------
 class tekst_duze_litery
{
public:
string tekscik;
float x, y, size, R, G, B, odst;
tekst_duze_litery(string texti="BRAK TEKSTU!", float xi=-1.0f, float yi=-1.0f, float sizei=0.1f, float r=0.0f, float g=0.0f, float b=0.0f)
{
tekscik=texti;
x=xi;
y=yi;
size=sizei;
R=r;
G=g;
B=b;
odst=sizei/2.0f+0.02f;
}
void wypisz()
{
char sign;
for(int i=0; i<tekscik.length(); i++)
{
sign=tekscik.at(i);
glBegin(GL_POLYGON);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(x+odst*i-size/4.0f, y-size/4.0f);
glVertex2f(x+odst*i-size/4.0f, y+size*5.0f/4.0f);
glVertex2f(x+odst*i+size/4.0f*3.0f, y+size*5.0f/4.0f);
glVertex2f(x+odst*i+size/4.0f*3.0f, y-size/4.0f);
glEnd();
switch(sign)
{
case 'A':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i+size/2.0f, y+size/2.0f);
glVertex2f(x+odst*i, y+size/2.0f);
glEnd();
break;
}
case '¥':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i+size/2.0f, y+size/2.0f);
glVertex2f(x+odst*i, y+size/2.0f);
glVertex2f(x+odst*i+size/2.0f, y+size/2.0f);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i+size/4.0f, y-size/4.0f);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i+size/2.0f, y+size/2.0f);
glVertex2f(x+odst*i, y+size/2.0f);
glEnd();
break;
}
case 'B':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i+size/2.0f, y+size/2.0f);
glVertex2f(x+odst*i, y+size/2.0f);
glEnd();
break;
}
case 'C':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i+size/2.0f, y);
glEnd();
break;
}
case 'Æ':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i+size/2.0f, y);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i+size/4.0f, y+size);
glVertex2f(x+odst*i+size/4.0f, y+size/4.0f*5.0f);
glEnd();
break;
}
case 'D':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i+size/4.0f*1.0f, y+size);
glVertex2f(x+odst*i+size/2.0f, y+size/4.0f*3.0f);
glVertex2f(x+odst*i+size/2.0f, y+size/4.0f);
glVertex2f(x+odst*i+size/4.0f, y);
glVertex2f(x+odst*i, y);
glEnd();
break;
}
case 'E':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i, y+size/2.0f);
glVertex2f(x+odst*i+size/2.0f, y+size/2.0f);
glVertex2f(x+odst*i, y+size/2.0f);
glEnd();
break;
}
case 'Ê':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i, y+size/2.0f);
glVertex2f(x+odst*i+size/2.0f, y+size/2.0f);
glVertex2f(x+odst*i, y+size/2.0f);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i+size/2.0f, y-size/4.0f);
glVertex2f(x+odst*i+size/2.0f, y);
glEnd();
break;
}
case 'F':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i, y+size/2.0f);
glVertex2f(x+odst*i+size/2.0f, y+size/2.0f);
glVertex2f(x+odst*i, y+size/2.0f);
glEnd();
break;
}
case 'G':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i+size/2.0f, y+size/2.0f);
glVertex2f(x+odst*i+size/4.0f, y+size/2.0f);
glVertex2f(x+odst*i+size/2.0f, y+size/2.0f);
glVertex2f(x+odst*i+size/2.0f, y);
glEnd();
break;
}
case 'H':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i, y+size/2.0f);
glVertex2f(x+odst*i+size/2.0f, y+size/2.0f);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i+size/2.0f, y+size/2.0f);
glVertex2f(x+odst*i, y+size/2.0f);
glEnd();
break;
}
case 'I':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i+size/4.0f, y);
glVertex2f(x+odst*i+size/4.0f, y+size);
glEnd();
break;
}
case 'J':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i+size/4.0f, y+size);
glVertex2f(x+odst*i+size/4.0f, y-size/2.0f);
glVertex2f(x+odst*i, y-size/2.0f);
glVertex2f(x+odst*i+size/4.0f, y-size/2.0f);
glEnd();
break;
}
case 'K':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i, y+size/2.0f);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i, y+size/2.0f);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i, y+size/2.0f);
glEnd();
break;
}
case 'L':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i, y);
glEnd();
break;
}
case '£':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i, y+size/2.0f);
glVertex2f(x+odst*i+size/4.0f, y+size/2.0f);
glVertex2f(x+odst*i, y+size/2.0f);
glEnd();
break;
}
case 'M':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i+size/4.0f, y+size);
glVertex2f(x+odst*i+size/4.0f, y+size/4.0f*3.0f);
glVertex2f(x+odst*i+size/4.0f, y+size);
glVertex2f(x+odst*i, y+size);
glEnd();
break;
}
case 'N':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i, y+size);
glEnd();
break;
}
case 'Ñ':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i, y+size);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i+size/4.0f, y+size);
glVertex2f(x+odst*i+size/4.0f, y+size/4.0f*5.0f);
glEnd();
break;
}
case 'O':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i, y);
glEnd();
break;
}
case 'Ó':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i, y);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i+size/4.0f, y+size);
glVertex2f(x+odst*i+size/4.0f, y+size/4.0f*5.0f);
glEnd();
break;
}
case 'P':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i+size/4.0f*1.0f, y+size);
glVertex2f(x+odst*i+size/2.0f, y+size/4.0f*3.0f);
glVertex2f(x+odst*i+size/2.0f, y+size/2.0f);
glVertex2f(x+odst*i+size/4.0f, y+size/4.0f);
glVertex2f(x+odst*i, y+size/4.0f);
glVertex2f(x+odst*i, y);
glEnd();
break;
}
case 'Q':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i+size/4.0f*3.0f, y-size/4.0f);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i, y);
glEnd();
break;
}
case 'R':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i+size/4.0f*1.0f, y+size);
glVertex2f(x+odst*i+size/2.0f, y+size/4.0f*3.0f);
glVertex2f(x+odst*i+size/2.0f, y+size/2.0f);
glVertex2f(x+odst*i+size/4.0f, y+size/4.0f);
glVertex2f(x+odst*i, y+size/4.0f);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i, y+size/4.0f);
glVertex2f(x+odst*i, y);
glEnd();
break;
}
case 'S':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i, y+size/2.0f);
glVertex2f(x+odst*i+size/2.0f, y+size/2.0f);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i+size/2.0f, y+size/2.0f);
glVertex2f(x+odst*i, y+size/2.0f);
glVertex2f(x+odst*i, y+size);
glEnd();
break;
}
case 'Œ':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i, y+size/2.0f);
glVertex2f(x+odst*i+size/2.0f, y+size/2.0f);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i+size/2.0f, y+size/2.0f);
glVertex2f(x+odst*i, y+size/2.0f);
glVertex2f(x+odst*i, y+size);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i+size/4.0f, y+size);
glVertex2f(x+odst*i+size/4.0f, y+size/4.0f*5.0f);
glEnd();
break;
}
case 'T':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i+size/4.0f, y);
glVertex2f(x+odst*i+size/4.0f, y+size);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i+size/4.0f, y+size);
glEnd();
break;
}
case 'U':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i, y);
glEnd();
break;
}
case 'V':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i+size/4.0f, y);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i+size/4.0f, y);
glEnd();
break;
}
case 'W':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i+size/4.0f, y);
glVertex2f(x+odst*i+size/4.0f, y+size/4.0f);
glVertex2f(x+odst*i+size/4.0f, y);
glVertex2f(x+odst*i, y);
glEnd();
break;
}
case 'X':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i+size/4.0f, y+size/2.0f);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i+size/4.0f, y+size/2.0f);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i+size/4.0f, y+size/2.0f);
glEnd();
break;
}
case 'Y':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i+size/4.0f, y+size/2.0f);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i+size/4.0f, y+size/2.0f);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i+size/4.0f, y+size/2.0f);
glVertex2f(x+odst*i+size/4.0f, y);
glEnd();
break;
}
case 'Z':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i+size/2.0f, y+size);
glEnd();
break;
}
case '¯':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i+size/2.0f, y+size);
glEnd();
glBegin(GL_POINTS);
glColor3f(R, G, B);
glVertex2f(x+odst*i+size/4.0f, y+size/4.0f*5.0f);
glEnd();
break;
}
case '':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i+size/2.0f, y);
glVertex2f(x+odst*i, y);
glVertex2f(x+odst*i+size/2.0f, y+size);
glEnd();
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i+size/4.0f, y+size);
glVertex2f(x+odst*i+size/4.0f, y+size/4.0f*5.0f);
glEnd();
break;
}
case '!':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i+size/4.0f, y+size);
glVertex2f(x+odst*i+size/4.0f, y+size/4.0f);
glEnd();
glBegin(GL_POINTS);
glVertex2f(x+odst*i+size/4.0f, y);
glEnd();
break;
}
case '?':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i, y+size/2.0f);
glVertex2f(x+odst*i, y+size);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i+size/2.0f, y+size/2.0f);
glVertex2f(x+odst*i+size/4.0f, y+size/2.0f);
glVertex2f(x+odst*i+size/4.0f, y+size/4.0f);
glVertex2f(x+odst*i+size/4.0f, y+size/2.0f);
glVertex2f(x+odst*i+size/2.0f, y+size/2.0f);
glVertex2f(x+odst*i+size/2.0f, y+size);
glVertex2f(x+odst*i, y+size);
glEnd();
glBegin(GL_POINTS);
glVertex2f(x+odst*i+size/4.0f, y);
glEnd();
break;
}
case '.':
{
glBegin(GL_POINTS);
glColor3f(R, G, B);
glVertex2f(x+odst*i+size/4.0f, y);
glEnd();
break;
}
case ',':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i+size/4.0f, y);
glVertex2f(x+odst*i+size/4.0f, y-size/4.0f);
glEnd();
break;
}
case '-':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i, y+size/2.0f);
glVertex2f(x+odst*i+size/2.0f, y+size/2.0f);
glEnd();
break;
}
case '\'':
{
glBegin(GL_LINE_LOOP);
glColor3f(R, G, B);
glVertex2f(x+odst*i+size/4.0f, y+size);
glVertex2f(x+odst*i+size/4.0f, y+size/4.0f*3.0f);
glEnd();
break;
}
}
}
}
void zmien_kolor_tekstu(float r, float g, float b)
{
R=r;
G=g;
B=b;
}
void zmien_tekst(string na_co_zmienic)
{
tekscik=na_co_zmienic;
}
};
//-----------------------------------------------------------------
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
if(nazwa=="robot")
{
kolo *wski=new kolo(x, y, 0.0f, 0.05f, 0.2f, 0.2f, 0.2f, 1);
delete wski;
}
}
};
int TNT=0;
int TNTi=0;
int IMPULS;
int IMPULSi;
float x;
float y;
obiekt_na_planszy levelI[20][20]={obiekt_na_planszy("gracz"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"),
obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"),
obiekt_na_planszy("graczi"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("drzwi")};
obiekt_na_planszy levelII[20][20]={obiekt_na_planszy("gracz"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("robot"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("robot"), obiekt_na_planszy("murek"), obiekt_na_planszy("robot"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("wiezien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"),
obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("robot"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("robot"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"),
obiekt_na_planszy("graczi"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("drzwi")};
obiekt_na_planszy plansza[20][20]={obiekt_na_planszy("gracz"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"),
obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"),
obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"),
obiekt_na_planszy("graczi"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy(), obiekt_na_planszy(), obiekt_na_planszy("murek"), obiekt_na_planszy("plomien"), obiekt_na_planszy("plomien"), obiekt_na_planszy("murek"), obiekt_na_planszy("drzwi")};
//plansza[0][1]=obiekt_na_planszy("sciezka");
float iksy[20]={-0.95f, -0.85f, -0.75f, -0.65f, -0.55f, -0.45f, -0.35f, -0.25f, -0.15f, -0.05f, 0.05f, 0.15f, 0.25f, 0.35f, 0.45f, 0.55f, 0.65f, 0.75f, 0.85f, 0.95f};
float igreki[20]={-0.95f, -0.85f, -0.75f, -0.65f, -0.55f, -0.45f, -0.35f, -0.25f, -0.15f, -0.05f, 0.05f, 0.15f, 0.25f, 0.35f, 0.45f, 0.55f, 0.65f, 0.75f, 0.85f, 0.95f};
int kier=3;
int kieri=4;
int zycia=10;
int zyciai=10;
int wiad1=0;
int wiad2=0;
int czy_ratownik=0;
int czy_ratowniki=0;
int czy_mozna_sie_ruszac=100;
string intro("-GDZIE JESTEŒMY?");
string introi("-NIE WIEM...");
string introii("-GDZIE KASIA?");
string introiii("-O, NIE!");
string introiiii("-RATUNKU!!!");
string introiiiii("-GDZIE JESTEŒ?");
string introiiiiii("-NIE WIEM! JESTEM UWIÊZIONA!");
string introiiiiiii("-GDZIE TERAZ?");
string introiiiiiiii("-DO WYJŒCIA!!!");
string introiiiiiiiii("-TO ZNACZY GDZIE?");
string ratunek_nadszedl("-ZEMDLA£A!");
string ratunek_nadszedli("-WE J¥ NA RÊCE I CHOD!");
string ratunek_nadszedlii("-OK!");
tekst_duze_litery wiadomosc(intro, -0.95f, 0.95f, 0.05f, 0.0f, 0.0f, 1.0f);
int level=1;
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
            if(IMPULS==1)
            {
            for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(plansza[i][j].nazwa=="gracz")
            {
            if(i<19 && plansza[i+1][j].nazwa=="robot")
            {
            plansza[i+1][j].nazwa="wybuch";
            }
            if(i>0 && plansza[i-1][j].nazwa=="robot")
            {
            plansza[i-1][j].nazwa="wybuch";
            }
            if(j<19 && plansza[i][j+1].nazwa=="robot")
            {
            plansza[i][j+1].nazwa="wybuch";
            }
            if(j>0 && plansza[i][j-1].nazwa=="robot")
            {
            plansza[i][j-1].nazwa="wybuch";
            }
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
            if(plansza[i][j].nazwa=="graczi")
            {
            if(i<19 && plansza[i+1][j].nazwa=="robot")
            {
            plansza[i+1][j].nazwa="wybuchi";
            }
            if(i>0 && plansza[i-1][j].nazwa=="robot")
            {
            plansza[i-1][j].nazwa="wybuchi";
            }
            if(j<19 && plansza[i][j+1].nazwa=="robot")
            {
            plansza[i][j+1].nazwa="wybuchi";
            }
            if(j>0 && plansza[i][j-1].nazwa=="robot")
            {
            plansza[i][j-1].nazwa="wybuchi";
            }
            }
            }
            }
            }
            if(!zycia && wiad1==0)
            {
            int sprawdz=0;
            for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(plansza[i][j].nazwa=="gracz")
            {
            sprawdz=1;
            }
            }
            }
            if(sprawdz==0)
            {
			MessageBox(NULL, "Gracz nr 1 wyeliminowany!", "Problem...", MB_OK);
            wiad1=1;
        	}
            }
            if(!zyciai && wiad2==0)
            {
            int sprawdz=0;
            for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(plansza[i][j].nazwa=="graczi")
            {
            sprawdz=1;
            }
            }
            }
            if(sprawdz==0)
            {
			MessageBox(NULL, "Gracz nr 2 wyeliminowany!", "Problem...", MB_OK);
            wiad2=1;
        	}
            }
            if(!zycia && !zyciai)
            {
            MessageBox(NULL, "Nikt nie prze¿y³!", "Koniec gry!", MB_OK);
            bQuit=true;
            }
            if(plansza[19][19].nazwa!="drzwi")
            {
            if(plansza[19][19].nazwa=="gracz")
            {
            int sprawdz=0;
            for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(plansza[i][j].nazwa=="plomien")
            {
            sprawdz=1;
            }
            }
            }
            if(sprawdz==0)
            {
            if(level==1 || czy_ratownik)
            {
            level++;
            MessageBox(NULL, level==1?"Wygrywa : Gracz nr 1!":"Wygrywa: Gracz nr 1!\nUratowa³ kole¿ankê!", level==1?"Poziom wy¿ej!":"Koniec gry!", MB_OK);
            for(int l=0; l<20; l++)
            {
            for(int a=0; a<20; a++)
            {
            if(level==2)
            {
            plansza[l][a]=levelII[l][a];
            }
            if(level==3)
            {
            bQuit=true;
            }
            }
            }
            zycia=10;
        	zyciai=10;
        	kier=3;
        	kieri=4;
        	}
        	else if(level==1 || !czy_ratowniki)
        	{
        	//MessageBox(NULL, "Wygrywa: Gracz nr 1!", "Koniec gry!", MB_OK);
            //bQuit=true;
            MessageBox(NULL, "Musisz uratowaæ kole¿ankê!", "Nie oszukuj!", MB_OK);
            plansza[0][0].nazwa="gracz";
        	}
        	else
        	{
        	level++;
            MessageBox(NULL, level==1?"Wygrywa : Gracz nr 1!":"Wygrywa: Gracz nr 1!\nKole¿anka uratowana, ale nie przez niego!", level==1?"Poziom wy¿ej!":"Koniec gry!", MB_OK);
            for(int l=0; l<20; l++)
            {
            for(int a=0; a<20; a++)
            {
            if(level==2)
            {
            plansza[l][a]=levelII[l][a];
            }
            if(level==3)
            {
            bQuit=true;
            }
            }
            }
            zycia=10;
        	zyciai=10;
        	kier=3;
        	kieri=4;
        	}
			}
			else
			{
			MessageBox(NULL, "Musisz zabiæ wszystkie potwory!", "Nie oszukuj!", MB_OK);
			plansza[19][19].nazwa="drzwi";
			plansza[0][0].nazwa="gracz";
			}
            }
            else if(plansza[19][19].nazwa=="graczi")
            {
            int sprawdz=0;
            for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(plansza[i][j].nazwa=="plomien")
            {
            sprawdz=1;
            }
            }
            }
            if(sprawdz==0)
            {
            if(level==1 || czy_ratowniki)
            {
            level++;
            MessageBox(NULL, level==1?"Wygrywa : Gracz nr 2!":"Wygrywa: Gracz nr 2!\nUratowa³ kole¿ankê!", level==1?"Poziom wy¿ej!":"Koniec gry!", MB_OK);
            for(int l=0; l<20; l++)
            {
            for(int a=0; a<20; a++)
            {
            if(level==2)
            {
            plansza[l][a]=levelII[l][a];
            }
            if(level==3)
            {
            bQuit=true;
            }
            }
            }
            zycia=10;
        	zyciai=10;
        	kier=3;
        	kieri=4;
        	}
        	else if(level==1 || !czy_ratownik)
        	{
        	//MessageBox(NULL, "Wygrywa: Gracz nr 2!", "Koniec gry!", MB_OK);
            //bQuit=true;
            MessageBox(NULL, "Musisz uratowaæ kole¿ankê!", "Nie oszukuj!", MB_OK);
            plansza[19][0].nazwa="graczi";
        	}
        	else
        	{
        	level++;
            MessageBox(NULL, level==1?"Wygrywa : Gracz nr 2!":"Wygrywa: Gracz nr 2!\nKole¿anka uratowana, ale nie przez niego!", level==1?"Poziom wy¿ej!":"Koniec gry!", MB_OK);
            for(int l=0; l<20; l++)
            {
            for(int a=0; a<20; a++)
            {
            if(level==2)
            {
            plansza[l][a]=levelII[l][a];
            }
            if(level==3)
            {
            bQuit=true;
            }
            }
            }
            zycia=10;
        	zyciai=10;
        	kier=3;
        	kieri=4;
        	}
			}
			else
			{
			MessageBox(NULL, "Musisz zabiæ wszystkie potwory!", "Nie oszukuj!", MB_OK);
			plansza[19][19].nazwa="drzwi";
			plansza[19][0].nazwa="graczi";
			}
            }
            else
            {
            MessageBox(NULL, "Brak zwyciêzcy! Drzwi zosta³y zniszczone!", level==1?"Poziom wy¿ej!":"Koniec gry!", MB_OK);
            bQuit=true;
            }
            }
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
            if(plansza[i][j].nazwa=="wybuchi")
            {
            plansza[i][j].nazwa="sciezka";
            }
            }
            }
        	if(czy_mozna_sie_ruszac==0)
        	{
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
            if(i<19 && plansza[i+1][j].nazwa!="murek" && plansza[i+1][j].nazwa!="woda" && plansza[i+1][j].nazwa!="plomien" && plansza[i+1][j].nazwa!="drzwi" && plansza[i+1][j].nazwa!="TNT" && plansza[i+1][j].nazwa!="TNTi" && plansza[i+1][j].nazwa!="robot")
        	{
            plansza[i+1][j].nazwa="plomien";
            plansza[i][j].nazwa="sciezka";
        	}
            break;
            }
            case 2:
            {
            if(i>0 && plansza[i-1][j].nazwa!="murek" && plansza[i-1][j].nazwa!="woda" && plansza[i-1][j].nazwa!="plomien"  && plansza[i-1][j].nazwa!="drzwi" && plansza[i-1][j].nazwa!="TNT" && plansza[i-1][j].nazwa!="TNTi" && plansza[i-1][j].nazwa!="robot")
            {
            plansza[i-1][j].nazwa="plomien";
            plansza[i][j].nazwa="sciezka";
        	}
            break;
            }
            case 3:
            {
            if(j<19 && plansza[i][j+1].nazwa!="murek" && plansza[i][j+1].nazwa!="woda" && plansza[i][j+1].nazwa!="plomien" && plansza[i][j+1].nazwa!="drzwi" && plansza[i][j+1].nazwa!="TNT" && plansza[i][j+1].nazwa!="TNTi" && plansza[i][j+1].nazwa!="robot")
            {
            plansza[i][j+1].nazwa="plomien";
            plansza[i][j].nazwa="sciezka";
        	}
            break;
            }
            case 4:
            {
            if(j>0 && plansza[i][j-1].nazwa!="murek" && plansza[i][j-1].nazwa!="woda" && plansza[i][j-1].nazwa!="plomien" && plansza[i][j-1].nazwa!="drzwi" && plansza[i][j-1].nazwa!="TNT" && plansza[i][j-1].nazwa!="TNTi" && plansza[i][j-1].nazwa!="robot")
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
        	}
        	if(czy_mozna_sie_ruszac==0)
        	{
            for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(plansza[i][j].nazwa=="robot")
            {
            int ruch=rand()%4+1;
            switch(ruch)
            {
            case 1:
            {
            if(i<19 && plansza[i+1][j].nazwa!="murek" && plansza[i+1][j].nazwa!="woda" && plansza[i+1][j].nazwa!="plomien" && plansza[i+1][j].nazwa!="drzwi" && plansza[i+1][j].nazwa!="TNT" && plansza[i+1][j].nazwa!="TNTi" && plansza[i+1][j].nazwa!="robot" && plansza[i+1][j].nazwa!="gracz" && plansza[i+1][j].nazwa!="graczi" && plansza[i+1][j].nazwa!="wiezien")
        	{
            plansza[i+1][j].nazwa="robot";
            plansza[i][j].nazwa="sciezka";
        	}
            break;
            }
            case 2:
            {
            if(i>0 && plansza[i-1][j].nazwa!="murek" && plansza[i-1][j].nazwa!="woda" && plansza[i-1][j].nazwa!="plomien"  && plansza[i-1][j].nazwa!="drzwi" && plansza[i-1][j].nazwa!="TNT" && plansza[i-1][j].nazwa!="TNTi" && plansza[i-1][j].nazwa!="robot" && plansza[i-1][j].nazwa!="gracz" && plansza[i-1][j].nazwa!="graczi" && plansza[i-1][j].nazwa!="wiezien")
            {
            plansza[i-1][j].nazwa="robot";
            plansza[i][j].nazwa="sciezka";
        	}
            break;
            }
            case 3:
            {
            if(j<19 && plansza[i][j+1].nazwa!="murek" && plansza[i][j+1].nazwa!="woda" && plansza[i][j+1].nazwa!="plomien" && plansza[i][j+1].nazwa!="drzwi" && plansza[i][j+1].nazwa!="TNT" && plansza[i][j+1].nazwa!="TNTi" && plansza[i][j+1].nazwa!="robot" && plansza[i][j+1].nazwa!="gracz" && plansza[i][j+1].nazwa!="graczi" && plansza[i][j+1].nazwa!="wiezien")
            {
            plansza[i][j+1].nazwa="robot";
            plansza[i][j].nazwa="sciezka";
        	}
            break;
            }
            case 4:
            {
            if(j>0 && plansza[i][j-1].nazwa!="murek" && plansza[i][j-1].nazwa!="woda" && plansza[i][j-1].nazwa!="plomien" && plansza[i][j-1].nazwa!="drzwi" && plansza[i][j-1].nazwa!="TNT" && plansza[i][j-1].nazwa!="TNTi" && plansza[i][j-1].nazwa!="robot" && plansza[i][j-1].nazwa!="gracz" && plansza[i][j-1].nazwa!="graczi" && plansza[i][j-1].nazwa!="wiezien")
            {
            plansza[i][j-1].nazwa="robot";
            plansza[i][j].nazwa="sciezka";
        	}
            break;
            }
            }
			}
			}
            }
        	}
            /*for(int i=0; i<20; i++)
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
            }*/
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
            if(IMPULSi==1)
            {
            for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(plansza[i][j].nazwa=="graczi")
            {
            okrag *wsk=new okrag(iksy[i], igreki[j], 0.0f, (float)(((int)thetai)%500)/4000.0f, 1.0f, 1.0f, 1.0f, 1);
            delete wsk;
			}
			}
            }
            }
            if(czy_mozna_sie_ruszac)
        	{
        	wiadomosc.wypisz();
        	czy_mozna_sie_ruszac--;
        	}
        	else
        	{
        	if(wiadomosc.tekscik==intro && level==1)
        	{
        	wiadomosc.tekscik=introi;
        	wiadomosc.zmien_kolor_tekstu(0.0f, 1.0f, 0.0f);
        	czy_mozna_sie_ruszac=100;
        	}
        	else if(wiadomosc.tekscik==introi && level==1)
        	{
        	wiadomosc.tekscik=introii;
        	wiadomosc.zmien_kolor_tekstu(0.0f, 0.0f, 1.0f);
        	czy_mozna_sie_ruszac=100;
        	}
        	else if(wiadomosc.tekscik==introii && level==1)
        	{
        	wiadomosc.tekscik=introiii;
        	wiadomosc.zmien_kolor_tekstu(0.0f, 1.0f, 0.0f);
        	czy_mozna_sie_ruszac=100;
        	}
        	else if(wiadomosc.tekscik==introiii && level==1)
        	{
        	wiadomosc.tekscik=introiiii;
        	wiadomosc.zmien_kolor_tekstu(0.9f, 0.0f, 0.2f);
        	czy_mozna_sie_ruszac=100;
        	}
        	else if(wiadomosc.tekscik==introiiii && level==1)
        	{
        	wiadomosc.tekscik=introiiiii;
        	wiadomosc.zmien_kolor_tekstu(0.0f, 0.0f, 1.0f);
        	czy_mozna_sie_ruszac=100;
        	}
        	else if(wiadomosc.tekscik==introiiiii && level==1)
        	{
        	wiadomosc.tekscik=introiiiiii;
        	wiadomosc.zmien_kolor_tekstu(0.9f, 0.0f, 0.2f);
        	czy_mozna_sie_ruszac=100;
        	}
        	else if(wiadomosc.tekscik==introiiiiii && level==2)
        	{
        	wiadomosc.tekscik=introiiiiiii;
        	wiadomosc.zmien_kolor_tekstu(0.0f, 0.0f, 1.0f);
        	czy_mozna_sie_ruszac=100;
        	}
        	else if(wiadomosc.tekscik==introiiiiiii && level==2)
        	{
        	wiadomosc.tekscik=introiiiiiiii;
        	wiadomosc.zmien_kolor_tekstu(0.9f, 0.0f, 0.2f);
        	czy_mozna_sie_ruszac=100;
        	}
        	else if(wiadomosc.tekscik==introiiiiiiii && level==2)
        	{
        	wiadomosc.tekscik=introiiiiiiiii;
        	wiadomosc.zmien_kolor_tekstu(0.0f, 1.0f, 0.0f);
        	czy_mozna_sie_ruszac=100;
        	}
        	}
        	/*else if(!czy_mozna_sie_ruszac && (czy_ratownik || czy_ratowniki))
        	{
			czy_mozna_sie_ruszac=100;
        	if(wiadomosc.tekscik==introiiiii)
        	{
        	wiadomosc.tekscik=ratunek_nadszedl;
        	wiadomosc.zmien_kolor_tekstu(0.0f, 0.0f, 1.0f);
        	czy_mozna_sie_ruszac--;
        	}
        	else if(wiadomosc.tekscik==ratunek_nadszedl)
        	{
        	wiadomosc.tekscik=ratunek_nadszedli;
        	wiadomosc.zmien_kolor_tekstu(0.0f, 1.0f, 0.0f);
			czy_mozna_sie_ruszac--;        	}
        	else if(wiadomosc.tekscik==ratunek_nadszedli)
        	{
        	wiadomosc.tekscik=ratunek_nadszedlii;
        	wiadomosc.zmien_kolor_tekstu(0.0f, 0.0f, 1.0f);
        	czy_mozna_sie_ruszac--;
        	}
        	else if(wiadomosc.tekscik==ratunek_nadszedlii)
        	{
        	wiadomosc.tekscik="OK";
        	plansza[9][3].nazwa="sciezka";
        	}
        	}*/
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
			case VK_NUMPAD8:
			{
			for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(plansza[i][j].nazwa=="graczi" && j<19 && plansza[i][j+1].nazwa!="murek" && plansza[i][j+1].nazwa!="gracz" && plansza[i][j+1].nazwa!="wiezien" && plansza[i][j+1].nazwa!="plomien")
            {
            plansza[i][j+1]=obiekt_na_planszy("graczi");
            plansza[i][j]=obiekt_na_planszy("sciezka");
            goto doneiiii;
            }
            }
        	}
        	doneiiii:
        	kieri=1;
        	break;
			}
			case VK_NUMPAD5:
			{
			for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(plansza[i][j].nazwa=="graczi" && j>0 && plansza[i][j-1].nazwa!="murek" && plansza[i][j-1].nazwa!="gracz" && plansza[i][j-1].nazwa!="wiezien" && plansza[i][j-1].nazwa!="plomien")
            {
            plansza[i][j-1]=obiekt_na_planszy("graczi");
            plansza[i][j]=obiekt_na_planszy("sciezka");
            goto doneiiiii;
            }
            }
        	}
        	doneiiiii:
        	kieri=2;
        	break;
			}
			case VK_NUMPAD4:
			{
			for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(plansza[i][j].nazwa=="graczi" && i>0 && plansza[i-1][j].nazwa!="murek" && plansza[i-1][j].nazwa!="gracz" && plansza[i-1][j].nazwa!="wiezien" && plansza[i-1][j].nazwa!="plomien")
            {
            plansza[i-1][j]=obiekt_na_planszy("graczi");
            plansza[i][j]=obiekt_na_planszy("sciezka");
            goto doneiiiiiii;
            }
            }
        	}
        	doneiiiiiii:
        	kieri=4;
			break;
			}
			case VK_NUMPAD6:
			{
			for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            if(plansza[i][j].nazwa=="graczi" && i<19 && plansza[i+1][j].nazwa!="murek" && plansza[i+1][j].nazwa!="gracz" && plansza[i+1][j].nazwa!="wiezien" && plansza[i+1][j].nazwa!="plomien")
            {
            plansza[i+1][j]=obiekt_na_planszy("graczi");
            plansza[i][j]=obiekt_na_planszy("sciezka");
            goto doneiiiiii;
            }
            }
        	}
        	doneiiiiii:
        	kieri=3;
        	break;
			}
			case VK_NUMPAD0:
			{
			for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            switch(kieri)
            {
            case 1:
			{
			if(plansza[i][j].nazwa=="graczi" && j<19 && plansza[i][j+1].nazwa!="murek")
            {
            plansza[i][j+1]=obiekt_na_planszy("woda");
            }
            break;
            }
            case 2:
            {
            if(plansza[i][j].nazwa=="graczi" && j>0 && plansza[i][j-1].nazwa!="murek")
            {
            plansza[i][j-1]=obiekt_na_planszy("woda");
            }
            break;
            }
            case 3:
            {
            if(plansza[i][j].nazwa=="graczi" && i<19 && plansza[i+1][j].nazwa!="murek")
            {
            plansza[i+1][j]=obiekt_na_planszy("woda");
            }
            break;
            }
            case 4:
            {
            if(plansza[i][j].nazwa=="graczi" && i>0 && plansza[i-1][j].nazwa!="murek")
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
			case VK_ADD:
			{
			if(TNTi==0)
        	{
        	for(int i=0; i<20; i++)
            {
            for(int j=0; j<20; j++)
            {
            switch(kieri)
            {
            case 1:
			{
			if(plansza[i][j].nazwa=="graczi" && j<19 && plansza[i][j+1].nazwa!="murek")
            {
            plansza[i][j+1]=obiekt_na_planszy("TNTi");
            TNTi=1;
            }
            break;
            }
            case 2:
            {
            if(plansza[i][j].nazwa=="graczi" && j>0 && plansza[i][j-1].nazwa!="murek")
            {
            plansza[i][j-1]=obiekt_na_planszy("TNTi");
            TNTi=1;
            }
            break;
            }
            case 3:
            {
            if(plansza[i][j].nazwa=="graczi" && i<19 && plansza[i+1][j].nazwa!="murek")
            {
            plansza[i+1][j]=obiekt_na_planszy("TNTi");
            TNTi=1;
            }
            break;
            }
            case 4:
            {
            if(plansza[i][j].nazwa=="graczi" && i>0 && plansza[i-1][j].nazwa!="murek")
            {
            plansza[i-1][j]=obiekt_na_planszy("TNTi");
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
        	if(plansza[i][j].nazwa=="TNTi")
        	{
        	plansza[i][j].nazwa="wybuchi";
        	if(i>0)
        	{
        	plansza[i-1][j].nazwa="wybuchi";
        	}
        	else
        	{
        	plansza[i+4][j].nazwa="wybuchi";
        	}
        	if(i<19)
        	{
        	plansza[i+1][j].nazwa="wybuchi";
        	}
        	else
        	{
        	plansza[i-4][j].nazwa="wybuchi";
        	}
        	if(j>0)
        	{
        	plansza[i][j-1].nazwa="wybuchi";
        	}
        	else
        	{
        	plansza[i][j+4].nazwa="wybuchi";
        	}
        	if(j<19)
        	{
        	plansza[i][j+1].nazwa="wybuchi";
        	}
        	else
        	{
        	plansza[i][j-4].nazwa="wybuchi";
        	}
        	if(i>1)
        	{
        	plansza[i-2][j].nazwa="wybuchi";
        	}
        	else
        	{
        	plansza[i+3][j].nazwa="wybuchi";
        	}
        	if(i<18)
        	{
        	plansza[i+2][j].nazwa="wybuchi";
        	}
        	else
        	{
        	plansza[i-3][j].nazwa="wybuchi";
        	}
        	if(j>1)
        	{
        	plansza[i][j-2].nazwa="wybuchi";
        	}
        	else
        	{
        	plansza[i][j+3].nazwa="wybuchi";
        	}
        	if(j<18)
        	{
        	plansza[i][j+2].nazwa="wybuchi";
        	}
        	else
        	{
        	plansza[i][j-3].nazwa="wybuchi";
        	}
        	}
        	}
        	}
        	TNTi=0;
        	}
        	break;
			}
			case VK_SUBTRACT:
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
			if(control==0 && zycia)
			{
			plansza[0][0].nazwa="gracz";
			kier=3;
			zycia--;
			}
			break;
			}
			case VK_MULTIPLY:
			{
			int control=0;
			for(int i=0; i<20; i++)
			{
			for(int j=0; j<20; j++)
			{
			if(plansza[i][j].nazwa=="graczi")
			{
			control=1;
			goto checkit;
			}
			}
			}
			checkit:
			if(control==0 && zyciai)
			{
			kieri=4;
			plansza[19][0].nazwa="graczi";
			zyciai--;
			}
			break;
			}
			case VK_BACK:
			{
			for(int i=0; i<20; i++)
			{
			for(int j=0; j<20; j++)
			{
			if(plansza[i][j].nazwa=="gracz")
			{
			if((i>0 && plansza[i-1][j].nazwa=="wiezien") || (i<20 && plansza[i+1][j].nazwa=="wiezien") || (j>0 && plansza[i][j-1].nazwa=="wiezien") || (j<20 && plansza[i][j+1].nazwa=="wiezien"))
			{
			/*wiadomosc.tekscik=ratunek_nadszedl;
			wiadomosc.zmien_kolor_tekstu(0.0f, 0.0f, 1.0f);
			wiadomosc.wypisz();
			wiadomosc.tekscik=ratunek_nadszedli;
			wiadomosc.zmien_kolor_tekstu(0.0f, 1.0f, 0.0f);
			wiadomosc.wypisz();
			wiadomosc.tekscik=ratunek_nadszedlii;
			wiadomosc.zmien_kolor_tekstu(0.0f, 0.0f, 1.0f);
			wiadomosc.wypisz();*/
	 		czy_ratownik=1;
			plansza[9][3].nazwa="sciezka";
			//czy_ratownik=1;
			}
			}
			}
			}
			break;
			}
			case VK_DIVIDE:
			{
			for(int i=0; i<20; i++)
			{
			for(int j=0; j<20; j++)
			{
			if(plansza[i][j].nazwa=="graczi")
			{
			if((i>0 && plansza[i-1][j].nazwa=="wiezien") || (i<20 && plansza[i+1][j].nazwa=="wiezien") || (j>0 && plansza[i][j-1].nazwa=="wiezien") || (j<20 && plansza[i][j+1].nazwa=="wiezien"))
			{
			/*wiadomosc.zmien_tekst(ratunek_nadszedl);
			wiadomosc.zmien_kolor_tekstu(0.0f, 1.0f, 0.0f);
			wiadomosc.wypisz();
			wiadomosc.zmien_tekst(ratunek_nadszedli);
			wiadomosc.zmien_kolor_tekstu(0.0f, 0.0f, 1.0f);
			wiadomosc.wypisz();
			wiadomosc.zmien_tekst(ratunek_nadszedlii);
			wiadomosc.zmien_kolor_tekstu(0.0f, 1.0f, 0.0f);
			wiadomosc.wypisz();*/
			czy_ratowniki=1;
			plansza[9][3].nazwa="sciezka";
			}
			}
			}
			}
			break;
			}
			case VK_F12:
			{
			switch(level)
			{
			case 1:
			{
			for(int i=0; i<20; i++)
			{
			for(int j=0; j<20; j++)
			{
			plansza[i][j]=levelI[i][j];
			}
			}
			break;
			}
			case 2:
			{
			for(int i=0; i<20; i++)
			{
			for(int j=0; j<20; j++)
			{
			plansza[i][j]=levelII[i][j];
			}
			}
			break;
			}
			}
			}
			//case VK_F1:
			//{
			//for(int i=0; i<20; i++)
			//{
			//for(int j=0; j<20; j++)
			//{
			//plansza[i][j]=levelII[i][j];
			//}
			//}
			//break;
			//}
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
