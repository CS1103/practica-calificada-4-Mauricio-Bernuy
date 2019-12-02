


void swapping(vector<unsigned char>& i1, int s1, vector<unsigned char>& i2, int s2) {
	swap(i1[s1], i2[s2]);
}
void rotate(vector<unsigned char>& image, int w, int h) {
	for (size_t i = 0; i < h; i++) {
		for (size_t j = 0; j < w * 4; j += 4) {
			int t = i * w * 4 + j;
			swapping(image, t + 0, image, (t - 2 * i + 0));
			swapping(image, t + 1, image, (t - 2 * i + 1));
			swapping(image, t + 2, image, (t - 2 * i + 2));
			swapping(image, t + 3, image, (t - 2 * i + 3));
		}
	}
	rotate(image.begin() + 50, image.begin() + 100, image.end());
	rotate(image.begin() + 50, image.begin() + 100, image.end());
	rotate(image.begin() + 50, image.begin() + 100, image.end());
	rotate(image.begin() + 50, image.begin() + 100, image.end());
	rotate(image.begin() + 50, image.begin() + 100, image.end());
	rotate(image.begin() + 50, image.begin() + 100, image.end());
}