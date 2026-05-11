typedef struct {
    double product;
    int range;
} MultiplyResult;

MultiplyResult multiply_check(float a, float b) {
    MultiplyResult res;
    res.product = (double)a * (double)b;
    if (res.product > 100.0) res.range = 0;
    else if (res.product < 0.0) res.range = -1;
    else res.range = 1;
    return res;
}
