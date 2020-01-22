#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(680, 980, 660, "random");
	int ***B = create_three_dim_int(70, 760, 10, "random");
	int *D = create_one_dim_int(950, "random");
	int ***A = create_three_dim_int(620, 740, 800, "random");

	for (int b = 5; b < 740; b++)
	  for (int a = 5; a < 68; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b-5][a-3]/2;
	    
	     B[a][b][a]=B[a+2][b+5][a+2]/A[a][b][a]*C[a][b][a];
	    
	     A[a][b][a]=B[a][b][a]*D[a];
	    
	     D[a]=A[a][b][a];
	     D[a+3]=A[a][b][a];
	    
	     A[a][b][a]=D[a]-C[a][b][a]*B[a][b][a]+A[a][b][a];
	     D[a]=D[a-5]*C[a][b][a]/B[a][b][a]+A[a][b][a];
	  }

    return 0;
}