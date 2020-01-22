#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(880, "random");
	int *B = create_one_dim_int(620, "random");
	int **A = create_two_dim_int(630, 130, "random");
	int ***D = create_three_dim_int(610, 140, 330, "random");

	for (int d = 0; d < 129; d++)
	  for (int c = 0; c < 618; c++)
	    for (int b = 0; b < 618; b++)
	      for (int a = 0; a < 618; a++)
	      {
	        
	       C[a]=14;
	       float  var_a=C[a]/20;
	        
	       B[a]=B[a+2]*D[a][b][c]-A[a][b];
	        
	       A[a][b]=A[a+3][b+1]*10;
	        
	       A[a][b]=A[a+1][b]/B[a]-C[a];
	      }

    return 0;
}