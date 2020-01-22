#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(560, 970, "random");
	double ***D = create_three_dim_double(250, 430, 120, "random");
	double **A = create_two_dim_double(760, 660, "random");
	double *C = create_one_dim_double(850, "random");
	double ***B = create_three_dim_double(930, 460, 720, "random");

	for (int d = 5; d < 117; d++)
	  for (int c = 3; c < 427; c++)
	    for (int b = 4; b < 245; b++)
	      for (int a = 4; a < 245; a++)
	      {
	        
	       A[a][b]=A[a-2][b-1]/0.176;
	        
	       D[a][b][c]=D[a-4][b-3][c-5]-0.041;
	        
	       D[a][b][c]=D[a+5][b+3][c+3]/A[a][b]*B[a][b][c];
	        
	       A[a][b]=A[a][b+3]+0.037;
	        
	       C[a]=0.057;
	       C[a-1]=0.027;
	        
	       double var_a=B[a][b][c]/0.685;
	       double var_b=B[a+5][b][c+3]*0.521;
	      }

    return 0;
}