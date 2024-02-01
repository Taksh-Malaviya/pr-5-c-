#include<iostream>
using namespace std;

class Demo{
	public :
		int x;
		void set(int x){
			this->x=x;
		
		}
		void get(){
				cout<<x<<endl;
		}
		Demo operator++(int){
			Demo temp;
			temp.x= ++this->x;
			return temp;
		}
};
int main(){
	
	Demo d1,d2,d3;
	d1.set(2);
	d1.get();
	d2=d1++;
	d2.get();
	//d3=d1.operator++();
} 
