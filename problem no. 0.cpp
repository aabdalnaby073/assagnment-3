// Name : Abdelrahman Sameh Nabway
// ID :20210226
// Group : B
// Problem no. : 0


#include <iostream>
#include<cstring>
#include <string>
#include <string.h>

using namespace std;
int main()
{
	char arr[100];

	int len = 0, j = 0;
	string str;

	cout << "Enter string:" << endl;

	getline(cin, str);
	len = str.length();

	char res[100];

	strcpy(arr, str.c_str());

	for (int i = 0; i < len; i++) {

		if (arr[i] == ' ' && arr[i + 1] == ' ')
			continue;

		if (arr[i] >= 65 && arr[i] <= 90) {
			res[j++] = arr[i] + 32;

		}
		else {
			res[j++] = arr[i];
		}

	}
	res[0] = res[0] - 32;

	cout << "Output string;" << endl;
	cout << endl;
	for (int i = 0; i < j; i++)
		cout << res[i];


	return 0;
}