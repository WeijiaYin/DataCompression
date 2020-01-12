#include "stdafx.h"
#include "split_image.h"

int size = 0;
int i = 0;
int j = 0;
int k = 0;
Mat img;
Mat img_roi1;
Mat img_roi;

void split_image(char *img_path, int x, int y, int width, int height)
{
	img = imread(img_path);
	size = img.dataend - img.datastart;

	img_roi1 = img(Rect(x, y, width, height));
	img_roi = img_roi1.clone();

	for (i = y; i < y + height; i++)
	{
		for (j = x; j < x + width; j++)
		{
			for (k = 0; k < 3; k++)
			{
				img.at<Vec3b>(i, j)[k] = 0;
			}
		}
	}
}


Mat getImg()
{
	return img;
}

Mat getImgRoi()
{
	return img_roi;
}