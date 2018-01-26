//
// Created by Jin Zhu on 1/26/18.
// Drawing on image

#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;
// Mat as image container
void draw(){
    string filePath = "../images/sample.jpg";
    //load image
    Mat image  = imread(filePath, IMREAD_COLOR);

    // Draw a line
    //cv::line ( image, starting point , end point , color , line thickness, line type)
    // We are making a copy of image because we don't want to draw all the shapes on one image
    Mat imageLine = image.clone();
    //Scalar(B,G, R)
    line(imageLine, Point(0,0), Point(400, 400), Scalar(0, 0, 255), 5, CV_AA);
    imshow("line", imageLine);
    imwrite("../result/imageLine.jpg", imageLine);
    waitKey(0);
    destroyAllWindows();
}
int main()
{
    draw();
    return 0;
}