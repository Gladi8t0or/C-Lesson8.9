
#include <iostream>
using namespace std;
class Two;
class One{
	double x;
	public:
    friend double BestFriend(One a, Two b);

    void set(int m) {
	x = m;    
	}
};

class Two{
	double x;
	public:
    friend double BestFriend(One a, Two b);

    void set(int m) {
	x = m;    
	}
};

double BestFriend(One a, Two b){
	return a.x*b.x;
}

int main(){
	const int n=5;
	int i;

	One objs[n];
	Two objsTwo[n];

	for(i=0; i<n;i++){
	objs[i].set(2*i+1);
	objsTwo[i].set(2*i+1);
	cout<<i<<" - Objs.x * ObjsTwo.x = "<<BestFriend(objs[i], objsTwo[i])<<endl;
	cout<<"***********"<<endl;
	cout<<endl;
	}

return 0;
}
