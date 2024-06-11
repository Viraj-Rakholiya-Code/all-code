#include<stdio.h>
#include<conio.h>

int addNumbers(int n) {
	if (n != 0){
		return n + addNumbers(n - 1);
	}
	else{
		return n;
	}
}

void main() {

  int num;
  clrscr();

  printf("Enter a Number :: ");
  scanf("%d", &num);

  printf("Sum = %d", addNumbers(num));

  getch();
}


