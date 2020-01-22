#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *D = create_one_dim_float(240, "ones");
	float **B = create_two_dim_float(560, 830, "ones");
	float ***C = create_three_dim_float(30, 450, 440, "ones");
	float **A = create_two_dim_float(620, 310, "ones");

	for (int c = 3; c < 440; c++)
	  for (int b = 5; b < 305; b++)
	    for (int a = 3; a < 30; a++)
	    {
	      
	      B[a][b]=B[a][b-1]*A[a][b]/C[a][b][c];
	      
	      B[a][b]=B[a][b+5]/D[a]-A[a][b];
	      
	      A[a][b]=B[a][b];
	      A[a-3][b-5]=0.368-D[a];
	      
	      C[a][b][c]=0.769;
	      C[a][b-4][c-3]=0.139;
	      
	      A[a][b]=0.564;
	      
	      D[a]=B[a][b];
	      D[a-2]=A[a][b]*B[a][b]/C[a][b][c];
	      
	      D[a]=D[a]/C[a][b][c]-0.079;
	      B[a][b]=D[a+1]+B[a][b]*A[a][b]/0.348;
	    }

    return 0;
}