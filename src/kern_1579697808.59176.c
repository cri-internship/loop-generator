#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(530, 960, "random");
	double ***A = create_three_dim_double(610, 570, 50, "random");
	double **E = create_two_dim_double(750, 300, "random");
	double ***B = create_three_dim_double(370, 480, 670, "random");
	double ***C = create_three_dim_double(150, 50, 890, "random");

	for (int d = 0; d < 955; d++)
	  for (int c = 0; c < 526; c++)
	    for (int b = 0; b < 526; b++)
	      for (int a = 0; a < 526; a++)
	      {
	        
	       D[a][b]=D[a][b]+E[a][b]-B[a][b][c]*C[a][b][c]/A[a][b][c];
	       A[a][b][c]=D[a+4][b+5]*A[a][b][c];
	      }

    return 0;
}