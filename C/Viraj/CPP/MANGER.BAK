#include<iostream.h>
#include<conio.h>

#define true 1

class display{
	char name[20];
	int id;
	int age;
	public:
	void add()
	{   
	    cout << "****************************************" << endl;
	    cout << "Enter Name :: ";
	    cin >> name;
	    cout << "Enter ID   :: ";
	    cin >> id;
	    cout << "Enter Age  :: ";
	    cin >> age;
	    cout << "****************************************" << endl;
	}

	void show()
	{   
	    cout << "___________________________________" << endl;
	    cout << "ID   :: " << id << endl;
	    cout << "Name :: " << name << endl;
	    cout << "Age  :: " << age << endl;
	    cout << "___________________________________" << endl;
	}
};

int main()
{
	display obj[10];
	clrscr();
	int count = 0;
	int value;
	while(true)
	{
		cout << "Add Manager      :: 1" << endl;
		cout << "View All Managers :: 2" << endl;
		cin >> value;

		if(value == 1)
		{
		    obj[count].add();
		    count++;
		}
		else if(value == 2)
		{
			for(int i = 0; i < count; i++)
			{
			 obj[i].show();
			}
		}else{

		break;
		}
	}
	getch();
	return 0;
}
