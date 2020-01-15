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

/*int main()
{
	split_image("D:\\lenna.bmp", 240, 250, 110, 120);
	Mat img = getImg();
	Mat img_roi = getImgRoi();
	imwrite("lena.bmp", img);
//	imshow("image", img);
//	imshow("ROI", img_roi);

//	Mat ycb;
//	cvtColor(img, ycb, CV_BGR2YCrCb);
	//Mat y = Mat(512, 512, CV_8UC1);
	//Mat cr = Mat(512, 512, CV_8UC1);
	//Mat cb = Mat(512, 512, CV_8UC1);
//	vector<Mat> mv;
//	mv.resize(3);
//	split(ycb, mv);
//	Mat y = mv[0];
//	Mat cr = mv[1];
//	Mat cb = mv[2];
	
//	int **y_array = Mat2Array(y);
//	int **cr_array = Mat2Array(cr);
//	int **cb_array = Mat2Array(cb);


//	imshow("y", y);
//	imshow("cr", cr);
//	imshow("cb", cb);


//	cvWaitKey();
	return 0;

}*/

int main()
{
	FILE *fp = fopen("out1.jpg", "rb");
	FILE *f1 = fopen("q.jpg", "wb");
	FILE *f2 = fopen("l.jpg", "wb");

/*	char buffer[31097];
	fread(buffer, 1, 31097, fp);
	fwrite(buffer, 1, 31097, f1);
	fwrite(buffer, 1, 31097, f2);
	fclose(f1);
	fclose(fp);
	fclose(f2);*/
/*	char buffer[27483];
	fread(buffer, 1, 27483, fp);
	fwrite(buffer, 1, 27483, f1);
	
	fclose(fp);
	fclose(f1);*/

	char buffer[22];
	fread(buffer, 1, 22, fp);
	fwrite(buffer, 1, 22, f1);
	fwrite(buffer, 1, 22, f2);
	char buffer1[132];
	fread(buffer1, 1, 132, fp);
	fwrite(buffer1, 1, 132, f1);
	fseek(fp, 2, SEEK_CUR);
	fread(buffer1, 1, 132, fp);
	fwrite(buffer1, 1, 132, f2);
	char buffer5[453];
	fread(buffer5, 1, 453, fp);
	fwrite(buffer5, 1, 453, f1);
	fwrite(buffer5, 1, 453, f2);
	char buffer2[26852];
	fread(buffer2, 1, 26852, fp);
	fwrite(buffer2, 1, 26852, f1);
	char buffer3[30490];
	fread(buffer3, 1, 30490, fp);
	fwrite(buffer3, 1, 30490, f2);
	fclose(fp);
	fclose(f1);
	fclose(f2);
/*	Mat a = imread("p.jpg");
	imshow("fsa", a);
	cvWaitKey();*/
	return 0;
}

