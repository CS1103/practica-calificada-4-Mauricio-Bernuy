
auto divideimage_4(int w, int h) {
	vector<pair<pair<int, int>, pair<int, int>>> divisions;
	int div = w / 4;
	divisions.push_back(make_pair(make_pair(0, div), make_pair(0, h))); // q1
	divisions.push_back(make_pair(make_pair(div, div*2), make_pair(0, h))); // q2
	divisions.push_back(make_pair(make_pair(div*2, div*3), make_pair(0, h))); // q3
	divisions.push_back(make_pair(make_pair(div*3, w), make_pair(0, h))); // q4

	return divisions;
}