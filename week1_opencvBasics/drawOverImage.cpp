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

    // Draw a circle
    //cv:: circle ( image, center, radius, color of border, line thickness / fill type, line type)
    Mat imageCircle = image.clone();
    circle(imageCircle, Point(100,100), 50, Scalar(0,255,0), 5, CV_AA);
    imshow("circle",imageCircle);
    imwrite("../result/imageCircle.jpg", imageCircle);

    //cv:: ellipse ( image, center, axes lengths, rotation degree of ellipse,
    //               starting angle , ending angle, color, line thickness / fill type, line type)
    //# IMP Note: Ellipse Centers and Axis lengths must be integers
    Mat imageEllipse = image.clone();
    ellipse(imageEllipse, Point(360,200), Size(100, 170), 45, 0, 360, Scalar(255, 0, 0), 1, 8);
    ellipse(imageEllipse, Point(360,200), Size(100, 170), 135, 0, 360, Scalar(0, 0, 255), 1, 8);
    imshow("ellipse", imageEllipse);
    imwrite("imageEllipse.jpg", imageEllipse);
    //cv:: rectangle ( image, upper left corner vertex, lower right corner vertex,
    //                 line thickness / fill type, line type)
    Mat imageRectangle = image.clone();
    rectangle(imageRectangle, Point(208, 55), Point(450, 355), Scalar(0, 255, 0), 1, 8);
    imshow("rectangle", imageRectangle);
    imwrite("imageRectangle.jpg", imageRectangle);

    //cv :: putText ( image, text, starting point of text, font type,
    //                 font scale, color, linetype )
    Mat imageText = image.clone();
    putText(imageText, "Mark Zuckerberg", Point(205,50), FONT_HERSHEY_SIMPLEX, 1, Scalar(0, 255, 0), 1);
    imshow("text", imageText);
    imwrite("imageText.jpg", imageText);


    waitKey(0);
    destroyAllWindows();
}
int main()
{
    draw();
    return 0;
}