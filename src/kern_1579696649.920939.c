#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(610, "random");
	double ***C = create_three_dim_double(340, 160, 900, "random");
	double **A = create_two_dim_double(820, 660, "random");

	for (int b = 5; b < 157; b++)
	  for (int a = 4; a < 336; a++)
	  {
	    
	     C[a][b][a]=0.115;
	     C[a+4][b+3][a+1]=0.819;
	    
	     A[a][b]=0.494;
	     A[a][b-5]=0.999;
	    
	     C[a][b][a]=A[a][b]/C[a][b][a]-B[a];
	     B[a]=A[a-4][b-5]/C[a][b][a]-0.275;
	  }

    return 0;
}