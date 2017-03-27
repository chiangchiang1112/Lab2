#include"lab2.h"
void win::set(int K,float ra,float rb){
	k=K;
	Ra=ra;
	Rb=rb;
}
float win::exceptA(float ea){
	ea=1/(1+pow(10,(Rb-Ra)/400));
	return ea;
}
float win::exceptB(float eb){
	eb=1/(1+pow(10,(Ra-Rb)/400));
	return eb;
}
float win::endA(float s,float e){
	Ra=Ra+k*(s-e);
	return Ra;
}
float win::endB(float s,float e){
	Rb=Rb+k*(s-e);
	return Rb;
}
