#include<iostream>
using namespace std;
class Gamesetting{
	int brightness;
	int height;
	int weight;
	static Gamesetting *instance;
	static int count;
	Gamesetting()
	{
		brightness=78;
		height=5;
		weight=10;
	}
	Gamesetting(Gamesetting&);
	public:
		static Gamesetting * getInstance()
		{
			if (instance==NULL)
			{
			instance = new Gamesetting;
			count++;
			}
			return instance;
		}
		void setData()
		{
			cout<<"\nEneter height :";
			cin>>height;
			cout<<"\nEnter weight :";
			cin>>weight;
			cout<<"\nEnter the brightness :";
			cin>>brightness;
		}
		void display()
		{
			cout<<"\nbrightness :"<<brightness;
			cout<<"\nweight :"<<weight;
			cout<<"\nheight :"<<height<<"\t"<<count;
		}
};
Gamesetting * Gamesetting :: instance = NULL;
int Gamesetting :: count = 0;
int main()
{	
	Gamesetting *g=Gamesetting::getInstance();
	g->display();	
	g->setData();
	g->display();
	Gamesetting *p=Gamesetting::getInstance();
	p->display();
	p->setData();
	g->display();
	return 0;
}
