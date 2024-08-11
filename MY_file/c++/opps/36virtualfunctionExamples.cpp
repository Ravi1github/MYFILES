#include<iostream>
#include<cstring>
using namespace std;
class CWH
{
protected:
    char title[30];
    float rating;
public:
    //constructor
    CWH(char*s,float r)
    {
        strcpy(title,s);
        rating=r;
    }
    //making virtual
    virtual void  display(){
    cout<<"base display\n";
    }


};
//derived class
class CWHVideo:public CWH
{
    int videolength;
public:
    CWHVideo(char *s,float r,int vl):CWH(s,r)
    {

        videolength =vl;
    }
    void display(){
    cout<<"video title="<<title<<endl;
    cout<<"video rating="<<rating<<endl;
    cout<<"lenght ="<<videolength<<endl;
    }
};

//derived class
class CWHText:public CWH
{
    int word;
public:
    CWHText(char *s,float r,int w):CWH(s,r)
    {

        word =w;
    }
    void display(){
    cout<<"text title="<<title<<endl;
    cout<<"text rating="<<rating<<endl;
    cout<<"word ="<<word<<endl;
    }
};
int main()
{
char*title=new char[30];
float rating;
int vlen,wlen;
//for video
title="c++";
rating=4.5;
vlen=33;

CWHVideo djvideo(title,rating,vlen);


//for video
title="javascript";
rating=4.3;
wlen=332;
CWHText djtext(title,rating,wlen);

//pointer
CWH*tuts[2];
tuts[0]=&djvideo;
tuts[1]=&djtext;

tuts[0]->display();
cout<<"\n\nfor second\n\n";
tuts[1]->display();

}
