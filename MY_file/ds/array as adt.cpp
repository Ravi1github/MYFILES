#include<iostream>
using namespace std;
struct myarr
{
  int tsize;
  int usize;
  int *ptr;
};
void enter(struct myarr *a,int m)
{
    int i;
    for(i=0;i<m;i++)
    {
        cin>>(*a).ptr[i];
    }
}
void show(struct myarr *a,int m)
{
    for(int i=0;i<m;i++)
        cout<<(*a).ptr[i]<<endl;
}
int main()
{

    struct myarr marks;
    cout<<"enter the tsize used size \n";
    cin>>marks.tsize>>marks.usize;
    marks.ptr=(int *)malloc(marks.usize*sizeof(int));
    cout<<"enter element\n";
    enter(&marks,marks.usize);
    cout<<"elememt\n\n\n\n";
    show(&marks,marks.usize);
}
