#include "M.h"
#include<random>
#include<ctime>
#include<iostream>
#include<iomanip>

using namespace std;
int ez1, ez2, medi1, medi2, hard1, hard2, hard3, medi3, hard4;
int M::difficulity(int num) {
	srand(time(NULL));
	int ran;
	switch (num) {
		return 1;
	case 1:
		return 1;
	case 2:
		return 2;
	case 3:
		return 3;	
	default:
		ran = rand()%3+1;
		return ran;
	}
}
void M::easy_num() {
	srand(time(NULL));	
	ez1 = rand() % 9 + 1;
	ez2 = rand() % 9 + 1;	
	cout << "You now have two digits, " << ez1 << " and " << ez2 << ".\n";
}
void M::medi_num() {
	srand(time(NULL));
	medi1 = (rand() % (99 - 10 + 1) + 10);
	medi2 = (rand() % (99 - 10 + 1) + 10);
	medi3 = (rand() % (99 - 10 + 1) + 10);	
	cout << "You now have three digits, " << medi1 << " " << medi2 << " and " << medi3 << ".\n";
}
void M::hard_num() {
	srand(time(NULL));
	hard1 = (rand() % (999 - 100 + 1 )+ 100);
	hard2 = (rand() % (999 - 100 + 1) + 100);
	hard3 = (rand() % (999 - 100 + 1) + 100);
	hard4 = (rand() % (999 - 100 + 1) + 100);	
	cout << "You now have four digits, " << hard1 << " " << hard2 << " " << hard3 << " and " << hard4 << ".\n";
}
float M::ez_addition() {
	return ez1 + ez2;
}
float M::ez_sub() {
	return ez1 - ez2;
}
float M::ez_multi() {
	return ez1 * ez2;
}
float M::ez_div() {
	return ez1 / ez2;
}
float M::medi_addition() {
	return medi1 + medi2 + medi3;
}
float M::medi_sub() {
	return medi1 - medi2 - medi3;
}
float M::medi_multi() {
	return medi1 * medi2 * medi3;
}
float M::medi_div() {
	float med_ans,_med_ans;	
	int _ans;
	_med_ans = 0.0;
	med_ans = (((medi1+0.0) * (medi2+0.0)) / medi3+0.0);
	_ans=int(med_ans * 100 + 0.5);
	_med_ans = float(_ans) / 100;
	return _med_ans;
}
float M::hard_addition() {
	return hard1 + hard2 + hard3 + hard4;
}
float M::hard_sub() {
	return hard1 - hard2 - hard3 - hard4;
}
float M::hard_multi() {
	return hard1 * hard2 * hard3 * hard4;
}
float M::hard_div() {
	float hard_ans, _hard_ans;
	int _ans;
	_hard_ans = 0.0;
	hard_ans = (((hard1 + 0.0) * (hard2 + 0.0)) / ((hard3 + 0.0) * (hard4 + 0.0)));
	_ans = int(hard_ans * 100 + 0.5);
	_hard_ans = float(_ans) / 100;
	return _hard_ans;
}