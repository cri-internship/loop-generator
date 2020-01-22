#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(710, 800, "random");
	int **A = create_two_dim_int(90, 820, "random");
	int *B = create_one_dim_int(290, "random");
	int *D = create_one_dim_int(630, "random");
	int *C = create_one_dim_int(670, "random");

	for (int d = 0; d < 818; d++)
	  for (int c = 3; c < 87; c++)
	    for (int b = 3; b < 87; b++)
	      for (int a = 3; a < 87; a++)
	      {
	        
	       C[a]=C[a-3]/D[a]+B[a];
	        
	       A[a][b]=C[a]+E[a][b]*D[a]-C[a];
	       A[a+3][b+2]=C[a];
	        
	       B[a]=39;
	       B[a-1]=41;
	        
	       int var_a=C[a]-48;
	       int var_b=C[a+3]-24;
	      }

    return 0;
}