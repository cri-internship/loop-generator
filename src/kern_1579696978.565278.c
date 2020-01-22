#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(80, 720, 480, "random");
	double *B = create_one_dim_double(480, "random");
	double **D = create_two_dim_double(170, 300, "random");
	double ***C = create_three_dim_double(580, 260, 130, "random");

	for (int c = 0; c < 475; c++)
	  for (int b = 5; b < 300; b++)
	    for (int a = 3; a < 76; a++)
	    {
	      
	      B[a]=0.285;
	      float  var_a=B[a]*0.546;
	      
	      D[a][b]=D[a-3][b-5]/A[a][b][c]+B[a];
	      
	      A[a][b][c]=D[a][b];
	      A[a+2][b][c+3]=0.54;
	      
	      B[a]=A[a][b][c]+C[a][b][c]-D[a][b];
	      D[a][b]=A[a+4][b+3][c+5]/C[a][b][c]-D[a][b];
	      
	      double var_b=D[a][b]/0.949;
	      double var_c=D[a-3][b-3]*0.131;
	      
	      double var_d=A[a][b][c]-0.824;
	      double var_e=A[a+1][b+5][c]+0.159;
	    }

    return 0;
}