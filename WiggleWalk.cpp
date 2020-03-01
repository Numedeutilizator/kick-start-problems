#include <iostream>
#include <vector>
using namespace std;


int testCases, numberOfRows, numberOfColumns, numberOfInstructions, firstX, firstY;
char directions;
bool wasHere = false;	
std::vector<int> x = { firstX };
std::vector<int> y = { firstY };

int move(direction){
	if (direction == 'N') {
			int positionx = x[x.size() - 1];
			positionx = positionx + 1;
			x.push_back(positionx);
			return x;
			}
		else if (direction == 'S') {
			int positionx = x[x.size() - 1];
			positionx = positionx + 1;
			x.push_back(positionx);
			return x;
		}
		else if (direction == 'E'){
			int positiony = y.[y.size() - 1];
			positiony = positiony + 1;
			y.push_back(positiony);
			return y;
		}
		else if (direction == 'W'){
			int positiony = y.[y.size() - 1];
			positiony = positiony - 1;
			y.push_back(positiony);
			return y;
		}	
	}

	bool visited(directions){
	bool wasHere = false;
	if (directions == 'W' || directions == 'E'){
			int futurePosition = x[x.size()- 1] + 1;
			for (int k = 0;k < x.size() - 1;k++){
				if (futurePosition == x[k]){
					wasHere = true;
				}
			}
		}
	if (directions == 'S' || directions == 'N'){
			int futurePosition = y[y.size()- 1] + 1;
			for (int k = 0;k < y.size() - 1;k++){
				if (futurePosition == x[k]){
					wasHere = true;
				}
			}
	}
	return wasHere;		
}	
	void movedontpush(direction){
	if (direction == 'N') {
			int positionx = x[x.size() - 1];
			positionx = positionx + 1;
			}
		else if (direction == 'S') {
			int positionx = x[x.size() - 1];
			positionx = positionx + 1;
		}
		else if (direction == 'E'){
			int positiony = y.[y.size() - 1];
			positiony = positiony + 1;
		}
		else if (direction == 'W'){
			int positiony = y.[y.size() - 1];
			positiony = positiony - 1;
		}	
}



int main() {
	cin >> testCases;
	cin >> numberOfInstructions >> numberOfRows >> numberOfColumns >> firstX >> firstY;
	for (int currentInstruction = 0; currentInstruction < numberOfInstructions; currentInstruction++) {
		cin >> directions;
		wasHere = visited(directions);
		if (wasHere == False){
			move(directions);
		}
		else {	
			move_dontPush(directions);
	
	}

