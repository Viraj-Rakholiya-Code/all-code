#include<iostream.h>
#include<conio.h>



class add {
    int value, a, b, c, d;
public:
    add() {
	cout << "How Many You Want To Enter 2,3,4 :: ";
	cin >> value;

	switch (value) {
	    case 2:
		cout << "Enter Two Values :: ";
		cin >> a >> b;
		addition(a, b);
		break;

	    case 3:
		cout << "Enter Three Values :: ";
		cin >> a >> b >> c;
		addition(a, b, c);
		break;

	    case 4:
		cout << "Enter Four Values :: ";
		cin >> a >> b >> c >> d;
		addition(a, b, c, d);
		break;

	    default:
		cout << "Invalid number of values entered." << endl;
	}
    }

    void addition(int n1, int n2) {
	cout << "A + B == " << n1 + n2 << endl;
    }

    void addition(int n1, int n2, int n3) {
	cout << "A + B + C == " << n1 + n2 + n3 << endl;
    }

    void addition(int n1, int n2, int n3, int n4) {
	cout << "A + B + C + D == " << n1 + n2 + n3 + n4 << endl;
    }
};

class Max {
    int value, a, b, c, d;
public:
    Max() {
	cout << "How Many You Want To Enter 2,3,4 :: ";
	cin >> value;

	switch (value) {
	    case 2:
		cout << "Enter Two Values :: ";
		cin >> a >> b;
		maxFind(a, b);
		break;

	    case 3:
		cout << "Enter Three Values :: ";
		cin >> a >> b >> c;
		maxFind(a, b, c);
		break;

	    case 4:
		cout << "Enter Four Values :: ";
		cin >> a >> b >> c >> d;
		maxFind(a, b, c, d);
		break;

	    default:
		cout << "Invalid number of values entered." << endl;
	}
    }

    void maxFind(int n1, int n2) {
	if (n1 > n2) {
	    cout << n1 << " is Max" << endl;
	} else {
	    cout << n2 << " is Max" << endl;
	}
    }

    void maxFind(int n1, int n2, int n3) {
	int max_val = (n1 > n2) ? ((n1 > n3) ? n1 : n3) : ((n2 > n3) ? n2 : n3);
	cout << max_val << " is Max" << endl;
    }

    void maxFind(int n1, int n2, int n3, int n4) {
	int max_val = n1;
	if (n2 > max_val) max_val = n2;
	if (n3 > max_val) max_val = n3;
	if (n4 > max_val) max_val = n4;
	cout << max_val << " is Max" << endl;
    }
};

class Min {
    int value, a, b, c, d;
public:
    Min() {
	cout << "How Many You Want To Enter 2,3,4 :: ";
	cin >> value;

	switch (value) {
	    case 2:
		cout << "Enter Two Values :: ";
		cin >> a >> b;
		minFind(a, b);
		break;

	    case 3:
		cout << "Enter Three Values :: ";
		cin >> a >> b >> c;
		minFind(a, b, c);
		break;

	    case 4:
		cout << "Enter Four Values :: ";
		cin >> a >> b >> c >> d;
		minFind(a, b, c, d);
		break;

	    default:
		cout << "Invalid number of values entered." << endl;
	}
    }

    void minFind(int n1, int n2) {
	if (n1 < n2) {
	    cout << n1 << " is Min" << endl;
	} else {
	    cout << n2 << " is Min" << endl;
	}
    }

    void minFind(int n1, int n2, int n3) {
	int min_val = (n1 < n2) ? ((n1 < n3) ? n1 : n3) : ((n2 < n3) ? n2 : n3);
	cout << min_val << " is Min" << endl;
    }

    void minFind(int n1, int n2, int n3, int n4) {
	int min_val = n1;
	if (n2 < min_val) min_val = n2;
	if (n3 < min_val) min_val = n3;
	if (n4 < min_val) min_val = n4;
	cout << min_val << " is Min" << endl;
    }
};

class Average {
    int value, a, b, c, d;
public:
    Average() {
	cout << "How Many You Want To Enter 2,3,4 :: ";
	cin >> value;

	switch (value) {
	    case 2:
		cout << "Enter Two Values :: ";
		cin >> a >> b;
		avgFind(a, b);
		break;

	    case 3:
		cout << "Enter Three Values :: ";
		cin >> a >> b >> c;
		avgFind(a, b, c);
		break;

	    case 4:
		cout << "Enter Four Values :: ";
		cin >> a >> b >> c >> d;
		avgFind(a, b, c, d);
		break;

	    default:
		cout << "Invalid number of values entered." << endl;
	}
    }

    void avgFind(int n1, int n2) {
	cout << "Average == " << (n1 + n2) / 2.0 << endl;
    }

    void avgFind(int n1, int n2, int n3) {
	cout << "Average == " << (n1 + n2 + n3) / 3.0 << endl;
    }

    void avgFind(int n1, int n2, int n3, int n4) {
	cout << "Average == " << (n1 + n2 + n3 + n4) / 4.0 << endl;
    }
};

int main() {
    int value;
    clrscr();
    cout << "For Addition         :: 1" << endl;
    cout << "Find Max Number      :: 2" << endl;
    cout << "Find Min Number      :: 3" << endl;
    cout << "Find Average Number  :: 4" << endl;
    cin >> value;

    switch (value) {
	case 1: {
	    add obj1;
	    break;
	}
	case 2: {
	    Max obj2;
	    break;
	}
	case 3: {
	    Min obj3;
	    break;
	}
	case 4: {
	    Average obj4;
	    break;
	}
	default:
	    cout << "Invalid option selected." << endl;
    }
    getch();
    return 0;
}
