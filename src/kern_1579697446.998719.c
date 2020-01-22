#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(730, 430, 1000, "random");
	double **E = create_two_dim_double(320, 340, "random");
	double ***D = create_three_dim_double(560, 310, 100, "random");
	double **C = create_two_dim_double(620, 180, "random");
	double ***A = create_three_dim_double(750, 870, 580, "random");

	for (int d = 0; d < 577; d++)
	  for (int c = 0; c < 868; c++)
	    for (int b = 0; b < 745; b++)
	      for (int a = 0; a < 745; a++)
	      {
	        
	       A[a][b][c]=A[a+5][b+2][c+3]/B[a][b][c]-D[a][b][c]*C[a][b]+E[a][b];
	      }

    return 0;
}