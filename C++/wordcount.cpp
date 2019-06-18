#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	char chprev,ch;
	int wordcount=0,wordcountA=0;
	fstream file;
	file.open(“student.txt”,ios::in|ios::out);
	file.seekg(0);
	chprev=' ';
	while(file)
	{
		file.get(ch);
		if(ch=='A'  && chprev==' ')
		{
				wordcountA++;
		}
		if(ch!=' ' && chprev==' ')
		{
				wordcount++;
		}
	chprev=ch;
	}
	cout<<”Number of words: “ <<wordcount<<endl;
	cout<<”Number of words start with A”<<wordcountA<<endl;
	return 0;
}
