#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;
// Mat as image container
void display(){
    string filePath = "../images/sample.jpg";
    Mat image  = imread(filePath, IMREAD_COLOR);
    namedWindow( "Display window", WINDOW_AUTOSIZE );
    imshow("Display Image", image);

    waitKey(0);

}
int main()
{
    display();
    return 0;
}