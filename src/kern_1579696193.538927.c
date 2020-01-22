#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(410, 930, 650, "random");
	float *A = create_one_dim_float(190, "random");
	float **C = create_two_dim_float(600, 710, "random");

	for (int c = 3; c < 650; c++)
	  for (int b = 4; b < 706; b++)
	    for (int a = 5; a < 190; a++)
	    {
	      
	      C[a][b]=C[a+4][b+2]-0.036;
	      
	      C[a][b]=C[a+5][b+4]+0.671;
	      
	      B[a][b][c]=0.769+C[a][b];
	      B[a-2][b-4][c-3]=0.158;
	      
	      A[a]=0.361;
	      A[a-5]=0.854;
	      
	      A[a]=0.366;
	      
	      float var_a=A[a]-0.373;
	      float var_b=A[a-4]+0.076;
	    }

    return 0;
}