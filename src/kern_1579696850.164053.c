#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(950, 620, "random");
	int **E = create_two_dim_int(150, 680, "random");
	int ***B = create_three_dim_int(410, 480, 660, "random");
	int *C = create_one_dim_int(160, "random");
	int **A = create_two_dim_int(560, 660, "random");

	for (int d = 0; d < 616; d++)
	  for (int c = 5; c < 149; c++)
	    for (int b = 5; b < 149; b++)
	      for (int a = 5; a < 149; a++)
	      {
	        
	       D[a][b]=D[a-1][b]-A[a][b]+C[a]/4*E[a][b];
	        
	       E[a][b]=E[a+1][b+2]*D[a][b]+B[a][b][c];
	        
	       A[a][b]=A[a][b+2]*B[a][b][c]+E[a][b]-C[a]/D[a][b];
	        
	       A[a][b]=47;
	        
	       D[a][b]=31;
	        
	       int var_a=C[a]/14;
	       int var_b=C[a-5]*0;
	      }

    return 0;
}