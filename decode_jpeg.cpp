#include "stdafx.h"
#include "decode_jpeg.h"
#include "math.h"
#include "malloc.h"
#define PI 3.1415926

using namespace std;

double dct[8][8] = { {sqrt(2) / 2, sqrt(2) / 2, sqrt(2) / 2, sqrt(2) / 2, sqrt(2) / 2, sqrt(2) / 2, sqrt(2) / 2, sqrt(2) / 2},
{cos(PI / 16), cos(3 * PI / 16), cos(5 * PI / 16), cos(7 * PI / 16), cos(9 * PI / 16), cos(11 * PI / 16), cos(13 * PI / 16), cos(15 * PI / 16)},
{ cos(2 * PI / 16), cos(6 * PI / 16), cos(10 * PI / 16), cos(14 * PI / 16), cos(18 * PI / 16), cos(22 * PI / 16), cos(26 * PI / 16), cos(30 * PI / 16) },
{ cos(3 * PI / 16), cos(9 * PI / 16), cos(15 * PI / 16), cos(21 * PI / 16), cos(27 * PI / 16), cos(33 * PI / 16), cos(39 * PI / 16), cos(45 * PI / 16) },
{ cos(4 * PI / 16), cos(12 * PI / 16), cos(20 * PI / 16), cos(28 * PI / 16), cos(36 * PI / 16), cos(44 * PI / 16), cos(52 * PI / 16), cos(60 * PI / 16) },
{ cos(5 * PI / 16), cos(15 * PI / 16), cos(25 * PI / 16), cos(35 * PI / 16), cos(45 * PI / 16), cos(55 * PI / 16), cos(65 * PI / 16), cos(75 * PI / 16) },
{ cos(6 * PI / 16), cos(18 * PI / 16), cos(30 * PI / 16), cos(42 * PI / 16), cos(54 * PI / 16), cos(66 * PI / 16), cos(78 * PI / 16), cos(90 * PI / 16) },
{ cos(7 * PI / 16), cos(21 * PI / 16), cos(35 * PI / 16), cos(49 * PI / 16), cos(63 * PI / 16), cos(77 * PI / 16), cos(91 * PI / 16), cos(105 * PI / 16) } };

double dct_transpose[8][8] = { {sqrt(2) / 2, cos(PI / 16), cos(2 * PI / 16), cos(3 * PI / 16), cos(4 * PI / 16), cos(5 * PI / 16), cos(6 * PI / 16), cos(7 * PI / 16)},
{sqrt(2) / 2, cos(3 * PI / 16), cos(6 * PI / 16), cos(9 * PI / 16), cos(12 * PI / 16), cos(15 * PI / 16), cos(18 * PI / 16), cos(21 * PI / 16)},
{sqrt(2) / 2, cos(5 * PI / 16), cos(10 * PI / 16), cos(15 * PI / 16), cos(20 * PI / 16), cos(25 * PI / 16), cos(30 * PI / 16), cos(35 * PI / 16)},
{sqrt(2) / 2, cos(7 * PI / 16), cos(14 * PI / 16), cos(21 * PI / 16), cos(28 * PI / 16), cos(35 * PI / 16), cos(42 * PI / 16), cos(49 * PI / 16)},
{sqrt(2) / 2, cos(9 * PI / 16), cos(18 * PI / 16), cos(27 * PI / 16), cos(36 * PI / 16), cos(45 * PI / 16), cos(54 * PI / 16), cos(63 * PI / 16)},
{sqrt(2) / 2, cos(11 * PI / 16), cos(22 * PI / 16), cos(33 * PI / 16), cos(44 * PI / 16), cos(55 * PI / 16), cos(66 * PI / 16), cos(77 * PI / 16)},
{sqrt(2) / 2, cos(13 * PI / 16), cos(26 * PI / 16), cos(39 * PI / 16), cos(52 * PI / 16), cos(65 * PI / 16), cos(78 * PI / 16), cos(91 * PI / 16)},
{sqrt(2) / 2, cos(15 * PI / 16), cos(30 * PI / 16), cos(45 * PI / 16), cos(60 * PI / 16), cos(75 * PI / 16), cos(90 * PI / 16), cos(105 * PI / 16)} };

double a[8][8] = { {100, 100, 100, 100, 100, 100, 100, 100},
{ 100, 100, 100, 100, 100, 100, 100, 100 },
{ 100, 100, 100, 100, 100, 100, 100, 100 },
{ 100, 100, 100, 100, 100, 100, 100, 100 },
{ 100, 100, 100, 100, 100, 100, 100, 100 },
{ 100, 100, 100, 100, 100, 100, 100, 100 },
{ 100, 100, 100, 100, 100, 100, 100, 100 },
{ 100, 100, 100, 100, 100, 100, 100, 100 }
};

double** FDCT(double **inputdata)
{
	return 0;
}

void multiple(double **dct, double **a, double **dct_transpose)
{
	double **result = (double **)malloc(8 * sizeof(double *));
	for (int i = 0; i < 8; i++)
	{
		result[i] = (double *)malloc(sizeof(double) * 8);
	}

//	for (int j = 0;)
}