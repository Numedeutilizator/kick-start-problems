#include <iostream>
#include <vector>

using namespace std;

bool munte(int numar){
	bool OK, crescator, descrescator;
	int k;
	crescator = false;
	descrescator = false;
	vector <int> cifre;
	while (numar != 0){
		k = numar % 10;
		numar = numar/10;
		cifre.push_back(k);
	}
	if (cifre[1] < cifre[2]){
		crescator = true;
	}
	else {
		descrescator = true;
	}
	if (crescator == true){
		for (int i = 0; i < cifre.size() - 1; i++){
			if (cifre[i] < cifre[i + 1]){
				OK = true;
			}
			else {
				OK = false;
				break;
			}
		}
	}
	else {
		
	}
}

int main(){
	vector <int> numere;
	int n, nr;
	cin >> n;
	for (int i = 0; i < n;i++){
		cin >> nr;
		numere.push_back(nr);
	}

}