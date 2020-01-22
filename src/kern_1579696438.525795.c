#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(960, 720, 50, "zeros");
	double **C = create_two_dim_double(790, 520, "zeros");
	double *A = create_one_dim_double(410, "zeros");

	for (int d = 4; d < 50; d++)
	  for (int c = 3; c < 515; c++)
	    for (int b = 5; b < 407; b++)
	      for (int a = 5; a < 407; a++)
	      {
	        
	       A[a]=A[a-5]*B[a][b][c]/C[a][b];
	        
	       C[a][b]=C[a+4][b+4]-A[a]*0.328;
	        
	       C[a][b]=C[a+4][b+5]*A[a]+B[a][b][c];
	        
	       A[a]=A[a+3]+B[a][b][c]/0.06;
	        
	       B[a][b][c]=0.785;
	       B[a-5][b-3][c-3]=0.82;
	        
	       double var_a=B[a][b][c]-0.057;
	       double var_b=B[a-5][b-3][c-4]*0.452;
	        
	       double var_c=A[a]/0.015;
	       double var_d=A[a+1]*0.734;
	      }

    return 0;
}