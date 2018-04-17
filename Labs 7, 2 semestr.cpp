#include <iostream> 

using namespace std; 

class Qwe {
	private:
	int a;
	public:
	Qwe(int a){
	this->a = a;
	}
    
    Qwe operator - (int a){
	return Qwe(a * 3);
    }
    
    Qwe operator -- (int a){
	return Qwe(this->a--);
    }
    
    Qwe operator * (int a){
	return Qwe(a * 2);
    }
    
    int getA() { 
    return a; 
    } 
};
int main()
{
Qwe S(4);
S - 4; 
S --; 
S * 5;
cout<<S.getA();
return 0; 
}
