#ifndef _SPLIT_IMAGE_H
#define _SPLIT_IMAGE_H
#include <opencv2/highgui/highgui.hpp> 
#include <opencv2/imgproc/imgproc.hpp> 
#include <opencv2/core/core.hpp> 

using namespace cv;

void split_image(char *img_path, int x, int y, int width, int height);
Mat getImg();
Mat getImgRoi();

#endif _SPLIT_IMAGE_H



