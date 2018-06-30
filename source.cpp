#include<iostream>
#include<Windows.h>
#include <glut.h>


float color [6][3]=
{
     1.0,1.0,1.0
	,1.0,1.0,1.0
	,1.0,1.0,1.0
	,1.0,1.0,1.0
	,1.0,0.0,0.0
	,0.0,0.0,1.0
};

int turn=4;
float statemous,statemousl;

float mokhtasat[21][2]={0.25,0.25
	,0.25,2.25
	,0.25,4.25
	,0.25,6.25
	,0.25,8.25
	,2.25,0.25
	,2.25,2.25
	,2.25,4.25
	,2.25,6.25
	,2.25,8.25
	,4.25,0.25
	,4.25,2.25
	,4.25,4.25
	,4.25,6.25
	,4.25,8.25
	,6.25,0.25
	,6.25,2.25
	,6.25,4.25
	,6.25,6.25
	,6.25,8.25
	,0.00,0.00

};


int matris[8][10];

int k=50,l=50,i,j;
int y=0;

void init() {
	glClearColor(0.95, 0.95, 1, 0.0);
    glEnable(GL_NORMALIZE);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_POINT_SMOOTH);
    glEnable(GL_LINE_SMOOTH);
    glEnable(GL_POLYGON_SMOOTH);
    glHint (GL_LINE_SMOOTH_HINT, GL_NICEST);
    glHint (GL_POINT_SMOOTH_HINT, GL_NICEST);
    glHint (GL_POLYGON_SMOOTH_HINT, GL_NICEST);
    glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 480, 0, 640);
	glViewport(10, 10, 620, 460);


}

void display() {
	y=1;
	glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(8);
    glPointSize(8);
	// khate shomaRe 1
	i=0,j=1;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[0][0]*k,mokhtasat[0][1]*l);
		glVertex2f(mokhtasat[1][0]*k,mokhtasat[1][1]*l);
	glEnd();

	// khate shomaRe 2
	i=0,j=3;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[1][0]*k,mokhtasat[1][1]*l);
		glVertex2f(mokhtasat[2][0]*k,mokhtasat[2][1]*l);
	glEnd();

	// khate shomaRe 3
	i=0,j=5;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[2][0]*k,mokhtasat[2][1]*l);
		glVertex2f(mokhtasat[3][0]*k,mokhtasat[3][1]*l);
	glEnd();

	// khate shomaRe 4
	i=0,j=7;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[3][0]*k,mokhtasat[3][1]*l);
		glVertex2f(mokhtasat[4][0]*k,mokhtasat[4][1]*l);
	glEnd();


	// khate shomaRe 5
	i=2,j=1;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[5][0]*k,mokhtasat[5][1]*l);
		glVertex2f(mokhtasat[6][0]*k,mokhtasat[6][1]*l);
	glEnd();


	// khate shomaRe 6
	i=2,j=3;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[6][0]*k,mokhtasat[6][1]*l);
		glVertex2f(mokhtasat[7][0]*k,mokhtasat[7][1]*l);
	glEnd();

	// khate shomaRe 7
	i=2,j=5;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[7][0]*k,mokhtasat[7][1]*l);
		glVertex2f(mokhtasat[8][0]*k,mokhtasat[8][1]*l);
	glEnd();

	// khate shomaRe 8
	i=2,j=7;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[8][0]*k,mokhtasat[8][1]*l);
		glVertex2f(mokhtasat[9][0]*k,mokhtasat[9][1]*l);
	glEnd();

	// khate shomaRe 9
	i=4,j=1;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[10][0]*k,mokhtasat[10][1]*l);
		glVertex2f(mokhtasat[11][0]*k,mokhtasat[11][1]*l);
	glEnd();

	// khate shomaRe 10
	i=4,j=3;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[11][0]*k,mokhtasat[11][1]*l);
		glVertex2f(mokhtasat[12][0]*k,mokhtasat[12][1]*l);
	glEnd();

	// khate shomaRe 11
	i=4,j=5;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[12][0]*k,mokhtasat[12][1]*l);
		glVertex2f(mokhtasat[13][0]*k,mokhtasat[13][1]*l);
	glEnd();

	// khate shomaRe 12
	i=4,j=7;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[13][0]*k,mokhtasat[13][1]*l);
		glVertex2f(mokhtasat[14][0]*k,mokhtasat[14][1]*l);
	glEnd();

	// khate shomaRe 13
	i=6,j=1;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[15][0]*k,mokhtasat[15][1]*l);
		glVertex2f(mokhtasat[16][0]*k,mokhtasat[16][1]*l);
	glEnd();

	// khate shomaRe 14
	i=6,j=3;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[16][0]*k,mokhtasat[16][1]*l);
		glVertex2f(mokhtasat[17][0]*k,mokhtasat[17][1]*l);
	glEnd();

	// khate shomaRe 15
	i=6,j=5;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[17][0]*k,mokhtasat[17][1]*l);
		glVertex2f(mokhtasat[18][0]*k,mokhtasat[18][1]*l);
	glEnd();

	// khate shomaRe 16
	i=6,j=7;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[18][0]*k,mokhtasat[18][1]*l);
		glVertex2f(mokhtasat[19][0]*k,mokhtasat[19][1]*l);
	glEnd();

	// khate shomaRe 17
	i=1,j=0;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[0][0]*k,mokhtasat[0][1]*l);
		glVertex2f(mokhtasat[5][0]*k,mokhtasat[5][1]*l);
	glEnd();

	// khate shomaRe 18
	i=1,j=2;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[1][0]*k,mokhtasat[1][1]*l);
		glVertex2f(mokhtasat[6][0]*k,mokhtasat[6][1]*l);
	glEnd();

	// khate shomaRe 19
	i=1,j=4;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[2][0]*k,mokhtasat[2][1]*l);
		glVertex2f(mokhtasat[7][0]*k,mokhtasat[7][1]*l);
	glEnd();

	// khate shomaRe 20
	i=1,j=6;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[3][0]*k,mokhtasat[3][1]*l);
		glVertex2f(mokhtasat[8][0]*k,mokhtasat[8][1]*l);
	glEnd();

	// khate shomaRe 21
	i=1,j=8;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[4][0]*k,mokhtasat[4][1]*l);
		glVertex2f(mokhtasat[9][0]*k,mokhtasat[9][1]*l);
	glEnd();

	// khate shomaRe 22
	i=3,j=0;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[5][0]*k,mokhtasat[5][1]*l);
		glVertex2f(mokhtasat[10][0]*k,mokhtasat[10][1]*l);
	glEnd();

	// khate shomaRe 23
	i=3,j=2;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[6][0]*k,mokhtasat[6][1]*l);
		glVertex2f(mokhtasat[11][0]*k,mokhtasat[11][1]*l);
	glEnd();

	// khate shomaRe 24
	i=3,j=4;

	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[7][0]*k,mokhtasat[7][1]*l);
		glVertex2f(mokhtasat[12][0]*k,mokhtasat[12][1]*l);
	glEnd();

	// khate shomaRe 25
	i=3,j=6;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[8][0]*k,mokhtasat[8][1]*l);
		glVertex2f(mokhtasat[13][0]*k,mokhtasat[13][1]*l);
	glEnd();

	// khate shomaRe 26
	i=3,j=8;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[9][0]*k,mokhtasat[9][1]*l);
		glVertex2f(mokhtasat[14][0]*k,mokhtasat[14][1]*l);
	glEnd();

	// khate shomaRe 27
	i=5,j=0;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[10][0]*k,mokhtasat[10][1]*l);
		glVertex2f(mokhtasat[15][0]*k,mokhtasat[15][1]*l);
	glEnd();

	// khate shomaRe 28
	i=5,j=2;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[11][0]*k,mokhtasat[11][1]*l);
		glVertex2f(mokhtasat[16][0]*k,mokhtasat[16][1]*l);
	glEnd();

	// khate shomaRe 29
	i=5,j=4;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[12][0]*k,mokhtasat[12][1]*l);
		glVertex2f(mokhtasat[17][0]*k,mokhtasat[17][1]*l);
	glEnd();

	// khate shomaRe 30
	i=5,j=6;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[13][0]*k,mokhtasat[13][1]*l);
		glVertex2f(mokhtasat[18][0]*k,mokhtasat[18][1]*l);
	glEnd();

	// khate shomaRe 31
	i=5,j=8;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_LINES);
		glVertex2f(mokhtasat[14][0]*k,mokhtasat[14][1]*l);
		glVertex2f(mokhtasat[19][0]*k,mokhtasat[19][1]*l);
	glEnd();

	//mostatil

	glColor3f(0.0f,0.0f,0.0f);
	//moraba shomare 1
	i=1,j=1;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_QUADS);
		glVertex2f((2)*k,(0.5)*l);
		glVertex2f((2)*k,(2)*l);
		glVertex2f((0.5)*k,(2)*l);
		glVertex2f((0.5)*k,(0.5)*l);

	glEnd();

	//moraba shomare 2
	i=1,j=3;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_QUADS);
		glVertex2f((2)*k,(2.5)*l);
		glVertex2f((2)*k,(4)*l);
		glVertex2f((0.5)*k,(4)*l);
		glVertex2f((0.5)*k,(2.5)*l);

	glEnd();

	//moraba shomare 3
	i=1,j=5;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_QUADS);
		glVertex2f((2)*k,(4.5)*l);
		glVertex2f((2)*k,(6)*l);
		glVertex2f((0.5)*k,(6)*l);
		glVertex2f((0.5)*k,(4.5)*l);

	glEnd();

	//moraba shomare 4
	i=1,j=7;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_QUADS);
		glVertex2f((2)*k,(6.5)*l);
		glVertex2f((2)*k,(8)*l);
		glVertex2f((0.5)*k,(8)*l);
		glVertex2f((0.5)*k,(6.5)*l);

	glEnd();

	//moraba shomare 5
	i=3,j=1;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_QUADS);
		glVertex2f((4)*k,(0.5)*l);
		glVertex2f((4)*k,(2)*l);
		glVertex2f((2.5)*k,(2)*l);
		glVertex2f((2.5)*k,(0.5)*l);

	glEnd();

	//moraba shomare 6
	i=3,j=3;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_QUADS);
		glVertex2f((4)*k,(2.5)*l);
		glVertex2f((4)*k,(4)*l);
		glVertex2f((2.5)*k,(4)*l);
		glVertex2f((2.5)*k,(2.5)*l);

	glEnd();

	//moraba shomare 7
	i=3,j=5;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_POLYGON);
		glVertex2f((4)*k,(4.5)*l);
		glVertex2f((4)*k,(6)*l);
		glVertex2f((2.5)*k,(6)*l);
		glVertex2f((2.5)*k,(4.5)*l);

	glEnd();

	//moraba shomare 8
	i=3,j=7;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_QUADS);
		glVertex2f((4)*k,(6.5)*l);
		glVertex2f((4)*k,(8)*l);
		glVertex2f((2.5)*k,(8)*l);
		glVertex2f((2.5)*k,(6.5)*l);

	glEnd();

	//moraba shomare 9
	i=5,j=1;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_QUADS);
		glVertex2f((6)*k,(0.5)*l);
		glVertex2f((6)*k,(2)*l);
		glVertex2f((4.5)*k,(2)*l);
		glVertex2f((4.5)*k,(0.5)*l);

	glEnd();

	//moraba shomare 10
	i=5,j=3;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_QUADS);
		glVertex2f((6)*k,(2.5)*l);
		glVertex2f((6)*k,(4)*l);
		glVertex2f((4.5)*k,(4)*l);
		glVertex2f((4.5)*k,(2.5)*l);

	glEnd();

	//moraba shomare 11
	i=5,j=5;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_QUADS);
		glVertex2f((6)*k,(4.5)*l);
		glVertex2f((6)*k,(6)*l);
		glVertex2f((4.5)*k,(6)*l);
		glVertex2f((4.5)*k,(4.5)*l);

	glEnd();

	//moraba shomare 12
	i=5,j=7;
	glColor3f(color[matris[i][j]][0],color[matris[i][j]][1],color[matris[i][j]][2]);
	glBegin(GL_QUADS);
		glVertex2f((6)*k,(6.5)*l);
		glVertex2f((6)*k,(8)*l);
		glVertex2f((4.5)*k,(8)*l);
		glVertex2f((4.5)*k,(6.5)*l);

	glEnd();

	//noghteHa
	glColor3f(0.0f,0.0f,0.0f);
	int v=0;
	glBegin(GL_POINTS);
	for(v;v<21;v++)
	{
		glVertex2f(mokhtasat[v][0]*k,mokhtasat[v][1]*l);
	}
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(1*k,9*l);
		glVertex2f(1*k,11*l);
	glEnd();

	
	glBegin(GL_LINES);	
		glVertex2f(1*k,11*l);
		glVertex2f(2*k,11*l);	
	glEnd();

	
	glBegin(GL_LINES);
		glVertex2f(2*k,11*l);
		glVertex2f(2*k,10*l);	
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(2*k,10*l);
		glVertex2f(1*k,10*l);	
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(2*k,10*l);
		glVertex2f(1*k,10*l);	
	glEnd();

	
	glBegin(GL_LINES);
		glVertex2f(2.5*k,9*l);
		glVertex2f(3.5*k,9*l);	
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(2.5*k,9*l);
		glVertex2f(2.5*k,11*l);	
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(3*k,11*l);
		glVertex2f(4*k,10*l);	
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(4*k,10*l);
		glVertex2f(5*k,11*l);	
	glEnd();
	
	glBegin(GL_LINES);
		glVertex2f(4*k,10*l);
		glVertex2f(4*k,9*l);	
	glEnd();
	glClearColor(0.95, 0.95, 1, 0.0);
	//turn type
	float d=0.95,s=0.95,a=1;
if(turn==4)
{
	glColor3f(1.0f,0.0f,0.0f);
	glBegin(GL_LINES);
		glVertex2f(6*k,11*l);
		glVertex2f(6*k,9*l);	
	glEnd();
}
else
{

	glColor3f(0.0f,0.0f,1.0f);
	glBegin(GL_LINES);
		glVertex2f(6*k,11*l);
		glVertex2f(7*k,11*l);	
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(7*k,11*l);
		glVertex2f(7*k,10*l);	
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(7*k,10*l);
		glVertex2f(6*k,10*l);	
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(6*k,10*l);
		glVertex2f(6*k,9*l);	
	glEnd();

	glBegin(GL_LINES);
		glVertex2f(6*k,9*l);
		glVertex2f(7*k,9*l);	
	glEnd();
}


	glFlush();
}

void mymouse(GLint button,GLint state,GLint x,GLint y)
{
	if(button== GLUT_LEFT_BUTTON && state==GLUT_DOWN)
	{
		statemous=x;
		statemousl=y;

		//find i and j in the matris asli
		int v=-1,c=0;

		if(statemousl>357 && statemousl<=377)
			c=0;
		if(statemousl>319 && statemousl<=357)
			c=1;
		if(statemousl>299 && statemousl<=319)
			c=2;
		if(statemousl>260 && statemousl<=299)
			c=3;
		if(statemousl>240 && statemousl<=260)
			c=4;
		if(statemousl>202 && statemousl<=240)
			c=5;
		if(statemousl>182 && statemousl<=202)
			c=6;
		if(statemousl>143 && statemousl<=182)
			c=7;
		if(statemousl>123 && statemousl<=143)
			c=8;


		if(statemous>0 && statemous<=22)
			v=0;
		if(statemous>22 && statemous<=89)
			v=1;
		if(statemous>89 && statemous<=109)
			v=2;
		if(statemous>109 && statemous<=178)
			v=3;
		if(statemous>178 && statemous<=198)
			v=4;
		if(statemous>198 && statemous<=267)
			v=5;
		if(statemous>267 && statemous<=287)
			v=6;


		if( (v==1 || v==3 || v==5) && (c==0 || c==2 || c==4 || c==6 || c==8))
		{
			if(matris[v][c]==0)
			{
				matris[v][c]=turn;
				matris[v][c-1]++;
				matris[v][c+1]++;
				if(matris[v][c-1]==4)
					matris[v][c-1]=turn;
				if(matris[v][c+1]==4)
					matris[v][c+1]=turn;

				if(turn==4)
					turn=5;
				else if(turn ==5)
					turn=4;

			}
		}
		if( (v==0 || v==2 || v==4 || v==6 ) && (c==1 || c==3 || c==5 || c==7))
		{
			if(matris[v][c]==0)
			{
				matris[v][c]=turn;
				matris[v-1][c]++;
				matris[v+1][c]++;
				if(matris[v-1][c]==4)
					matris[v-1][c]=turn;
				if(matris[v+1][c]==4)
					matris[v+1][c]=turn;

				if(turn==4)
					turn=5;
				else if(turn ==5)
					turn=4;
			}
		}

		display();
	}
}

int main()
{
	PlaySound(TEXT("And then there were none Piano medley"),NULL, SND_ASYNC);
	glutInitWindowPosition(200, 400);
	glutInitWindowSize(8.5*k, 7.5*l);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	glutCreateWindow("the dot and line");
	init();
	glutDisplayFunc(display);
	glutMouseFunc(mymouse);
	glutMainLoop();

	return 0;
}

