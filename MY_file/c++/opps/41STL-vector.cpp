#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector <T> v){
    cout<<"displaying vector\n";
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
}
cout<<"\n";
}

int main()
{  int i,n;
//ways to create arrays
vector<int> vec1; //0 element vector
vector<char> vec2(4);//4 element character vector
//pushing element
//vec2.push_back('q');
//display(vec2);


vector<char> vec3(vec2);//4 element character vector from vec2
display(vec3);

vector<int> vec4(4,12);//four times added
display(vec4);

/*
cout<<"enter size\n";
cin>>n;

   cout<<"enter the element to add to this vector\n";
   for(i=0;i<n;i++)
   {
       int element;
       cin>>element;
       vec1.push_back(element);

   }  */


 /*  //pop the element
   vec1.pop_back();
   //display
   display(vec1);
   //for insertng
   vector<int>::iterator iter=vec1.begin();
//insert at beigin
   vec1.insert(iter,342);
   //insertion at after first
   vec1.insert(iter+1,123);
   //4 baar insert
     vec1.insert(iter+2,4,13);
    display(vec1);
    */
}
