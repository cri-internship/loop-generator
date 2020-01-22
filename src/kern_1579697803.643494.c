#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(750, 860, 900, "ones");
	double *D = create_one_dim_double(470, "ones");
	double **C = create_two_dim_double(810, 820, "ones");
	double ***A = create_three_dim_double(960, 720, 110, "ones");

	for (int d = 0; d < 899; d++)
	  for (int c = 0; c < 857; c++)
	    for (int b = 0; b < 467; b++)
	      for (int a = 0; a < 467; a++)
	      {
	        
	       D[a]=D[a+3]-A[a][b][c]/C[a][b]*B[a][b][c];
	        
	       B[a][b][c]=B[a+3][b+3][c+1]+0.314;
	      }

    return 0;
}