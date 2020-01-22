#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(80, "zeros");
	float *E = create_one_dim_float(370, "zeros");
	float *B = create_one_dim_float(180, "zeros");
	float ***C = create_three_dim_float(300, 1000, 200, "zeros");
	float **A = create_two_dim_float(560, 200, "zeros");

	for (int d = 3; d < 200; d++)
	  for (int c = 5; c < 80; c++)
	    for (int b = 5; b < 80; b++)
	      for (int a = 5; a < 80; a++)
	      {
	        
	       A[a][b]=A[a-4][b-3]/0.325;
	        
	       B[a]=B[a+5]/C[a][b][c]+A[a][b]-D[a];
	        
	       D[a]=B[a]-E[a]+E[a]*B[a];
	       D[a-2]=B[a]-C[a][b][c]/E[a]*A[a][b];
	        
	       C[a][b][c]=D[a]*C[a][b][c]/B[a]-E[a];
	       D[a]=D[a-5]*C[a][b][c]/0.922;
	      }

    return 0;
}