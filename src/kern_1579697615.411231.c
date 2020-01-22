#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(440, 760, "zeros");
	int ***A = create_three_dim_int(190, 710, 770, "zeros");
	int ***B = create_three_dim_int(910, 590, 340, "zeros");
	int ***C = create_three_dim_int(530, 270, 780, "zeros");

	for (int b = 4; b < 270; b++)
	  for (int a = 5; a < 187; a++)
	  {
	    
	     D[a][b]=D[a-3][b-4]-C[a][b][a];
	    
	     B[a][b][a]=B[a][b-2][a-5]/D[a][b]*A[a][b][a]+D[a][b];
	    
	     A[a][b][a]=A[a+2][b+1][a+1]-30;
	    
	     A[a][b][a]=B[a][b][a]/C[a][b][a]+B[a][b][a];
	    
	     C[a][b][a]=A[a][b][a]/B[a][b][a]*D[a][b];
	     C[a-3][b-4][a-2]=B[a][b][a]/A[a][b][a];
	    
	     int var_a=A[a][b][a]+24;
	     int var_b=A[a-1][b-3][a-5]-16;
	    
	     int var_c=D[a][b]+23;
	     int var_d=D[a+2][b+1]+46;
	  }

    return 0;
}