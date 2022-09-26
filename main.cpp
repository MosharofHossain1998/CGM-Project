#include <bits/stdc++.h>
#include <graphics.h>
#include <math.h>>
using namespace std;

    ///Hello Every one.
    ///this is mosharof hossain

int main (){
    int gd=DETECT, gm, i;
    initgraph (&gd, &gm, (char*)"");

    for(int i=0; i<150; i++){
    cleardevice();


    ///Sky
   setfillstyle(SOLID_FILL , BLUE);
   rectangle(0,0,650,145);
   floodfill(5,5,GREEN);

    ///Sun
    setfillstyle (SOLID_FILL, YELLOW);
    circle(420,60,30);
    floodfill(421,61,GREEN);

    //Cloud
        //Left Cloud
        ellipse(40,55,60,245,10,15);
        ellipse(65,45,340,185,20,15);
        ellipse(102,52,320,140,24,15);
        ellipse(109,65,225,55,24,10);
        ellipse(66,69,158,345,31,17);

        ///Middle Cloud
        ellipse(200,55,60,245,10,15);
        ellipse(225,45,340,185,20,15);
        ellipse(262,52,320,140,24,15);
        ellipse(268,65,225,55,24,10);
        ellipse(226,69,158,345,31,17);
        ellipse(300,45,380,185,20,15);
        ellipse(330,52,265,120,24,15);
        ellipse(305,68,190,365,30,20);

        ///Right Cloud
        ellipse(500,55,60,245,10,15);
        ellipse(525,45,340,185,20,15);
        ellipse(562,52,320,140,24,15);
        ellipse(568,65,225,55,24,10);
        ellipse(526,69,158,345,31,17);

        //Cloud COLOUR
         setfillstyle(1,15);
         floodfill(41,56,GREEN);
         floodfill(201,56,GREEN);
         floodfill(501,56,GREEN);
         setfillstyle(1,7);
         floodfill(301,46,GREEN);

         //Tree
        ellipse(65,195,362,178,40,40);
        ellipse(40,235,100,305,45,45);
        ellipse(90,235,238,82,45,45);
        ellipse(70,235,340,0,45,45);
        ellipse(40,330,270,90,15,50);
        ellipse(90,330,90,270,15,50);
        line(30,380,100,380);

        ///Tree
        setfillstyle(1,2);
        floodfill(66,182,GREEN);
        setfillstyle(9,4);
        floodfill(78,366,GREEN);





        ///Road
        line(0,424,690,424);
        line(0,425,690,425);

        ///Lower Part of the BUS
        line(20+i,400,70+i,400);
        arc(100+i,400,0,180,30);
        line(130+i,400,180+i,400);
        arc(210+i,400,0,180,30);
        line(240+i,400,280+i,400);

        ///upper body of the BUS
        setcolor(GREEN);
        line(20+i,250,280+i,250);
        line(20+i,250,20+i,400);
        line(280+i,250,280+i,400);
        line(20+i,320,280+i,320);
        line(90+i,250,90+i,320);
        line(180+i,250,180+i,320);

        ///Window's
        rectangle(30+i,260,80+i,310);
        rectangle(100+i,260,170+i,310);
        rectangle(190+i,260,270+i,310);

        ///Wheel's
        circle(100+i,400,25);
        circle(210+i,400,25);

        ///Steering
        line(240+i,300,280+i,320);
        ellipse(240+i,300,0,360,20,5);
        line(240+i,300,255+i,298);
        line(240+i,300,235+i,295);
        line(240+i,300,236+i,295);
        line(240+i,300,230+i,303);


        ///Driver
        circle(200+i,270,10);
        line(200+i,280,200+i,310);
        line(200+i,290,220+i,300);
        line(200+i,290,240+i,295);

        delay(20);
    }

    for(int i=0; i<50; i++){
        ///Traffic Light
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        rectangle(490,100,600,400);
        floodfill(500,110,WHITE);
        line(545,400,545,490);


        ///RED Light
        circle(545,150,40);
        setfillstyle ( SOLID_FILL ,  RED ) ;
        floodfill (( 545 -10) ,(150 -10) , WHITE ) ;
        delay(2000);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(550,155,WHITE);

        ///Yellow Light
        circle(545,250,40);
        setfillstyle ( SOLID_FILL ,  YELLOW ) ;
        floodfill (( 545 -10) ,(250 -10) , WHITE ) ;
        delay(2000);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(550,255,WHITE);

        ///GREEN Light
        circle(545,350,40);
        setfillstyle ( SOLID_FILL ,  GREEN ) ;
        floodfill (( 545 -10) ,(350 -10) , WHITE ) ;
        delay(2000);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(550,355,WHITE);

        break;

    }



    getch();
    closegraph();
    return 0;
}
void M(){
    cout<<"Here add a void function"<<endl;
}

//
//
//
