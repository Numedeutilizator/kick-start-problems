#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

ifstream fin("Input.txt");
ofstream fout("Output.txt");

int N, P, S;
vector <int> Si;//skill-ul a tuturor N jucatori
vector <int> Smax;//skill-ul a celor mai buni P jucatori
vector <int> Smin;

int maxSmax() {
	int maxSmax = 0;
	int I;
	for (I = Smax.size(); I > 0; I--) {
		if (Smax.back() > maxSmax) {
			maxSmax = Smax.back();
		}
		Smax.pop_back();
	}
	return maxSmax;
}
int minSmax() {
	int minSmin = 1000;
	int i;
	for (int i = Smin.size(); i > 0;i--) {
		if (Smin.back() < minSmin) {
			minSmin = Smin.back();
		}
		Smin.pop_back();
	}
	return minSmin;
}
int main() {
	int T, testcases;
	fin >> T;
	for (testcases = 1; testcases < T + 1; testcases++) {
		int totalOre;
		fin >> N >> P;
		int i, k, max;
		for (i = 0; i < N; i++) {
			fin >> S;
			Si.push_back(S);
		}
		max = 0;
		for (int k = 0; k < N; k++) {
			for (int K = 0; K < N; K++)
				if (Si.back() > max)
				{
					max = Si.back();
				}
			if (k < P) {
				Smax.push_back(max);
			}
			Si.pop_back();
			max = 0;
		}

		Smin = Smax;
		totalOre = maxSmax() - minSmax();
		cout << "Case #" << testcases << ": " << totalOre;
		cout << std::endl;
	}
}