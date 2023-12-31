// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppThread.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// long2squareform
DataFrame long2squareform(const DataFrame& data, bool symmetric);
RcppExport SEXP _lingdist_long2squareform(SEXP dataSEXP, SEXP symmetricSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const DataFrame& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< bool >::type symmetric(symmetricSEXP);
    rcpp_result_gen = Rcpp::wrap(long2squareform(data, symmetric));
    return rcpp_result_gen;
END_RCPP
}
// edit_dist_string
List edit_dist_string(const String& str1, const String& str2, Nullable<DataFrame> cost_mat, const String& delim, bool return_alignments);
RcppExport SEXP _lingdist_edit_dist_string(SEXP str1SEXP, SEXP str2SEXP, SEXP cost_matSEXP, SEXP delimSEXP, SEXP return_alignmentsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const String& >::type str1(str1SEXP);
    Rcpp::traits::input_parameter< const String& >::type str2(str2SEXP);
    Rcpp::traits::input_parameter< Nullable<DataFrame> >::type cost_mat(cost_matSEXP);
    Rcpp::traits::input_parameter< const String& >::type delim(delimSEXP);
    Rcpp::traits::input_parameter< bool >::type return_alignments(return_alignmentsSEXP);
    rcpp_result_gen = Rcpp::wrap(edit_dist_string(str1, str2, cost_mat, delim, return_alignments));
    return rcpp_result_gen;
END_RCPP
}
// edit_dist_df
DataFrame edit_dist_df(const DataFrame& data, Nullable<DataFrame> cost_mat, const String& delim, bool squareform, bool symmetric, bool parallel, int n_threads);
RcppExport SEXP _lingdist_edit_dist_df(SEXP dataSEXP, SEXP cost_matSEXP, SEXP delimSEXP, SEXP squareformSEXP, SEXP symmetricSEXP, SEXP parallelSEXP, SEXP n_threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const DataFrame& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Nullable<DataFrame> >::type cost_mat(cost_matSEXP);
    Rcpp::traits::input_parameter< const String& >::type delim(delimSEXP);
    Rcpp::traits::input_parameter< bool >::type squareform(squareformSEXP);
    Rcpp::traits::input_parameter< bool >::type symmetric(symmetricSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter< int >::type n_threads(n_threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(edit_dist_df(data, cost_mat, delim, squareform, symmetric, parallel, n_threads));
    return rcpp_result_gen;
END_RCPP
}
// check_cost_defined
StringVector check_cost_defined(const DataFrame& data, const DataFrame& cost_mat, const String& delim);
RcppExport SEXP _lingdist_check_cost_defined(SEXP dataSEXP, SEXP cost_matSEXP, SEXP delimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const DataFrame& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const DataFrame& >::type cost_mat(cost_matSEXP);
    Rcpp::traits::input_parameter< const String& >::type delim(delimSEXP);
    rcpp_result_gen = Rcpp::wrap(check_cost_defined(data, cost_mat, delim));
    return rcpp_result_gen;
END_RCPP
}
// generate_default_cost_matrix
DataFrame generate_default_cost_matrix(const DataFrame& data, const String& delim);
RcppExport SEXP _lingdist_generate_default_cost_matrix(SEXP dataSEXP, SEXP delimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const DataFrame& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const String& >::type delim(delimSEXP);
    rcpp_result_gen = Rcpp::wrap(generate_default_cost_matrix(data, delim));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_lingdist_long2squareform", (DL_FUNC) &_lingdist_long2squareform, 2},
    {"_lingdist_edit_dist_string", (DL_FUNC) &_lingdist_edit_dist_string, 5},
    {"_lingdist_edit_dist_df", (DL_FUNC) &_lingdist_edit_dist_df, 7},
    {"_lingdist_check_cost_defined", (DL_FUNC) &_lingdist_check_cost_defined, 3},
    {"_lingdist_generate_default_cost_matrix", (DL_FUNC) &_lingdist_generate_default_cost_matrix, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_lingdist(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
