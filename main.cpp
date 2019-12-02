#include <iostream>
#include <vector>
#include <string_view>
#include "lodepng.h"
#include "keep.h"
#include "imghandling.h"
#include <thread>
#include "rotate.h"
using namespace std;


int main()
{
    unsigned int w;
    unsigned int h;
    auto image = decode("../in.png", w, h);
	thread t1(rotate, ref(image), w, h);

	encode("../red_filter.png", keep('R', image, w, h), w, h);
	encode("../green_filter.png", keep('G', image, w, h) , w, h);
	encode("../blue_filter.png", keep('B', image, w, h), w, h);
	
	t1.join();
	encode("../rotated.png", image, w, h);
    return 0;
}
