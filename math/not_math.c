double not_pow(double x, double y)
{
    double result = 1;
    for (int i = 0; i < y; i++){
        result *= x;
    }
    return result;
}

