#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(620, 520, "ones");
	int **D = create_two_dim_int(220, 890, "ones");
	int **E = create_two_dim_int(710, 190, "ones");
	int **B = create_two_dim_int(420, 440, "ones");
	int *A = create_one_dim_int(400, "ones");

	for (int b = 1; b < 520; b++)
	  for (int a = 5; a < 400; a++)
	  {
	    
	     D[a][b]=C[a][b]*B[a][b]+A[a];
	     A[a]=C[a-1][b-1]/E[a][b]+D[a][b];
	    
	     int var_a=A[a]/40;
	     int var_b=A[a-5]/46;
	  }

    return 0;
}