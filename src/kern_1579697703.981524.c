#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(1000, 600, "zeros");
	double ***A = create_three_dim_double(730, 980, 340, "zeros");
	double **D = create_two_dim_double(650, 650, "zeros");
	double ***B = create_three_dim_double(650, 70, 100, "zeros");
	double **E = create_two_dim_double(940, 610, "zeros");

	for (int d = 0; d < 608; d++)
	  for (int c = 0; c < 937; c++)
	    for (int b = 0; b < 937; b++)
	      for (int a = 0; a < 937; a++)
	      {
	        
	       E[a][b]=C[a][b];
	       E[a+3][b+2]=B[a][b][c]-D[a][b];
	      }

    return 0;
}