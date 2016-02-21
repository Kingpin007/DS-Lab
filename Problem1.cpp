#include <iostream>

#define ull unsigned long long int
#define ll long long int

using namespace std;

void insert(ll*, ll, ll);
void del(ll*, ll);

ull elements = 0;

int main()
{
	cout << "Welcome to the dynamic array program\n Please Enter the size of the array you wish to create: ";
	ull n;
	cin >> n;
	ll *a = new ll[n];	//Create new array of length n
	char ch='0';
	while (ch != '4')
	{
		cout << "1. Insert Element into array\n2. Delete Element from array\n3. View array\n4. Exit\nPlease Enter your choice: ";
		cin >> ch;
		ll t, p;
		switch (ch)
		{
		case '1':
			cout << "Enter the value to be inserted into the array: ";
			cin >> t;
			cout << "Enter the position at which you want to insert this element: ";
			cin >> p;
			if (elements < n)
				insert(a, t, p);
			else
				cout << "Sorry! The array is full! Cannot insert more elements\n\n";
			break;
		case '2':
			cout << "Enter the index of deletion : ";
			cin >> p;
			if (p > elements || p < 0 || elements <= 0)
				cout << "Sorry the position you want to delete is invalid!\n\n";
			else

				del(a, p);
		case '3':
			cout << "The arrays is: " << endl;
			for (ull i = 0;i < elements;i++)
				cout << a[i] << " ";
			cout << endl;
			break;
		case '4':
			break;
		default:
			cout << "Error Please Try again\n\n\n\n";
			break;
		}
	}
}

void insert(ll a[],ll x, ll n = 0)
{
	for (ull i = elements;i > n;i--)
		a[i + 1] = a[i];
	a[n] = x;
	elements++;
}

void del(ll a[], ll n = 0)
{
	for (ull i = n;i < elements;i++)
		a[i] = a[i + 1];
	elements--;
}