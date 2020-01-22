#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(330, 510, 740, "random");
	double **D = create_two_dim_double(350, 480, "random");
	double ***C = create_three_dim_double(530, 620, 590, "random");
	double *B = create_one_dim_double(570, "random");

	for (int b = 0; b < 620; b++)
	  for (int a = 1; a < 529; a++)
	  {
	    
	     C[a][b][a]=B[a];
	     C[a][b][a-1]=D[a][b];
	    
	     B[a]=C[a][b][a]/A[a][b][a];
	     D[a][b]=C[a][b][a+1]+A[a][b][a]/B[a]*D[a][b];
	  }

    return 0;
}