#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect * ,Rect *);

int main(){
	Rect R1,R2;
	cout << "Please input Rect 1 (x y w h): ";
	cin >> R1.x;
	cin >> R1.y;
	cin >> R1.w;
	cin >> R1.h;
	cout << "Please input Rect 2 (x y w h): ";
	cin >> R2.x;
	cin >> R2.y;
	cin >> R2.w;
	cin >> R2.h;
	
	cout << "Overlap area = " <<overlap(&R1,&R2);	
	return 0;
}

double overlap(Rect *R1,Rect *R2){
	double A,B,C,D;
	A=R1->x+R1->w;
	B=R1->y-R1->h;
	C=R2->x+R2->w;
	D=R2->y-R2->h;
	double xmin,xmax,ymin,ymax,area;
	if(R1->x>R2->x){xmin = R1->x;}
	else{xmin = R2->x;}
	if(A<C){xmax = A;}
	else{xmax = C;}
	if(R1->y<R2->y){ymin = R1->y;}
	else{ymin = R2->y;}
	if(B>D){ymax = B;}
	else{ymax = D;}
	if(xmax-xmin>0&&ymax-ymin<0){area=-((xmax-xmin)*(ymax-ymin));}
	else{area=0;}
	return area;
}