#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(370, 630, 610, "zeros");
	double ***A = create_three_dim_double(60, 930, 800, "zeros");

	for (int b = 5; b < 627; b++)
	  for (int a = 5; a < 60; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b-2][a-3]-0.98;
	    
	     B[a][b][a]=B[a][b-2][a-5]+0.627;
	    
	     B[a][b][a]=B[a+3][b+3][a+2]-0.331;
	    
	     B[a][b][a]=A[a][b][a]*B[a][b][a];
	     A[a][b][a]=A[a-5][b-5][a]-B[a][b][a];
	  }

    return 0;
}