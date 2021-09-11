#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

//////   Import images  ////////////////

//void main() {
//
//	string path ="resources/test.png";
//	mat img = imread(path);
//	imshow("image",img);
//	waitkey(0);
//
//}






//////   Import viedo  ////////////////
//
//void main() {
// 
//	string path = "resources/test_video.mp4";
//	videocapture cap(path);
//	mat img;
//   	while (true)
//	{
//		cap.read(img);
//		imshow("image", img);
//		waitkey(0);   
//	}
// 
//}
//





//////   Webcam  ////////////////

void main() {

	VideoCapture cap(0);
	Mat img;
	while (true)
	{
		cap.read(img);
		imshow("Image", img);
		waitKey(1);
	}

}
