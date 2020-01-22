#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(180, 40, "random");
	int **E = create_two_dim_int(230, 430, "random");
	int ***D = create_three_dim_int(760, 500, 600, "random");
	int ***C = create_three_dim_int(180, 640, 540, "random");
	int *B = create_one_dim_int(730, "random");

	for (int b = 1; b < 425; b++)
	  for (int a = 5; a < 230; a++)
	  {
	    
	     B[a]=B[a-2]*A[a][b]-D[a][b][a]/E[a][b];
	    
	     D[a][b][a]=D[a+3][b+1][a+5]+C[a][b][a]/B[a]-34*B[a];
	    
	     D[a][b][a]=B[a]+E[a][b];
	    
	     int var_a=E[a][b]/47;
	     int var_b=E[a][b+5]/46;
	  }

    return 0;
}