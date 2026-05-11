double multiply_check(float a, float b) {
    double result = (double)a * (double)b;
    return result > 100.0 ? 0.0 : 1.0;
}
