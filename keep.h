#include <vector>
#include <thread>
#include <chrono>
#include "matrixcleardiff.h"
#include "divideimage.h"
using namespace std;

auto keep(char sel, vector<unsigned char> img, int w, int h) {
	// divide image into 4 sections
	auto divisions = divideimage_4(w, h);
	// process each section in it's own thread
	thread t1(matrixcleardiff, sel, ref(img), divisions[0]);
	thread t2(matrixcleardiff, sel, ref(img), divisions[1]);
	thread t3(matrixcleardiff, sel, ref(img), divisions[2]);
	thread t4(matrixcleardiff, sel, ref(img), divisions[3]);
	t1.join();
	t2.join();
	t3.join();
	t4.join();
	return img;
}
