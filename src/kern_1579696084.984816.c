#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(800, 270, "ones");
	int **B = create_two_dim_int(880, 470, "ones");
	int **C = create_two_dim_int(110, 320, "ones");
	int *D = create_one_dim_int(720, "ones");
	int *E = create_one_dim_int(920, "ones");

	for (int d = 5; d < 320; d++)
	  for (int c = 5; c < 110; c++)
	    for (int b = 5; b < 110; b++)
	      for (int a = 5; a < 110; a++)
	      {
	        
	       E[a]=E[a-1]-11;
	        
	       C[a][b]=C[a-5][b-2]*D[a]-B[a][b]+A[a][b];
	        
	       C[a][b]=C[a-4][b-5]*E[a]/B[a][b]-D[a];
	        
	       E[a]=E[a-5]+C[a][b]/A[a][b]*B[a][b];
	        
	       float  var_a=E[a]+38;
	        
	       D[a]=D[a+2]*10;
	      }

    return 0;
}