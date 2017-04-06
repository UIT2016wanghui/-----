//有时候，在b.h中会include   "a.h"  ，在"c.h"中会include  
//"b.h"及include"a.h"， 这时，如果不用ifndef/endif，就会包含两次a.h,产生错误
#ifndef _CHAPTER6_H_INCLUED_
#define _CHAPTER6_H_INCLUED_

//函数的声明
int fact(int);
double myABS(double);
double myABS(double);


#endif