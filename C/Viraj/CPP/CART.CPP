#include <iostream.h>
#include <conio.h>
#include <string.h>
#define true 1

class Cart
{
    int id[20];
    char name[20][50];
    int price[20];
    int count;

public:
    Cart() : count(0) {}

    void AddProduct()
    {
	int addCount;
	cout << "****************************************************************************" << endl;
	cout << "How Many Products Do You Want To Add: ";
	cin >> addCount;
	for (int i = 0; i < addCount; i++)
	{
	    if (count < 20)
	    {
		cout << "Enter Product Id: ";
		cin >> id[count];
		cout << "Enter Product Name: ";
		cin.ignore();
		cin.getline(name[count], 50);
		cout << "Enter Price: ";
		cin >> price[count];
		count++;
		cout << "Product added successfully!" << endl;
	    }
	    else
	    {

		break;
	    }
	}
    }

    void RemoveProduct()
    {
	int removeId;
	cout << "****************************************************************************" << endl;
	cout << "Enter Product Id To Remove: ";
	cin >> removeId;
	int found = 0;
	for (int i = 0; i < count; i++)
	{
	    if (id[i] == removeId)
	    {
		found = 1;
		for (int j = i; j < count - 1; j++)
		{
		    id[j] = id[j + 1];
		    strcpy(name[j], name[j + 1]);
		    price[j] = price[j + 1];
		}
		count--;
		cout << "Product removed successfully." << endl;
		break;
	    }
	}
	if (!found)
	{
	    cout << "Product Id not found." << endl;
	}
    }

    void Display()
    {
	cout << "****************************************************************************" << endl;
	if (count == 0)
	{
	    cout << "No products in the cart." << endl;
	    cout << "****************************************************************************" << endl;
	    return;
	}
	for (int i = 0; i < count; i++)
	{
	    cout << "Id: " << id[i] << endl;
	    cout << "Name: " << name[i] << endl;
	    cout << "Price: $" << price[i] << endl;
	    cout << "----------------------------------------" << endl;
	}
    }

    int TotalPrice()
    {
	int total = 0;
	for (int i = 0; i < count; i++)
	{
	    total += price[i];
	}
	return total;
    }
};

int main()
{
    Cart obj;
    int choice;
    clrscr();
    while (true)
    {
	cout << "\n****************************************************************************" << endl;
	cout << "Shopping Cart Menu:" << endl;
	cout << "1. Add Product" << endl;
	cout << "2. Remove Product" << endl;
	cout << "3. View All Products" << endl;
	cout << "4. Total Price of Products" << endl;
	cout << "5. Exit" << endl;
	cout << "Enter your choice: ";
	cin >> choice;
	cout << "****************************************************************************" << endl;

	switch (choice)
	{
	case 1:
	    obj.AddProduct();
	    break;
	case 2:
	    obj.RemoveProduct();
	    break;
	case 3:
	    obj.Display();
	    break;
	case 4:
	    cout << "****************************************************************************" << endl;
	    cout << "Total price of products: $" << obj.TotalPrice() << endl;
	    cout << "****************************************************************************" << endl;
	    break;
	case 5:
	    cout << "Exiting program." << endl;
	    cout << "****************************************************************************" << endl;
	    return 0;
	default:
	    cout << "Invalid choice. Please try again." << endl;
	    cout << "****************************************************************************" << endl;
	}
    }
    getch();
}
