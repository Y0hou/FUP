#include <stdio.h>

int main()
{
    float v1 = 0, v2 = 0, v3 = 0, vt = 0;

    scanf("%f %f %f %f", &v1, &v2, &v3, &vt);

    v1 = (v1/100.0) + vt;
    v2 = (v2/100.0) + vt;
    v3 = (v3/100.0) + vt;


    printf("%.2f \n", v1);
    printf("%.2f \n", v2);
    printf("%.2f \n", v3);

    return 0;
}

