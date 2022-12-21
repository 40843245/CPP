#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main ()
{
  std::unordered_map<std::string,std::string> mymap;

  mymap.rehash(20);

  mymap["house"] = "maison";
  mymap["apple"] = "pomme";
  mymap["tree"] = "arbre";
  mymap["book"] = "livre";
  mymap["door"] = "porte";
  mymap["grapefruit"] = "pamplemousse";

  cout << "current bucket_count: " << mymap.bucket_count() << endl;

  return 0;
}
