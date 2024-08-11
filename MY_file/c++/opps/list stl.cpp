#include<iostream>
#include<list>
using namespace std;

void display(list<int> lst)
{
    list<int>::iterator it;
    for(it=lst.begin();it!=lst.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
   list<int>list1; //list of 0 length

    list1.push_back(4);
     list1.push_back(52);
      list1.push_back(41);
      list1.push_back(48);
      list<int>::iterator iter;
      iter=list1.begin();//point first element
/* cout<<*iter<<endl;
      iter++;//point second element
        cout<<*iter<<endl;
        */

        //sorting
        list1.sort();
          display(list1);
        //pop from front

        list1.pop_front();
       display(list1);
       //remove random element
       list1.remove(41);
        display(list1);

  list<int>list2(3); //empty list of 7 length
     list<int>::iterator iter2;
     iter2=list2.begin();
     //add element
     *iter2=12;
     iter2++;
     *iter2=123;
       iter2++;
     *iter2=53;

     display(list2);
//merging two list
  list1.merge(list2);
  cout<<"after merging\n";
  display(list1);


}
