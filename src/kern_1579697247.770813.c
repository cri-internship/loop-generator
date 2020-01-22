#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(730, 630, 520, "random");
	int *A = create_one_dim_int(190, "random");
	int ***C = create_three_dim_int(820, 960, 810, "random");

	for (int b = 1; b < 630; b++)
	  for (int a = 5; a < 190; a++)
	  {
	    
	     B[a][b][a]=B[a-2][b-1][a-5]*C[a][b][a];
	    
	     A[a]=A[a]*B[a][b][a]/6;
	     C[a][b][a]=A[a]+C[a][b][a]*B[a][b][a];
	  }

    return 0;
}