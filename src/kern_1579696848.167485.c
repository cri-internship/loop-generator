#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(610, 280, "zeros");
	int **A = create_two_dim_int(130, 920, "zeros");
	int **E = create_two_dim_int(410, 290, "zeros");
	int ***D = create_three_dim_int(360, 340, 770, "zeros");
	int ***B = create_three_dim_int(820, 590, 820, "zeros");

	for (int b = 1; b < 285; b++)
	  for (int a = 2; a < 129; a++)
	  {
	    
	     D[a][b][a]=D[a][b-1][a-2]+A[a][b]/B[a][b][a]*E[a][b];
	    
	     A[a][b]=A[a+1][b]/42;
	    
	     int var_a=E[a][b]*26;
	     int var_b=E[a+1][b+5]+45;
	  }

    return 0;
}