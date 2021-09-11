#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;



//////    Basic Functions  ////////////////

void main() {

	string path ="resources/test.png";
	Mat img = imread(path);
	Mat imgGray,imgBlur,imgCanny,imgDil,imgErode;
	cvtColor(img,imgGray,COLOR_BGR2GRAY);
	GaussianBlur(img, imgBlur,Size(3,3),5,0);
	Canny(imgBlur,imgCanny,25,75);

	Mat kernel = getStructuringElement(MORPH_RECT, Size(3,3));
	dilate(imgCanny,imgDil,kernel);
	erode(imgDil, imgErode, kernel);


	imshow("image",img);
	imshow("imageGray", imgGray);
	imshow("imageBlur",imgBlur);
	imshow("imageCanny", imgCanny);
	imshow("imageDilation",imgDil);
	imshow("imageErode",imgErode);




	waitKey(0);

}
