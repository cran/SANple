// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// sample_cam_arma
Rcpp::List sample_cam_arma(int nrep, const arma::vec& y, const arma::vec& group, int maxK, int maxL, double m0, double tau0, double lambda0, double gamma0, bool fixed_alpha, bool fixed_beta, double alpha, double beta, double hyp_alpha1, double hyp_alpha2, double hyp_beta1, double hyp_beta2, arma::vec mu_start, arma::vec sigma2_start, arma::vec M_start, arma::vec S_start, double alpha_start, double beta_start, bool progressbar);
RcppExport SEXP _SANple_sample_cam_arma(SEXP nrepSEXP, SEXP ySEXP, SEXP groupSEXP, SEXP maxKSEXP, SEXP maxLSEXP, SEXP m0SEXP, SEXP tau0SEXP, SEXP lambda0SEXP, SEXP gamma0SEXP, SEXP fixed_alphaSEXP, SEXP fixed_betaSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP hyp_alpha1SEXP, SEXP hyp_alpha2SEXP, SEXP hyp_beta1SEXP, SEXP hyp_beta2SEXP, SEXP mu_startSEXP, SEXP sigma2_startSEXP, SEXP M_startSEXP, SEXP S_startSEXP, SEXP alpha_startSEXP, SEXP beta_startSEXP, SEXP progressbarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nrep(nrepSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type group(groupSEXP);
    Rcpp::traits::input_parameter< int >::type maxK(maxKSEXP);
    Rcpp::traits::input_parameter< int >::type maxL(maxLSEXP);
    Rcpp::traits::input_parameter< double >::type m0(m0SEXP);
    Rcpp::traits::input_parameter< double >::type tau0(tau0SEXP);
    Rcpp::traits::input_parameter< double >::type lambda0(lambda0SEXP);
    Rcpp::traits::input_parameter< double >::type gamma0(gamma0SEXP);
    Rcpp::traits::input_parameter< bool >::type fixed_alpha(fixed_alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type fixed_beta(fixed_betaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type hyp_alpha1(hyp_alpha1SEXP);
    Rcpp::traits::input_parameter< double >::type hyp_alpha2(hyp_alpha2SEXP);
    Rcpp::traits::input_parameter< double >::type hyp_beta1(hyp_beta1SEXP);
    Rcpp::traits::input_parameter< double >::type hyp_beta2(hyp_beta2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu_start(mu_startSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigma2_start(sigma2_startSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type M_start(M_startSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type S_start(S_startSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_start(alpha_startSEXP);
    Rcpp::traits::input_parameter< double >::type beta_start(beta_startSEXP);
    Rcpp::traits::input_parameter< bool >::type progressbar(progressbarSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_cam_arma(nrep, y, group, maxK, maxL, m0, tau0, lambda0, gamma0, fixed_alpha, fixed_beta, alpha, beta, hyp_alpha1, hyp_alpha2, hyp_beta1, hyp_beta2, mu_start, sigma2_start, M_start, S_start, alpha_start, beta_start, progressbar));
    return rcpp_result_gen;
END_RCPP
}
// sample_fcam_arma
Rcpp::List sample_fcam_arma(int nrep, const arma::vec& y, const arma::vec& group, int maxK, int maxL, double m0, double tau0, double lambda0, double gamma0, bool fixed_alpha, bool fixed_beta, double alpha, double beta, double hyp_alpha1, double hyp_alpha2, double hyp_beta1, double hyp_beta2, arma::vec mu_start, arma::vec sigma2_start, arma::vec M_start, arma::vec S_start, double alpha_start, double beta_start, double eps_alpha, double eps_beta, bool progressbar);
RcppExport SEXP _SANple_sample_fcam_arma(SEXP nrepSEXP, SEXP ySEXP, SEXP groupSEXP, SEXP maxKSEXP, SEXP maxLSEXP, SEXP m0SEXP, SEXP tau0SEXP, SEXP lambda0SEXP, SEXP gamma0SEXP, SEXP fixed_alphaSEXP, SEXP fixed_betaSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP hyp_alpha1SEXP, SEXP hyp_alpha2SEXP, SEXP hyp_beta1SEXP, SEXP hyp_beta2SEXP, SEXP mu_startSEXP, SEXP sigma2_startSEXP, SEXP M_startSEXP, SEXP S_startSEXP, SEXP alpha_startSEXP, SEXP beta_startSEXP, SEXP eps_alphaSEXP, SEXP eps_betaSEXP, SEXP progressbarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nrep(nrepSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type group(groupSEXP);
    Rcpp::traits::input_parameter< int >::type maxK(maxKSEXP);
    Rcpp::traits::input_parameter< int >::type maxL(maxLSEXP);
    Rcpp::traits::input_parameter< double >::type m0(m0SEXP);
    Rcpp::traits::input_parameter< double >::type tau0(tau0SEXP);
    Rcpp::traits::input_parameter< double >::type lambda0(lambda0SEXP);
    Rcpp::traits::input_parameter< double >::type gamma0(gamma0SEXP);
    Rcpp::traits::input_parameter< bool >::type fixed_alpha(fixed_alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type fixed_beta(fixed_betaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type hyp_alpha1(hyp_alpha1SEXP);
    Rcpp::traits::input_parameter< double >::type hyp_alpha2(hyp_alpha2SEXP);
    Rcpp::traits::input_parameter< double >::type hyp_beta1(hyp_beta1SEXP);
    Rcpp::traits::input_parameter< double >::type hyp_beta2(hyp_beta2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu_start(mu_startSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigma2_start(sigma2_startSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type M_start(M_startSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type S_start(S_startSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_start(alpha_startSEXP);
    Rcpp::traits::input_parameter< double >::type beta_start(beta_startSEXP);
    Rcpp::traits::input_parameter< double >::type eps_alpha(eps_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type eps_beta(eps_betaSEXP);
    Rcpp::traits::input_parameter< bool >::type progressbar(progressbarSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_fcam_arma(nrep, y, group, maxK, maxL, m0, tau0, lambda0, gamma0, fixed_alpha, fixed_beta, alpha, beta, hyp_alpha1, hyp_alpha2, hyp_beta1, hyp_beta2, mu_start, sigma2_start, M_start, S_start, alpha_start, beta_start, eps_alpha, eps_beta, progressbar));
    return rcpp_result_gen;
END_RCPP
}
// sample_ficam_arma
Rcpp::List sample_ficam_arma(int nrep, const arma::vec& y, const arma::vec& group, int maxK, int maxL, double m0, double tau0, double lambda0, double gamma0, bool fixed_alpha, bool fixed_beta, double alpha, double beta, double hyp_alpha1, double hyp_alpha2, double hyp_beta1, double hyp_beta2, arma::vec mu_start, arma::vec sigma2_start, arma::vec M_start, arma::vec S_start, double alpha_start, double beta_start, double eps_beta, bool progressbar);
RcppExport SEXP _SANple_sample_ficam_arma(SEXP nrepSEXP, SEXP ySEXP, SEXP groupSEXP, SEXP maxKSEXP, SEXP maxLSEXP, SEXP m0SEXP, SEXP tau0SEXP, SEXP lambda0SEXP, SEXP gamma0SEXP, SEXP fixed_alphaSEXP, SEXP fixed_betaSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP hyp_alpha1SEXP, SEXP hyp_alpha2SEXP, SEXP hyp_beta1SEXP, SEXP hyp_beta2SEXP, SEXP mu_startSEXP, SEXP sigma2_startSEXP, SEXP M_startSEXP, SEXP S_startSEXP, SEXP alpha_startSEXP, SEXP beta_startSEXP, SEXP eps_betaSEXP, SEXP progressbarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nrep(nrepSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type group(groupSEXP);
    Rcpp::traits::input_parameter< int >::type maxK(maxKSEXP);
    Rcpp::traits::input_parameter< int >::type maxL(maxLSEXP);
    Rcpp::traits::input_parameter< double >::type m0(m0SEXP);
    Rcpp::traits::input_parameter< double >::type tau0(tau0SEXP);
    Rcpp::traits::input_parameter< double >::type lambda0(lambda0SEXP);
    Rcpp::traits::input_parameter< double >::type gamma0(gamma0SEXP);
    Rcpp::traits::input_parameter< bool >::type fixed_alpha(fixed_alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type fixed_beta(fixed_betaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type hyp_alpha1(hyp_alpha1SEXP);
    Rcpp::traits::input_parameter< double >::type hyp_alpha2(hyp_alpha2SEXP);
    Rcpp::traits::input_parameter< double >::type hyp_beta1(hyp_beta1SEXP);
    Rcpp::traits::input_parameter< double >::type hyp_beta2(hyp_beta2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu_start(mu_startSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigma2_start(sigma2_startSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type M_start(M_startSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type S_start(S_startSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_start(alpha_startSEXP);
    Rcpp::traits::input_parameter< double >::type beta_start(beta_startSEXP);
    Rcpp::traits::input_parameter< double >::type eps_beta(eps_betaSEXP);
    Rcpp::traits::input_parameter< bool >::type progressbar(progressbarSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_ficam_arma(nrep, y, group, maxK, maxL, m0, tau0, lambda0, gamma0, fixed_alpha, fixed_beta, alpha, beta, hyp_alpha1, hyp_alpha2, hyp_beta1, hyp_beta2, mu_start, sigma2_start, M_start, S_start, alpha_start, beta_start, eps_beta, progressbar));
    return rcpp_result_gen;
END_RCPP
}
// sample_overcam_arma
Rcpp::List sample_overcam_arma(int nrep, const arma::vec& y, const arma::vec& group, int maxK, int maxL, double m0, double tau0, double lambda0, double gamma0, bool fixed_alpha, bool fixed_beta, double alpha, double beta, double hyp_alpha, double hyp_beta, arma::vec mu_start, arma::vec sigma2_start, arma::vec M_start, arma::vec S_start, double alpha_start, double beta_start, double eps_alpha, double eps_beta, bool progressbar);
RcppExport SEXP _SANple_sample_overcam_arma(SEXP nrepSEXP, SEXP ySEXP, SEXP groupSEXP, SEXP maxKSEXP, SEXP maxLSEXP, SEXP m0SEXP, SEXP tau0SEXP, SEXP lambda0SEXP, SEXP gamma0SEXP, SEXP fixed_alphaSEXP, SEXP fixed_betaSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP hyp_alphaSEXP, SEXP hyp_betaSEXP, SEXP mu_startSEXP, SEXP sigma2_startSEXP, SEXP M_startSEXP, SEXP S_startSEXP, SEXP alpha_startSEXP, SEXP beta_startSEXP, SEXP eps_alphaSEXP, SEXP eps_betaSEXP, SEXP progressbarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nrep(nrepSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type group(groupSEXP);
    Rcpp::traits::input_parameter< int >::type maxK(maxKSEXP);
    Rcpp::traits::input_parameter< int >::type maxL(maxLSEXP);
    Rcpp::traits::input_parameter< double >::type m0(m0SEXP);
    Rcpp::traits::input_parameter< double >::type tau0(tau0SEXP);
    Rcpp::traits::input_parameter< double >::type lambda0(lambda0SEXP);
    Rcpp::traits::input_parameter< double >::type gamma0(gamma0SEXP);
    Rcpp::traits::input_parameter< bool >::type fixed_alpha(fixed_alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type fixed_beta(fixed_betaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type hyp_alpha(hyp_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type hyp_beta(hyp_betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu_start(mu_startSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigma2_start(sigma2_startSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type M_start(M_startSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type S_start(S_startSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_start(alpha_startSEXP);
    Rcpp::traits::input_parameter< double >::type beta_start(beta_startSEXP);
    Rcpp::traits::input_parameter< double >::type eps_alpha(eps_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type eps_beta(eps_betaSEXP);
    Rcpp::traits::input_parameter< bool >::type progressbar(progressbarSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_overcam_arma(nrep, y, group, maxK, maxL, m0, tau0, lambda0, gamma0, fixed_alpha, fixed_beta, alpha, beta, hyp_alpha, hyp_beta, mu_start, sigma2_start, M_start, S_start, alpha_start, beta_start, eps_alpha, eps_beta, progressbar));
    return rcpp_result_gen;
END_RCPP
}
// sample_overficam_arma
Rcpp::List sample_overficam_arma(int nrep, const arma::vec& y, const arma::vec& group, int maxK, int maxL, double m0, double tau0, double lambda0, double gamma0, bool fixed_alpha, bool fixed_beta, double alpha, double beta, double hyp_alpha1, double hyp_alpha2, double hyp_beta, arma::vec mu_start, arma::vec sigma2_start, arma::vec M_start, arma::vec S_start, double alpha_start, double beta_start, double eps_beta, bool progressbar);
RcppExport SEXP _SANple_sample_overficam_arma(SEXP nrepSEXP, SEXP ySEXP, SEXP groupSEXP, SEXP maxKSEXP, SEXP maxLSEXP, SEXP m0SEXP, SEXP tau0SEXP, SEXP lambda0SEXP, SEXP gamma0SEXP, SEXP fixed_alphaSEXP, SEXP fixed_betaSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP hyp_alpha1SEXP, SEXP hyp_alpha2SEXP, SEXP hyp_betaSEXP, SEXP mu_startSEXP, SEXP sigma2_startSEXP, SEXP M_startSEXP, SEXP S_startSEXP, SEXP alpha_startSEXP, SEXP beta_startSEXP, SEXP eps_betaSEXP, SEXP progressbarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nrep(nrepSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type group(groupSEXP);
    Rcpp::traits::input_parameter< int >::type maxK(maxKSEXP);
    Rcpp::traits::input_parameter< int >::type maxL(maxLSEXP);
    Rcpp::traits::input_parameter< double >::type m0(m0SEXP);
    Rcpp::traits::input_parameter< double >::type tau0(tau0SEXP);
    Rcpp::traits::input_parameter< double >::type lambda0(lambda0SEXP);
    Rcpp::traits::input_parameter< double >::type gamma0(gamma0SEXP);
    Rcpp::traits::input_parameter< bool >::type fixed_alpha(fixed_alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type fixed_beta(fixed_betaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type hyp_alpha1(hyp_alpha1SEXP);
    Rcpp::traits::input_parameter< double >::type hyp_alpha2(hyp_alpha2SEXP);
    Rcpp::traits::input_parameter< double >::type hyp_beta(hyp_betaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu_start(mu_startSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigma2_start(sigma2_startSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type M_start(M_startSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type S_start(S_startSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_start(alpha_startSEXP);
    Rcpp::traits::input_parameter< double >::type beta_start(beta_startSEXP);
    Rcpp::traits::input_parameter< double >::type eps_beta(eps_betaSEXP);
    Rcpp::traits::input_parameter< bool >::type progressbar(progressbarSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_overficam_arma(nrep, y, group, maxK, maxL, m0, tau0, lambda0, gamma0, fixed_alpha, fixed_beta, alpha, beta, hyp_alpha1, hyp_alpha2, hyp_beta, mu_start, sigma2_start, M_start, S_start, alpha_start, beta_start, eps_beta, progressbar));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SANple_sample_cam_arma", (DL_FUNC) &_SANple_sample_cam_arma, 24},
    {"_SANple_sample_fcam_arma", (DL_FUNC) &_SANple_sample_fcam_arma, 26},
    {"_SANple_sample_ficam_arma", (DL_FUNC) &_SANple_sample_ficam_arma, 25},
    {"_SANple_sample_overcam_arma", (DL_FUNC) &_SANple_sample_overcam_arma, 24},
    {"_SANple_sample_overficam_arma", (DL_FUNC) &_SANple_sample_overficam_arma, 24},
    {NULL, NULL, 0}
};

RcppExport void R_init_SANple(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}