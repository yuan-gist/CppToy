#include <iostream>
#include "tools.h"
#include<opencv2/opencv.hpp>
#include<string>

void DisplayImages(){
    cv::Mat image = cv::imread("lena.jpeg", 0); // lena.png should be present with main
    std::string window_name = "Lena";
    cv::namedWindow(window_name, cv::WINDOW_AUTOSIZE );
    cv::imshow(window_name, image);
    cv::waitKey(0);
}

void wrong_types(){
    cv::Mat image = cv::Mat::zeros(10, 10, CV_8UC3);
    std::string window_name = "wrong types";
    cv::namedWindow(window_name, cv::WINDOW_AUTOSIZE);
    // cv::imshow(window_name, image);
    // cv::waitKey(0);

    for(int r=0; r<image.rows; r++){
        for(int c=0; r<image.cols; c++){
            image.at<cv::Vec3b>(r,c) = {1,1,1};
        }
    }
    cv::waitKey(0);
}


// int main(int argc, char** argv )
// {
//     if ( argc != 2 )
//     {
//         printf("usage: DisplayImage.out <Image_Path>\n");
//         return -1;
//     }
//     Mat image;
//     image = imread( argv[1], 1 );
//     if ( !image.data )
//     {
//         printf("No image data \n");
//         return -1;
//     }
//     namedWindow("Display Image", WINDOW_AUTOSIZE );
//     imshow("Display Image", image);
//     waitKey(0);
//     return 0;
// }