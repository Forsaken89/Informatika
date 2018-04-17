#include <iostream> 

using namespace std; 

class QW { 
protected: 
double x, y; 
public: 
void set(int x, int y) { 
this->x = x; 
this->y = y; 
} 

virtual void getXY() = 0; 
}; 

class Q : public QW { 
public: 
void getXY() { 
cout<<x-y<<endl; 
} 
}; 

class W : public QW { 
public: 
void getXY() { 
cout<<x+y<<endl; 
} 
}; 

int main() { 
Q q1; 
W w1; 

q1.set(13, 7); 
w1.set(7, 8); 

q1.getXY(); 
w1.getXY(); 
return 0; 
}
