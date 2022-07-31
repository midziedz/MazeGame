/**************************
 * Includes
 *
 **************************/

#include <windows.h>
#include <gl/gl.h>
#include <string>
#include <ctype.h>
using namespace std;
//Klasa
class tekst_duze_litery
{
string tekscik;
float x, y, size, R, G, B, odst;
public:
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
};
/**************************
 * Function Declarations
 *
 **************************/
 
LRESULT CALLBACK WndProc (HWND hWnd, UINT message,
WPARAM wParam, LPARAM lParam);
void EnableOpenGL (HWND hWnd, HDC *hDC, HGLRC *hRC);
void DisableOpenGL (HWND hWnd, HDC hDC, HGLRC hRC);
//Zmienne
tekst_duze_litery text(string("IT'S A QUITE GOOD PROGRAM, ISN'T IT?"), -0.95f, -0.95f, 0.05f, 0.0f, 1.0f, 0.0f);
/**************************
 * WinMain
 *
 **************************/

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
      WS_CAPTION | WS_POPUPWINDOW | WS_VISIBLE,
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
            //glRotatef (theta, 0.0f, 0.0f, 1.0f);
            //glBegin (GL_TRIANGLES);
            //glColor3f (1.0f, 0.0f, 0.0f);   glVertex2f (0.0f, 1.0f);
            //glColor3f (0.0f, 1.0f, 0.0f);   glVertex2f (0.87f, -0.5f);
            //glColor3f (0.0f, 0.0f, 1.0f);   glVertex2f (-0.87f, -0.5f);
            //glEnd ();
            text.wypisz();
            glPopMatrix ();

            SwapBuffers (hDC);

            theta += 1.0f;
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
