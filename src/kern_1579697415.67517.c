#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(800, "ones");
	int **A = create_two_dim_int(300, 160, "ones");
	int *C = create_one_dim_int(510, "ones");

	for (int c = 0; c < 156; c++)
	  for (int b = 5; b < 296; b++)
	    for (int a = 5; a < 296; a++)
	    {
	      
	      B[a]=C[a]-A[a][b];
	      B[a]=A[a][b]*C[a];
	      
	      int var_a=C[a]/6;
	      int var_b=C[a-2]+44;
	      
	      int var_c=C[a]*19;
	      
	      B[a]=A[a][b]*B[a]+33;
	      C[a]=A[a+4][b+4]/B[a];
	      
	      int var_e=C[a]-38;
	      
	      int var_g=C[a]*44;
	      int var_h=C[a-5]*5;
	    }

    return 0;
}