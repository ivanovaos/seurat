// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// removeRedundantClique
bool removeRedundantClique(IntegerVector x, IntegerVector y);
RcppExport SEXP Seurat_removeRedundantClique(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    __result = Rcpp::wrap(removeRedundantClique(x, y));
    return __result;
END_RCPP
}
// sizeCliqueIntersection
int sizeCliqueIntersection(IntegerVector x, IntegerVector y);
RcppExport SEXP Seurat_sizeCliqueIntersection(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    __result = Rcpp::wrap(sizeCliqueIntersection(x, y));
    return __result;
END_RCPP
}
// removeNode
IntegerVector removeNode(IntegerVector x, int y);
RcppExport SEXP Seurat_removeNode(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type y(ySEXP);
    __result = Rcpp::wrap(removeNode(x, y));
    return __result;
END_RCPP
}
// whichNotZero
IntegerVector whichNotZero(NumericVector x);
RcppExport SEXP Seurat_whichNotZero(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    __result = Rcpp::wrap(whichNotZero(x));
    return __result;
END_RCPP
}
// subsetMatrix
NumericMatrix subsetMatrix(NumericMatrix m, IntegerVector rows, IntegerVector cols);
RcppExport SEXP Seurat_subsetMatrix(SEXP mSEXP, SEXP rowsSEXP, SEXP colsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type m(mSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type cols(colsSEXP);
    __result = Rcpp::wrap(subsetMatrix(m, rows, cols));
    return __result;
END_RCPP
}
// setRow
NumericMatrix setRow(NumericMatrix m, int r, int n);
RcppExport SEXP Seurat_setRow(SEXP mSEXP, SEXP rSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    __result = Rcpp::wrap(setRow(m, r, n));
    return __result;
END_RCPP
}
// setCol
NumericMatrix setCol(NumericMatrix m, int c, int n);
RcppExport SEXP Seurat_setCol(SEXP mSEXP, SEXP cSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type c(cSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    __result = Rcpp::wrap(setCol(m, c, n));
    return __result;
END_RCPP
}
// delRowCol
NumericMatrix delRowCol(NumericMatrix m, int i);
RcppExport SEXP Seurat_delRowCol(SEXP mSEXP, SEXP iSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    __result = Rcpp::wrap(delRowCol(m, i));
    return __result;
END_RCPP
}
// r_wrapper
List r_wrapper(NumericMatrix adj_mat, double r_param, double m_param, double q, double qup, double update);
RcppExport SEXP Seurat_r_wrapper(SEXP adj_matSEXP, SEXP r_paramSEXP, SEXP m_paramSEXP, SEXP qSEXP, SEXP qupSEXP, SEXP updateSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type adj_mat(adj_matSEXP);
    Rcpp::traits::input_parameter< double >::type r_param(r_paramSEXP);
    Rcpp::traits::input_parameter< double >::type m_param(m_paramSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type qup(qupSEXP);
    Rcpp::traits::input_parameter< double >::type update(updateSEXP);
    __result = Rcpp::wrap(r_wrapper(adj_mat, r_param, m_param, q, qup, update));
    return __result;
END_RCPP
}
