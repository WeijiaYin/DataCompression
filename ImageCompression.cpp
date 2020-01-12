// ImageCompression.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "split_image.h"

using namespace std;


int** Mat2Array(Mat mat)
{

	int **array = new int*[mat.rows];
	for (int i = 0; i < mat.rows; ++i)
		array[i] = new int[mat.cols];
	for (int i = 0; i < mat.rows; ++i)
	{
		for (int j = 0; j < mat.cols; ++j)
		{
			array[i][j] = mat.at<uchar>(i, j);
		}
	}

	return array;
}

int main()
{
	split_image("D:\\lenna.bmp", 240, 250, 110, 120);
	Mat img = getImg();
	Mat img_roi = getImgRoi();
//	imshow("image", img);
//	imshow("ROI", img_roi);

	Mat ycb;
	cvtColor(img, ycb, CV_BGR2YCrCb);
	//Mat y = Mat(512, 512, CV_8UC1);
	//Mat cr = Mat(512, 512, CV_8UC1);
	//Mat cb = Mat(512, 512, CV_8UC1);
	vector<Mat> mv;
	mv.resize(3);
	split(ycb, mv);
	Mat y = mv[0];
	Mat cr = mv[1];
	Mat cb = mv[2];
	
	int **y_array = Mat2Array(y);
	int **cr_array = Mat2Array(cr);
	int **cb_array = Mat2Array(cb);


//	imshow("y", y);
//	imshow("cr", cr);
//	imshow("cb", cb);


//	cvWaitKey();
	return 0;

}

