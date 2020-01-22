#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(310, 550, 280, "ones");
	float *A = create_one_dim_float(170, "ones");
	float **B = create_two_dim_float(360, 260, "ones");

	for (int d = 0; d < 275; d++)
	  for (int c = 4; c < 256; c++)
	    for (int b = 5; b < 170; b++)
	      for (int a = 5; a < 170; a++)
	      {
	        
	       A[a]=0.824;
	       A[a]=0.268;
	        
	       C[a][b][c]=0.81;
	       C[a+5][b+1][c+5]=0.299;
	        
	       C[a][b][c]=A[a]*0.411;
	        
	       float var_a=B[a][b]+0.196;
	       float var_b=B[a-5][b-2]*0.542;
	        
	       float var_c=B[a][b]*0.153;
	       float var_d=B[a][b+4]/0.35;
	        
	       float var_e=B[a][b]*0.057;
	       float var_f=B[a-4][b-4]/0.241;
	        
	       C[a][b][c]=A[a]+C[a][b][c]*B[a][b];
	       A[a]=A[a-3]+0.608;
	      }

    return 0;
}