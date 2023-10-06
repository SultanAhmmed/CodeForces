    const double eps = 1e-12;
    double l = 0, r = x;
    for(int i = 0; i < 100; i++){
        double mid = ( l + r ) / 2.0;
        if(mid*mid > x) r = mid;
        else l = mid;
    }
    return floor ( l );
