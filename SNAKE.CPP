#include<graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <iostream.h>
#include <string.h>
void main()
{
   int gd=DETECT, gm;

int bkcolour=0,col=2,fillpattern=1;

   // initialize graphics //
   initgraph(&gd, &gm,"c:\\tc\\bgi");

int no=1;
   char username[80]={"abhishek"};
   // create menu
M:
   setbkcolor(0);

   void *body,*food,*tail1,*tail2,*tail3,*tail4,*head1,*head2,*head3,*head4;
   int choice=1,sx=25,sy=210,x, y,X[5000],Y[5000],i=3,maxx,maxy,speed=100,bo=10,t[10],score=0;
   unsigned int size;
   char a='d',b,scor[4],setting;
   int k=2,j,maze=1,l,r1,r2,f=0,z=100,second=1;
   r1=300;
   r2=350;
   maxx = getmaxx();
   maxy = getmaxy();

   y = 160; x = 80;
   cleardevice();
   maxx=getmaxx();
   maxy=getmaxy();
   setlinestyle(0,1,3);
   setcolor(9);
   rectangle(4,0,maxx,maxy);
   setlinestyle(0,1,2);
   line(maxx-150,0,maxx-150,maxy);
   setcolor(8);
   setfillstyle(1,8);
   bar(maxx-147,3,maxx-3,63);
   setcolor(10);
   settextstyle(0,0,10);
   outtextxy(100,50,"MENU");


if(no==1)
   {
   setcolor(8);
   settextstyle(0,0,2);

   outtextxy(50,250,"PLEASE ENTER YOUR NAME");
   cin>>username;  ++no;
   cleardevice(); goto M;
   }
else
{
setcolor(12);
settextstyle(0,0,4);
outtextxy(20,200,"WELCOME,");
setcolor(13);
settextstyle(0,0,3);
outtextxy(20,250,username);
setcolor(4);
settextstyle(0,0,2);
outtextxy(20,320,"1.PLAY");
setcolor(2);
outtextxy(20,350,"2.SETTINGS");
setcolor(6);
outtextxy(20,380,"3.EXIT");
}
   setcolor(8);
   settextstyle(0,0,1);
   delay(300);
   outtextxy(maxx-125,30,"SNAKE GAME");
   delay(300);
   setcolor(11);
   setlinestyle(0,1,2);
   rectangle(maxx-145,65,maxx-5,205);
   outtextxy(maxx-128,70,"  CONTROLS");
   delay(200);
   setcolor(6);
   outtextxy(maxx-140,90,"Commands     Key");
   delay(300);
   setcolor(8);
   outtextxy(maxx-140,110," Move Up      w");
   delay(50);
   outtextxy(maxx-140,130," Move Down    s");
    delay(50);
   outtextxy(maxx-140,150," Move Right   d");
    delay(50);
   outtextxy(maxx-140,170," Move Left    a");
    delay(50);
   outtextxy(maxx-140,190," Back to Menu 0");
   delay(200);
   setcolor(12);
   setlinestyle(0,1,2);
   rectangle(maxx-145,210,maxx-5,350);
   setcolor(1);
   outtextxy(maxx-130,220,"Player's Name");
   setcolor(15);
   outtextxy(maxx-100,230,username);
   setcolor(4);
   delay(200);


   itoa(score,scor,10);
   outtextxy(maxx-140,250,"Score");
   settextstyle(0,0,3);
   outtextxy(maxx-50,250,scor);
   delay(200);
   setcolor(10);
   settextstyle(0,0,1);
   outtextxy(maxx-140,280,"Level");
   delay(200);
   setcolor(13);
   outtextxy(maxx-140,310,"Maze        1");
   delay(200);
   setcolor(7);
   settextstyle(0,0,3);
   outtextxy(20,420,"Enter your choice");
   cin>>choice;
   switch(choice)
   {
   case 1: {setcolor(9); settextstyle(0,0,15); outtextxy(350,300,"1");setcolor(12); settextstyle(0,0,3); outtextxy(530,410,"PLAY");sound(440); delay(500); nosound(); }break;
   case 2: {setcolor(9); settextstyle(0,0,15); outtextxy(350,300,"2");setcolor(12); settextstyle(0,0,2); outtextxy(500,410,"SETTINGS");sound(440); delay(500); nosound(); }break;
   case 3: {setcolor(9); settextstyle(0,0,15); outtextxy(350,300,"3");setcolor(12); settextstyle(0,0,3); outtextxy(530,410,"EXIT");sound(440); delay(500); nosound(); }break;
   default : { setcolor(12); settextstyle(0,0,2); outtextxy(500,390,"INVALID"); outtextxy(500,420,"CHOICE"); sound(440); delay(1000); nosound(); goto M;}
   }
Y:

   delay(500);
   cleardevice();
switch(choice)
{
case 3:{goto X;}
case 2: { goto S;}
case 1: { goto P; }
}

S: //create settings
cleardevice();
bar(sx-10,sy-10,sx+10,sy+10);
setcolor(6); settextstyle(0,0,9); outtextxy(50,50,"SETTINGS");
setcolor(7); settextstyle(0,0,3); outtextxy(50,200,"CHANGE BACKGROUND COLOR ");
setcolor(11); settextstyle(0,0,3); outtextxy(50,240,"CHANGE FILLPATTERN");
setcolor(5); settextstyle(0,0,3); outtextxy(50,280,"CHANGE SNAKE COLOUR");
setcolor(14); settextstyle(0,0,2); outtextxy(50,350,"PRESS 0 TO SELECT ");
setting=getch();
switch(setting)
{
case 'w': {if(sy>210) {sy=sy-40;} delay(100);}goto S;
case 's': {if(sy<=250) {sy=sy+40;} delay(100);} goto S;
case 'a': {if(sy>210) {sy=sy-40;} delay(100);}goto S;
case 'd': {if(sy<=250) {sy=sy+40;} delay(100);} goto S;
default : {
switch(sy)
{
case 210 : {delay(200); cleardevice(); setcolor(2); settextstyle(0,0,3); outtextxy(100,200,"ENTER BK COLOUR"); cin>>bkcolour; delay(100);}break;
case 250 : {delay(200); cleardevice(); setcolor(9); settextstyle(0,0,3); outtextxy(100,200,"ENTER FILLPATTERN"); cin>>fillpattern; delay(100);}break;
case 290 : {delay(200); cleardevice(); setcolor(14); settextstyle(0,0,3); outtextxy(100,200,"ENTER SNAKE COLOUR");cin>>col;delay(100); }break;
}

}
delay(500);
goto M;
}

P:
   settextstyle(0,0,1);

   for(j=0; j<=10; j++)
   {
	X[i-j]=x-bo*(j+1);
	Y[i-j]=y;

   }

   //body

   setfillstyle(fillpattern,col);
   bar(10,10,20,20);
   setcolor(0);
   setlinestyle(0,1,3);
   line(9,9,21,21);
   line(9,21,21,9);
   size = imagesize(10,10,20,20);
   body = malloc(size);
   getimage(10,10,20,20,body);
   cleardevice();

   setcolor(0);
   //tail1-right
   t[0]=20; t[1]=10;
   t[2]=10; t[3]=10;
   t[4]=20; t[5]=15;
   t[6]=10; t[7]=20;
   t[8]=20; t[9]=21;
   fillpoly(5, t);
   size = imagesize(10,10,20,21);
   tail1 = malloc(size);
   getimage(10,10,20,21,tail1);
   cleardevice();

   //tail2-left
   t[0]=10; t[1]=10;
   t[2]=20; t[3]=10;
   t[4]=10; t[5]=15;
   t[6]=20; t[7]=20;
   t[8]=10; t[9]=21;
   fillpoly(5, t);
   size = imagesize(10,10,20,21);
   tail2 = malloc(size);
   getimage(10,10,20,21,tail2);
   cleardevice();

   //tail3-up
   t[0]=10; t[1]=20;
   t[2]=10; t[3]=10;
   t[4]=15; t[5]=20;
   t[6]=20; t[7]=10;
   t[8]=20; t[9]=21;
   fillpoly(5, t);
   size = imagesize(10,10,20,21);
   tail3 = malloc(size);
   getimage(10,10,20,21,tail3);
   cleardevice();

   //tail4-down
   t[0]=10; t[1]=10;
   t[2]=10; t[3]=21;
   t[4]=15; t[5]=10;
   t[6]=20; t[7]=21;
   t[8]=20; t[9]=10;
   fillpoly(5, t);
   size = imagesize(10,10,20,21);
   tail4 = malloc(size);
   getimage(10,10,20,21,tail4);
   cleardevice();

   //head1-right
   setlinestyle(1,1,1);
   setcolor(2);

   fillellipse(10,10,10,5);
   setcolor(4);

   //eyes
   fillellipse(15,7,1,1);
   fillellipse(15,13,1,1);
   size = imagesize(10,5,20,15);
   head1 = malloc(size);
   getimage(10,5,20,15,head1);

   //head2-left
   //eyes
   fillellipse(5,7,1,1);
   fillellipse(5,13,1,1);
   size = imagesize(0,5,10,15);
   head2 = malloc(size);
   getimage(0,5,10,15,head2);
   cleardevice();

   //head3-up
   //eyes
   setcolor(2);
   fillellipse(12,12,5,10);
   setcolor(4);
   fillellipse(9,6,1,1);
   fillellipse(15,6,1,1);
   size = imagesize(7,2,18,12);
   head3 = malloc(size);
   getimage(7,2,18,12,head3);


   //head4-down
   //eyes
   fillellipse(9,17,1,1);
   fillellipse(15,17,1,1);
   size = imagesize(7,12,18,22);
   head4 = malloc(size);
   getimage(7,12,18,22,head4);
   cleardevice();


   //food
   setcolor(15);
   setfillstyle(1,15);
   fillellipse(10,10,3,5);
   size = imagesize(5,3,15,17);
   food = malloc(size);
   getimage(5,3,15,17,food);
   cleardevice();

   setcolor(12);


   // create outer boundary
   if(maze==1)
   {
   setfillstyle(1,9);
   bar(4,4,maxx,14);
   bar(4,4,14,maxy);
   bar(4,maxy-14,maxx,maxy-4);
   bar(maxx,4,maxx-10,maxy-4);
   }


   //create the stars
   for(j=0; j<=1000; j++)
   {
	putpixel(random(maxx),random(maxy),14);
	delay(1);
   }

     setcolor(0);

   while (a!='0'&& x<630 &&x>5 && y<470 && y>5)
   {
    setbkcolor(bkcolour);
       // plot new image
      if(a=='d')
	    putimage(x, y, head1, XOR_PUT);
      if(a=='a')
	    putimage(x, y, head2, XOR_PUT);
      if(a=='w')
	    putimage(x, y, head3, XOR_PUT);
      if(a=='s')
	    putimage(x, y, head4, XOR_PUT);

      for(j=0; j<k; j++)
      {
	   putimage(X[i-j], Y[i-j], body, XOR_PUT);
      }

      if((X[i-j-1]-X[i-j])<0  && (Y[i-j-1]-Y[i-j])==0)
	    putimage(X[i-j], Y[i-j], tail1, XOR_PUT);

      if((X[i-j-1]-X[i-j])>0  && (Y[i-j-1]-Y[i-j])==0)
	    putimage(X[i-j], Y[i-j], tail2, XOR_PUT);

      if((X[i-j-1]-X[i-j])==0  && (Y[i-j-1]-Y[i-j])<0)
	    putimage(X[i-j], Y[i-j], tail3, XOR_PUT);

      if((X[i-j-1]-X[i-j])==0  && (Y[i-j-1]-Y[i-j])>0)
	    putimage(X[i-j], Y[i-j], tail4, XOR_PUT);

      delay(speed);

      if(second==1)
      {
	setcolor(15);
	outtextxy(maxx-140,360,"Press Any Key...");
	getch();
	setcolor(0);
	outtextxy(maxx-140,360,"Press Any Key...");
	a='d';

	second=2;
      }

	// erase old image
      if(a=='d')
	    putimage(x, y, head1, XOR_PUT);
      if(a=='a')
	    putimage(x, y, head2, XOR_PUT);
      if(a=='w')
	    putimage(x, y, head3, XOR_PUT);
      if(a=='s')
	    putimage(x, y, head4, XOR_PUT);


      for(j=0; j<k; j++)
      {
	   putimage(X[i-j], Y[i-j], body, XOR_PUT);

      }

      if((X[i-j-1]-X[i-j])<0  && (Y[i-j-1]-Y[i-j])==0)
	    putimage(X[i-j], Y[i-j], tail1, XOR_PUT);

      if((X[i-j-1]-X[i-j])>0  && (Y[i-j-1]-Y[i-j])==0)
	    putimage(X[i-j], Y[i-j], tail2, XOR_PUT);

      if((X[i-j-1]-X[i-j])==0  && (Y[i-j-1]-Y[i-j])<0)
	    putimage(X[i-j], Y[i-j], tail3, XOR_PUT);

      if((X[i-j-1]-X[i-j])==0  && (Y[i-j-1]-Y[i-j])>0)
	    putimage(X[i-j], Y[i-j], tail4, XOR_PUT);


      if(f==0)
      {
	putimage(r1,r2,food,XOR_PUT);
	f=1;
      }

      z--;
      if((x>=r1 && y>=r2 && x<=r1+10 && y<=r2+10) || (x<=r1 && y<=r2 &&
      x>=r1-10 && y>=r2-10) || z==0)
      {
	if(z!=0)
	{
		sound(800);
		delay(20);
		setcolor(0);
		score += 10;
		if(speed>=4) {speed-=2;}
		settextstyle(0,0,2);
		outtextxy(maxx-100,50,scor);
		itoa(score,scor,10);
		setcolor(4);
		outtextxy(maxx-100,50,scor);
		k++;
	nosound();
	}
	z=100;
	putimage(r1,r2,food,XOR_PUT);
repr1:
	r1=random(450);
	    if(r1<50)
	       goto repr1;
repr2:
	r2=random(400);
	    if(r2<50)
		goto repr2;

	f=0;
      }


      i++;
      X[i]=x;
      Y[i]=y;

      b=a;
      if(kbhit())
      {

rep:
		a=getche();

		if((b=='d' && a=='a') || (b=='a' && a=='d'))
			a=b;

		if((b=='w' && a=='s') || (b=='s' && a=='w'))
			a=b;

		if(a!='d' && a!='a' && a!='w' && a!='0' && a!='s')
			a=b;
      }

      if(a=='w')
	y -= bo;

      if(a=='s')
	y += bo;

      if(a=='a')
	x -= bo;

      if(a=='d')
	x += bo;

      for(j=i+1; j<i-k; j--)
      {
	if((Y[i]>=Y[j] && Y[i]<=Y[j]+10) || (Y[i]<=Y[j] && Y[i]>=X[j]-10))
	{
		if((X[i]>=X[j] && X[i]<=X[j]+10) || (X[i]<=X[j] && X[i]>=X[j]-10))
		{
			a='0';
		}

		 outtextxy(maxx-140,360,"C");


	}

	if((X[i]>=X[j] && X[i]<=X[j]+10) || (X[i]<=X[j] && X[i]>=X[j]-10))
	{
		if((Y[i]>=Y[j] && Y[i]<=Y[j]+10) || (Y[i]<=Y[j] && Y[i]>=X[j]-10))
		{
			a='0';
		}

			outtextxy(maxx-140,360,"C");
       }
       }
       }

    sound(440); delay(1200); nosound();
    cleardevice();

    goto M;



X:
   setcolor(15);
   outtextxy(maxx-250,390,"Gameover");
   sound(100);
   delay(400);
   nosound();
   getch();
   closegraph();

}
