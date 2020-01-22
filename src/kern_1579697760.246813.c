#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(810, 500, "zeros");
	float ***B = create_three_dim_float(830, 520, 160, "zeros");

	for (int b = 0; b < 500; b++)
	  for (int a = 2; a < 810; a++)
	  {
	    
	     B[a][b][a]=B[a][b+1][a]-0.816;
	    
	     B[a][b][a]=B[a][b][a]/0.815;
	     A[a][b]=B[a+1][b+1][a]/0.013;
	    
	     B[a][b][a]=A[a][b]/0.495;
	     A[a][b]=A[a-2][b]*B[a][b][a];
	  }

    return 0;
}