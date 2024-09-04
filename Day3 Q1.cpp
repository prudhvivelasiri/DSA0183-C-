#include<iostream>
using namespace std;
int sum(int x,int y,int z=0,int w=0){
	return(x+y+z+w);
}
int main(){
	cout<<"the sum with four arguments:"<<sum(10,20,30,40)<<endl;
	return 0;
}