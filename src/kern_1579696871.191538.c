#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(60, 100, 50, "random");
	double ***D = create_three_dim_double(420, 480, 980, "random");
	double ***B = create_three_dim_double(900, 430, 320, "random");
	double **C = create_two_dim_double(20, 470, "random");

	for (int b = 5; b < 99; b++)
	  for (int a = 2; a < 20; a++)
	  {
	    
	     B[a][b][a]=B[a+2][b+5][a+4]+C[a][b]*D[a][b][a];
	    
	     A[a][b][a]=A[a+4][b+1][a+2]/0.32;
	    
	     C[a][b]=B[a][b][a];
	     C[a-2][b-5]=A[a][b][a];
	  }

    return 0;
}