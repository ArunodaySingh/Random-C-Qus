#include<bits/stdc++.h>
using namespace std;

class Box {
  int l, b, h;

public:
  Box () {
    l = 0;
    b = 0;
    h = 0;
    BoxesCreated += 1;
  }

  Box (int length, int breadth, int height) {
    l = length;
    b = breadth;
    h = height;
    BoxesCreated += 1;
  }

  Box (const Box& other) {
    l = other.l;
    b = other.b;
    h = other.h;
    BoxesCreated += 1;
  }

  virtual ~Box () {
    BoxesDestroyed += 1;
  }

  int getLength () { return l; }

  int getBreadth () { return b; }

  int getHeight () { return h; }

  long long CalculateVolume () {
    return  * l * b * h;
  }

  bool operator < (const Box& other) {
    return l < other.l ||
          (l == other.l && b < other.b) ||
          (l == other.l && b == other.b && h < other.h);
  }

  friend std::ostream& operator << (std::ostream& o, Box box) {
    o << box.l << " " << box.b << " " << box.h;
    return o;
  }
};



void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}