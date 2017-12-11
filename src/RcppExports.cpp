// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _spmirt_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}
// ifa_gibbs
Rcpp::List ifa_gibbs(Rcpp::NumericVector y, int n, int q, int N, int m);
RcppExport SEXP _spmirt_ifa_gibbs(SEXP ySEXP, SEXP nSEXP, SEXP qSEXP, SEXP NSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(ifa_gibbs(y, n, q, N, m));
    return rcpp_result_gen;
END_RCPP
}
// ifa_gibbs_no
Rcpp::List ifa_gibbs_no(Rcpp::NumericVector y, int n, int q, int N, int m);
RcppExport SEXP _spmirt_ifa_gibbs_no(SEXP ySEXP, SEXP nSEXP, SEXP qSEXP, SEXP NSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(ifa_gibbs_no(y, n, q, N, m));
    return rcpp_result_gen;
END_RCPP
}
// test
arma::vec test(arma::vec y);
RcppExport SEXP _spmirt_test(SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(test(y));
    return rcpp_result_gen;
END_RCPP
}
// vec2mat
arma::mat vec2mat(arma::vec x, int nrow, int ncol);
RcppExport SEXP _spmirt_vec2mat(SEXP xSEXP, SEXP nrowSEXP, SEXP ncolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    rcpp_result_gen = Rcpp::wrap(vec2mat(x, nrow, ncol));
    return rcpp_result_gen;
END_RCPP
}
// vec2matt
arma::mat vec2matt(arma::vec x, int nrow, int ncol);
RcppExport SEXP _spmirt_vec2matt(SEXP xSEXP, SEXP nrowSEXP, SEXP ncolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    rcpp_result_gen = Rcpp::wrap(vec2matt(x, nrow, ncol));
    return rcpp_result_gen;
END_RCPP
}
// theta2mat
arma::mat theta2mat(arma::vec a, int q, int m);
RcppExport SEXP _spmirt_theta2mat(SEXP aSEXP, SEXP qSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type a(aSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(theta2mat(a, q, m));
    return rcpp_result_gen;
END_RCPP
}
// rcpptn_hello_world
List rcpptn_hello_world();
RcppExport SEXP _spmirt_rcpptn_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpptn_hello_world());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_spmirt_rcpp_hello_world", (DL_FUNC) &_spmirt_rcpp_hello_world, 0},
    {"_spmirt_ifa_gibbs", (DL_FUNC) &_spmirt_ifa_gibbs, 5},
    {"_spmirt_ifa_gibbs_no", (DL_FUNC) &_spmirt_ifa_gibbs_no, 5},
    {"_spmirt_test", (DL_FUNC) &_spmirt_test, 1},
    {"_spmirt_vec2mat", (DL_FUNC) &_spmirt_vec2mat, 3},
    {"_spmirt_vec2matt", (DL_FUNC) &_spmirt_vec2matt, 3},
    {"_spmirt_theta2mat", (DL_FUNC) &_spmirt_theta2mat, 3},
    {"_spmirt_rcpptn_hello_world", (DL_FUNC) &_spmirt_rcpptn_hello_world, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_spmirt(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
