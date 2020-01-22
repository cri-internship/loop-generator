#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(940, 650, "ones");
	int *B = create_one_dim_int(220, "ones");
	int **A = create_two_dim_int(630, 720, "ones");
	int **C = create_two_dim_int(160, 820, "ones");
	int *D = create_one_dim_int(200, "ones");

	for (int b = 2; b < 650; b++)
	  for (int a = 5; a < 155; a++)
	  {
	    
	     C[a][b]=C[a-1][b-2]-D[a];
	    
	     C[a][b]=C[a+5][b+5]/B[a]-A[a][b]+E[a][b];
	    
	     B[a]=B[a+4]/29;
	    
	     E[a][b]=C[a][b]*B[a]/D[a]+A[a][b];
	     E[a-5][b-1]=B[a]/A[a][b];
	  }

    return 0;
}