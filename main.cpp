#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include"lab2.h"
using namespace std;
int main(){
	int i;
	int k;
	float a,b;
	float ea,eb;
	float sa[6],sb[6];
	float ra,rb;
	ifstream inFile("file.in",ios::in);
	if(!inFile){
		cerr<<"Wrong."<<endl;
		exit(1);
	}
	ofstream outFile("file.out",ios::out);
	if(!outFile){
		cerr<<"Wrong."<<endl;
		exit(1);
	}
	inFile>>k>>a>>b;
	for(i=0;i<6;i++){
		inFile>>sa[i];
		sa[i]==1?sb[i]=0:sa[i]==0.5?sb[i]=0.5:sb[i]=1;
	}
	outFile<<a<<" "<<b<<endl;
	win rate;
	rate.set(k,a,b);
	for(i=0;i<6;i++){
		ea=rate.exceptA(ea);
		eb=rate.exceptB(eb);
		ra=(int)rate.endA(sa[i],ea);
		rb=(int)rate.endB(sb[i],eb);
		outFile<<ra<<" "<<rb<<endl;
	}
	return 0;
}
