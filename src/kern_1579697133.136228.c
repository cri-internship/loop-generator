#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *E = create_one_dim_float(830, "ones");
	float **A = create_two_dim_float(260, 610, "ones");
	float **B = create_two_dim_float(370, 50, "ones");
	float *D = create_one_dim_float(970, "ones");
	float **C = create_two_dim_float(620, 600, "ones");

	for (int d = 1; d < 605; d++)
	  for (int c = 4; c < 258; c++)
	    for (int b = 4; b < 258; b++)
	      for (int a = 4; a < 258; a++)
	      {
	        
	       C[a][b]=A[a][b]+B[a][b]*E[a]/C[a][b];
	       B[a][b]=A[a+2][b+5]*D[a]+D[a]-C[a][b]/B[a][b];
	        
	       float var_a=A[a][b]-0.241;
	       float var_b=A[a-4][b-1]/0.9;
	      }

    return 0;
}