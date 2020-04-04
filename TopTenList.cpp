//Manages a list of top ten hyperlinks
#include <string>
#include <iostream>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;
using namespace std;
using std::cout;

TopTenList::TopTenList()
{
  _list.resize(10);
}

void TopTenList::set_at(int index, Hyperlink link)
{
  _list.at(index -1) = link;
}

Hyperlink TopTenList::get(int index)
{
   return _list.at(index);
}
void TopTenList::display_forward(){
  for(int i = 0; i < (int)_list.size(); i++){
    Hyperlink T = get(i);
    string t = T.url;
    string z = T.text;
    cout<<(i+1)<<". "<<t<<" "<<z<<endl;

  }
}
void TopTenList::display_backward(){
  for(int i = 9; i >= 0; i--){
    Hyperlink T = get(i);
    string t = T.url;
    string z = T.text;
    cout<<(i+1)<<". "<<t<<" "<<z<<endl;
  }
}
