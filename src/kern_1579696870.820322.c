#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(760, "random");
	int *D = create_one_dim_int(650, "random");
	int ***C = create_three_dim_int(500, 550, 310, "random");
	int ***B = create_three_dim_int(170, 410, 890, "random");
	int *A = create_one_dim_int(70, "random");

	for (int b = 0; b < 407; b++)
	  for (int a = 5; a < 169; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b][a-5]/E[a]-D[a];
	    
	     D[a]=C[a][b][a];
	     C[a][b][a]=D[a]+2;
	    
	     B[a][b][a]=B[a][b+3][a+1]*A[a];
	    
	     int var_a=E[a]+25;
	     int var_b=E[a]+46;
	  }

    return 0;
}