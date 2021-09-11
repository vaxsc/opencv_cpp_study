#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

//////   Resize and Crop ////////////////

void main() {

	string path = "resources/test.png";
	Mat img = imread(path);
	Mat imgResize,imgCrop;

	resize(img, imgResize, Size(),0.5,0.5);

	Rect roi(200, 100, 300, 300);
	imgCrop = img(roi);


	imshow("image",img);
	imshow("imageResize", imgResize);
	imshow("imageCrop", imgCrop);


	waitKey(0);

}
