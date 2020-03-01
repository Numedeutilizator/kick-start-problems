#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
//pana acum citeste de la tastatura si afiseaza numerele introduse aka beatuy score 
using namespace std;
class beauty_score  {
private:
	vector <int> BeautyScore(string str, int numberOfSections){
		int sections = numberOfSections;
		vector <int> mainVector = {};
		for (int i = 0; i < sections; i++){
		char x = str[i];
			int intermediar = x - '0';
			mainVector.push_back(intermediar);
		}
		return mainVector;
	}
	int findMax(vector <int>BeautyScore){
		vector <int> Sections = BeautyScore;
		int max = Sections[1];
		int min = Sections[1];
		int posMax = 0;
		for (int i = 1; i < Sections.size()- 1;i++){
			if (max < Sections[i]){
				max = Sections[i];	
				int posMax = i;
			}
		}
		vector <int> subSections = {};
		subSections.push_back(Sections[posMax - 1]);
		subSections.push_back(Sections[posMax]);
		subSections.push_back(Sections[posMax + 1]);
		int pivotPos = posMax - 2;
		int pivot1 = Sections[pivotPos];
		int pivot2 = Sections[pivotPos + 2];
		for (int k = posMax - 1; k < posMax + 2;k++){
			Sections.erase(Sections.begin() + k);
		}

		//findMin
		for (int x = 1; x < Sections.size() - 1;x++){
			if (min > Sections[x]){
				min = Sections[x];
			}
		}
		Sections.erase(min);
	}
};

int main(){
	beauty_score score;
	int T, N;
	string inputScore;
	cin >> T;
	cin >> N;
	cin >> inputScore;




}
