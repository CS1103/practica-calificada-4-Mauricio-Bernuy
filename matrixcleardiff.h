#include <vector>
using namespace std;

void matrixcleardiff(char s, vector<unsigned char>& img, pair<pair<int,int>,pair<int,int>> quadrant) {
	
	for (size_t i = quadrant.first.first; i < quadrant.first.second; i++) { // h.begin, h.end
		for (size_t j = quadrant.second.first; j < quadrant.second.second * 4; j += 4) { // w.begin, w.end
			if (s != 'R') img[i * quadrant.second.second * 4 + j + 0] = 0; // Red component
			if (s != 'G') img[i * quadrant.second.second * 4 + j + 1] = 0; // Green component
			if (s != 'B') img[i * quadrant.second.second * 4 + j + 2] = 0; // Blue component	
		}
	}
}