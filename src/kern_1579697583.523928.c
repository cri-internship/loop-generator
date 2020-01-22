#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(100, "random");
	float **A = create_two_dim_float(710, 280, "random");
	float ***C = create_three_dim_float(630, 680, 610, "random");
	float ***D = create_three_dim_float(370, 370, 150, "random");
	float ***B = create_three_dim_float(930, 920, 870, "random");

	for (int d = 5; d < 870; d++)
	  for (int c = 0; c < 920; c++)
	    for (int b = 5; b < 100; b++)
	      for (int a = 5; a < 100; a++)
	      {
	        
	       float var_a=E[a]/0.946;
	       float var_b=E[a-5]+0.678;
	        
	       A[a][b]=B[a][b][c]/A[a][b]*E[a]-C[a][b][c];
	       B[a][b][c]=B[a][b][c-5]-D[a][b][c]+D[a][b][c]/A[a][b];
	      }

    return 0;
}