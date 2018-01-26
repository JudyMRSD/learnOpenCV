#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;
// Mat as image container
void display(){
    string filePath = "../images/sample.jpg";
    //load image
    Mat image  = imread(filePath, IMREAD_COLOR);
    if(image.empty()) // Check for invalid input
    {
        cout <<  "Could not open or find the image" << std::endl ;
        return;
    }

    //Gray scale
    Mat grayImage;
    //convert color image to gray
    cvtColor(image, grayImage, COLOR_RGB2GRAY);
    //Display image
    //create a window for display
    //the user cannot resize the window, the size is constrainted by the image displayed.
    namedWindow( "Display window", WINDOW_AUTOSIZE );
    //the user can resize the window
    namedWindow("gray image",WINDOW_NORMAL);

    // Show our image inside it
    imshow("Display Color Image", image);
    imshow("gray image", grayImage);

    //save image
    imwrite("../result/color.jpg", image);
    imwrite("../result/gray.jpg", grayImage);
    //waitKey displays the image for specified milliseconds.
    // Otherwise, it won’t display the image.
    // For example, waitKey(0) will display the window infinitely until any keypress
    waitKey(0);
    destroyAllWindows();

}
int main()
{
    display();
    return 0;
}