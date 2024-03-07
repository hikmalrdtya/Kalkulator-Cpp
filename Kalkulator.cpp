#include <iostream>
using namespace std;

int main()
{
	float a,b,hasil;
	char aritmatika;
	
	cout << "Calculator\n\n" << endl;
	
	//input
	cout << "Masukkan nilai :";
	cin >> a;
	cout << "Pilih operasi :+,-,/,* :";
	cin >> aritmatika;
	cout << "Masukan nilai :";
	cin >> b;
	
	cout << a << aritmatika << b;
	
	if(aritmatika == '+')
	{
		hasil= a+b;
	}else if(aritmatika == '-'){
		hasil = a-b;
	}else if(aritmatika == '*'){
		hasil = a*b;
	}else if (aritmatika == '/'){
		hasil = a/b;
	}else{
		cout << "operator anda salah";
	}
 
	
	cout << "="<<hasil << endl;
	
	return 0;
}
