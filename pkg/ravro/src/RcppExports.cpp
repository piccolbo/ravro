// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// default_if_null
List default_if_null(List x, RObject default_value);
RcppExport SEXP ravro_default_if_null(SEXP xSEXP, SEXP default_valueSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type x(xSEXP );
        Rcpp::traits::input_parameter< RObject >::type default_value(default_valueSEXP );
        List __result = default_if_null(x, default_value);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// NAs_if_short
List NAs_if_short(List x, unsigned int nc);
RcppExport SEXP ravro_NAs_if_short(SEXP xSEXP, SEXP ncSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< List >::type x(xSEXP );
        Rcpp::traits::input_parameter< unsigned int >::type nc(ncSEXP );
        List __result = NAs_if_short(x, nc);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
