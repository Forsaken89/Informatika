#include <iostream> 

using namespace std; 

class Bear { 
private: 
int strenght; 
public: 
Bear(int s) : strenght(s) {} 

void getStrenght() { 
cout<<strenght<<endl; 
} 
}; 


class Buriy : virtual public Bear { 
private: 
int vysota; 
public: 
Buriy(int s, int v) : Bear(s), Buriy(v) {} 

void getVysota() { 
cout<<vysota<<endl; 
} 
}; 


class Vzroslyi : virtual public Bear, virtual public Buriy { 
private: 
int agillity; 
public: 
Vzroslyi(int s, int v, int a) : Bear(s), Buriy(s, v), Vzroslyi(a) {} 

void getAgillity() { 
cout<<agillity<<endl; 
} 
}; 


int main() { 
Vzroslyi Medved(70, 130, 33); 

Medved.getStrenght();
Medved.getVysota();
Medved.getAgillity();
return 0;
}
