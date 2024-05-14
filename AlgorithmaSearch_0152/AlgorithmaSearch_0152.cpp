#include <iostream>
using namespace std;

int arr[20];	//index to be searched
int n;			//number of elements in the array
int i;			//index of array element


void input() {
	while (true) {
		cout << "enter the number of elements in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
	}

	//accept array elements
	cout << "\n---------------------------\n";
	cout << "\n Enter array elements \n";
	cout << "\n---------------------------\n";
	for (i = 0; i < n; i++) {
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void LinearSearch() {
	char ch;	//untuk penginputan apakah mau lanjutkan codenya atau tidak
	int ctr;	//number of comparisons(angka urutan)
	int item;   //elemen yang akan dicari

	do {
		//accept the number to be searched
		cout << "\nEnter the elements you want to search: ";//step 1
		cin >> item;

		ctr = 0;
		i = 0;//step 2
		while(i < n) {//step 3
			ctr++;	//disinilah comparisonsnya ditambahkan
			if (arr[i] == item) {
				cout << "\n" << item << "founds at position" << (i + 1) << endl;//step 6
				break;
			}
			i++;//step 4
		}
		if (1 == n)//step 5
			cout << "\n" << item << "not found in the array\n";
		cout << "\nNumber of comparisons: " << ctr << endl;

		cout << "\nContinue search(y/n): ";
		cin >> ch;

	} while ((ch == 'y') || (ch == 'Y'));
}

void display() {
	cout << "array elements are: ";
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	input();
	LinearSearch();
	display();

}


