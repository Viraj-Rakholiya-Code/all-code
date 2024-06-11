#include <iostream.h>
#include <conio.h>

class collage {
    public:
    int s1, s2, s3, s4, s5, sum;
    void resultCollage() {
	cout << "-------------------------------------------------" << endl;
	cout << "**** Enter Max 50 Marks *****"<<endl;
	cout << "Enter Subject 1 Marks :: ";
	cin >> s1;
	cout << "Enter Subject 2 Marks :: ";
	cin >> s2;
	cout << "Enter Subject 3 Marks :: ";
	cin >> s3;
	cout << "Enter Subject 4 Marks :: ";
	cin >> s4;
	cout << "Enter Subject 5 Marks :: ";
	cin >> s5;
	sum = s1 + s2 + s3 + s4 + s5;
    }
};

class parctical {
    public:
    int ps1, ps2, ps3, ps4, ps5, psum;
    void ParcticalCollage() {
	cout << "-------------------------------------------------" << endl;
	cout << "**** Parctical Marks Enter Max 30 Marks ****" << endl;
	cout << "Enter Subject 1 Marks :: ";
	cin >> ps1;
	cout << "Enter Subject 2 Marks :: ";
	cin >> ps2;
	cout << "Enter Subject 3 Marks :: ";
	cin >> ps3;
	cout << "Enter Subject 4 Marks :: ";
	cin >> ps4;
	cout << "Enter Subject 5 Marks :: ";
	cin >> ps5;
	psum = ps1 + ps2 + ps3 + ps4 + ps5;
    }
};

class viva {
    public:
    int vs1, vs2, vs3, vs4, vs5, vsum;
    void VivaCollage() {
	cout << "-------------------------------------------------" << endl;
	cout << "**** Viva Marks Enter Max 20 Marks ****" << endl;
	cout << "Enter Subject 1 Marks :: ";
	cin >> vs1;
	cout << "Enter Subject 2 Marks :: ";
	cin >> vs2;
	cout << "Enter Subject 3 Marks :: ";
	cin >> vs3;
	cout << "Enter Subject 4 Marks :: ";
	cin >> vs4;
	cout << "Enter Subject 5 Marks :: ";
	cin >> vs5;
	vsum = vs1 + vs2 + vs3 + vs4 + vs5;
    }
};

class Result : public collage, public parctical, public viva {
    public:
    int sub1,sub2,sub3,sub4,sub5;
    void calculateTotalAndGrade() {
	int total = sum+psum+vsum;
	cout<< "-------------------------------------------------"<<endl;
	cout<<"Total Marks: "<<total<<"/500"<< endl;

	float percentage = (total / 500.0) * 100;
	cout<<"Percentage: "<<percentage<<"%"<< endl;

	if (percentage >= 90) {
	    cout << "Grade: A" << endl;
	} else if (percentage >= 80) {
	    cout << "Grade: B" << endl;
	} else if (percentage >= 70) {
	    cout << "Grade: C" << endl;
	} else if (percentage >= 60) {
	    cout << "Grade: D" << endl;
	} else {
	    cout << "Grade: F" << endl;
	}

	if (percentage >= 50) {
	    cout << "Result: Pass" << endl;
	} else {
	    cout << "Result: Fail" << endl;
	}
    }

    void subjectTotal()
    {
	sub1=s1+ps1+vs1;
	sub2=s2+ps2+vs2;
	sub3=s3+ps3+vs3;
	sub4=s4+ps4+vs4;
	sub5=s5+ps5+vs5;
	cout<< "-------------------------------------------------"<<endl;
	cout<<"Subject 1 Total Marks :: "<<sub1<<endl;
	cout<<"Subject 2 Total Marks :: "<<sub2<<endl;
	cout<<"Subject 3 Total Marks :: "<<sub3<<endl;
	cout<<"Subject 4 Total Marks :: "<<sub4<<endl;
	cout<<"Subject 5 Total Marks :: "<<sub5<<endl;
    }
};


void main() {
    clrscr();
    Result student;
    student.resultCollage();
    student.ParcticalCollage();
    student.VivaCollage();
    student.calculateTotalAndGrade();
    student.subjectTotal();
    getch();
}
