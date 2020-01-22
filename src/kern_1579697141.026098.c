#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *D = create_one_dim_int(630, "random");
	int **A = create_two_dim_int(380, 360, "random");
	int ***B = create_three_dim_int(90, 50, 940, "random");
	int *C = create_one_dim_int(110, "random");

	for (int b = 2; b < 47; b++)
	  for (int a = 4; a < 86; a++)
	  {
	    
	     A[a][b]=A[a-2][b-2]+D[a]*C[a]-B[a][b][a];
	    
	     A[a][b]=A[a+5][b]*23;
	    
	     D[a]=D[a]/A[a][b];
	     B[a][b][a]=D[a+4]+A[a][b]/B[a][b][a];
	    
	     A[a][b]=C[a]/D[a]*A[a][b]+B[a][b][a];
	     C[a]=C[a-4]-A[a][b];
	    
	     int var_a=A[a][b]*5;
	     int var_b=A[a][b+1]+48;
	    
	     int var_c=B[a][b][a]*48;
	     int var_d=B[a+4][b+3][a+3]/32;
	    
	     int var_e=C[a]*42;
	     int var_f=C[a-3]*14;
	  }

    return 0;
}