% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/mcmc_fSAN_burn.R
\name{sample_fSAN}
\alias{sample_fSAN}
\title{Sample fSAN}
\usage{
sample_fSAN(nrep, burn, y, group, 
            maxK = 50, maxL = 50, 
            m0 = 0, tau0 = 0.1, lambda0 = 3, gamma0 = 2,
            hyp_alpha1 = 6, hyp_alpha2 = 3, 
            hyp_beta1 = 6, hyp_beta2 = 3, 
            eps_alpha = NULL, eps_beta = NULL,
            alpha = NULL, beta = NULL,
            warmstart = TRUE, nclus_start = NULL,
            mu_start = NULL, sigma2_start = NULL,
            M_start = NULL, S_start = NULL,
            alpha_start = NULL, beta_start = NULL,
            progress = TRUE, seed = NULL)
}
\arguments{
\item{nrep}{Number of MCMC iterations.}

\item{burn}{Number of discarded iterations.}

\item{y}{Vector of observations.}

\item{group}{Vector of the same length of y indicating the group membership (numeric).}

\item{maxK}{Maximum number of distributional clusters \eqn{K} (default = 50).}

\item{maxL}{Maximum number of observational clusters \eqn{L} (default = 50).}

\item{m0, tau0, lambda0, gamma0}{Hyperparameters on \eqn{(\mu, \sigma^2) \sim NIG(m_0, \tau_0, \lambda_0,\gamma_0)}. Default is (0, 0.1, 3, 2).}

\item{hyp_alpha1, hyp_alpha2, eps_alpha}{If a random \eqn{\alpha} is used, (\code{hyp_alpha1},\code{hyp_alpha2}) specify the hyperparameters (default = (6,3)).
The prior is \eqn{\alpha\sim Gamma}(\code{hyp_alpha1}, \code{hyp_alpha2}). In this case, \code{eps_alpha} is the tuning parameter of the MH step.}

\item{hyp_beta1, hyp_beta2, eps_beta}{If a random \eqn{\beta} is used, (\code{hyp_beta1},\code{hyp_beta2}) specifies the hyperparameter (default = (6,3)). 
The prior is \eqn{\beta\sim Gamma}(\code{hyp_beta1}, \code{hyp_beta2}). In this case, \code{eps_beta} is the tuning parameter of the MH step.}

\item{alpha}{Distributional Dirichlet parameter if fixed (optional). The distribution is Dirichlet( \code{rep(alpha/maxK, maxK)} ).}

\item{beta}{Observational Dirichlet parameter if fixed (optional). The distribution is Dirichlet( \code{rep(beta/maxL, maxL)} ).}

\item{warmstart, nclus_start}{Initialization of the observational clustering. 
\code{warmstart} is logical parameter (default = \code{TRUE}) of whether a kmeans clustering should be used to initialize the chains.
An initial guess of the number of observational clusters can be passed via the \code{nclus_start} parameter (optional). Default is \code{nclus_start = min(c(maxL, 30))}.}

\item{mu_start, sigma2_start, M_start, S_start, alpha_start, beta_start}{Starting points of the MCMC chains (optional). 
\code{mu_start, sigma2_start} are vectors of length \code{maxL}. 
\code{M_start} is a vector of observational cluster allocation of length N.
\code{S_start} is a vector of observational cluster allocation of length J.
\code{alpha_start, alpha_start} are numeric.}

\item{progress}{show a progress bar? (logical, default TRUE.)}

\item{seed}{set a fixed seed.}
}
\value{
\code{sample_fSAN} returns four objects:
\itemize{
  \item \code{model}: name of the fitted model.
  \item \code{params}: list containing the data and the parameters used in the simulation. Details below.
  \item \code{sim}: list containing the simulated values (MCMC chains). Details below.
  \item \code{time}: total computation time.
}

 
\strong{Data and parameters}:
\code{params} is a list with the following components:
\describe{
\item{\code{nrep}}{Number of MCMC iterations.}
\item{\code{y, group}}{Data and group vectors.}
\item{\code{maxK, maxL}}{Maximum number of distributional and observational clusters.}
\item{\code{m0, tau0, lambda0, gamma0}}{Model hyperparameters.}
\item{(\code{hyp_alpha1, hyp_alpha2, eps_alpha}) or \code{alpha}}{Either the hyperparameters on \eqn{\alpha} and MH step size (if \eqn{\alpha} random), or the value for \eqn{\alpha} (if fixed).}
\item{(\code{hyp_beta1, hyp_beta2, eps_beta}) or \code{beta}}{Either the hyperparameters on \eqn{\beta} and MH step size (if \eqn{\beta} random), or the value for \eqn{\beta} (if fixed).}
}


\strong{Simulated values}:
\code{sim} is a list with the following components:
\describe{
\item{\code{mu}}{Matrix of size (\code{nrep}, \code{maxL}).
   Each row is a posterior sample of the mean parameter for each observational cluster \eqn{(\mu_1,\dots\mu_L)}.}
\item{\code{sigma2}}{Matrix of size (\code{nrep}, \code{maxL}). 
    Each row is a posterior sample of the variance parameter for each observational cluster \eqn{(\sigma^2_1,\dots\sigma^2_L)}.}
\item{\code{obs_cluster}}{Matrix of size (\code{nrep}, n), with n = \code{length(y)}. 
   Each row is a posterior sample of the observational cluster allocation variables \eqn{(M_{1,1},\dots,M_{n_J,J})}. }
\item{\code{distr_cluster}}{Matrix of size (\code{nrep}, J), with J = \code{length(unique(group))}. 
   Each row is a posterior sample of the distributional cluster allocation variables \eqn{(S_1,\dots,S_J)}. }
\item{\code{pi}}{Matrix of size (\code{nrep}, \code{maxK}). 
   Each row is a posterior sample of the distributional cluster probabilities \eqn{(\pi_1,\dots,\pi_{K})}.}
\item{\code{omega}}{3-d array of size (\code{maxL}, \code{maxK}, \code{nrep}).
   Each slice is a posterior sample of the observational cluster probabilities. 
   In each slice, each column \eqn{k} is a vector (of length \code{maxL}) observational cluster probabilities
   \eqn{(\omega_{1,k},\dots,\omega_{L,k})} for distributional cluster \eqn{k}. }
\item{\code{alpha}}{Vector of length \code{nrep} of posterior samples of the parameter \eqn{\alpha}.}
\item{\code{beta}}{Vector of length \code{nrep} of posterior samples of the parameter \eqn{\beta}.}
\item{\code{K_plus}}{Vector of length \code{nrep} of posterior samples of the number of distributional clusters.}
\item{\code{L_plus}}{Vector of length \code{nrep} of posterior samples of the number of observational clusters.}
\item{\code{K}}{Vector of length \code{nrep} of posterior samples of the distributional Dirichlet dimension.}
\item{\code{L}}{Vector of length \code{nrep} of posterior samples of the observational Dirichlet dimension.}
}
}
\description{
\code{sample_fSAN} is used to perform posterior inference under the finite shared atoms nested (fSAN) model with Gaussian likelihood (originally proposed in D'Angelo et al., 2023). 
The model uses Dirichlet mixtures with an unknown number of components (following the specification of Frühwirth-Schnatter et al., 2021) at both the observational and distributional level.
}
\details{
\strong{Data structure}

The finite common atoms mixture model is used to perform inference in nested settings, where the data are organized into \eqn{J} groups. 
The data should be continuous observations \eqn{(Y_1,\dots,Y_J)}, where each \eqn{Y_j = (y_{1,j},\dots,y_{n_j,j})} 
contains the \eqn{n_j} observations from group \eqn{j}, for \eqn{j=1,\dots,J}. 
The function takes as input the data as a numeric vector \code{y} in this concatenated form. Hence \code{y} should be a vector of length
\eqn{n_1+\dots+n_J}. The \code{group} parameter is a numeric vector of the same size as \code{y} indicating the group membership for each
individual observation. 
Notice that with this specification the observations in the same group need not be contiguous as long as the correspondence between the variables
\code{y} and \code{group} is maintained.

\strong{Model}

The data are modeled using a univariate Gaussian likelihood, where both the mean and the variance are observational-cluster-specific, i.e., 
\deqn{y_{i,j}\mid M_{i,j} = l \sim N(\mu_l,\sigma^2_l)}
where \eqn{M_{i,j} \in \{1,\dots,L \}} is the observational cluster indicator of observation \eqn{i} in group \eqn{j}.
The prior on the model parameters is a Normal-Inverse-Gamma distribution \eqn{(\mu_l,\sigma^2_l)\sim NIG (m_0,\tau_0,\lambda_0,\gamma_0)}, 
i.e., \eqn{\mu_l\mid\sigma^2_l \sim N(m_0, \sigma^2_l / \tau_0)}, \eqn{1/\sigma^2_l \sim Gamma(\lambda_0, \gamma_0)} (shape, rate).

\strong{Clustering}

The model performs a clustering of both observations and groups. 
The clustering of groups (distributional clustering) is provided by the allocation variables \eqn{S_j \in \{1,\dots,K\}}, with 
\deqn{Pr(S_j = k \mid \dots ) = \pi_k  \qquad \text{for } \: k = 1,\dots,K.}
The distribution of the probabilities is \eqn{(\pi_1,\dots,\pi_{K})\sim Dirichlet_K(\alpha/K,\dots,\alpha/K)}. 
Moreover, the dimension \eqn{K} is random (see Frühwirth-Schnatter et al., 2021).

The clustering of observations (observational clustering) is provided by the allocation variables \eqn{M_{i,j} \in \{1,\dots,L\}}, with
\deqn{ Pr(M_{i,j} = l \mid S_j = k, \dots ) = \omega_{l,k} \qquad \text{for } \: k = 1,\dots,K \, ; \: l = 1,\dots,L. }
The distribution of the probabilities is \eqn{(\omega_{1,k},\dots,\omega_{L,k})\sim Dirichlet_L(\beta/L,\dots,\beta/L)} for all \eqn{k = 1,\dots,K}. 
Moreover, the dimension \eqn{L} is random (see Frühwirth-Schnatter et al., 2021).
}
\examples{
set.seed(123)
y <- c(rnorm(40,0,0.3), rnorm(20,5,0.3))
g <- c(rep(1,30), rep(2, 30))
plot(density(y[g==1]), xlim = c(-5,10))
lines(density(y[g==2]), col = 2)
out <- sample_fSAN(nrep = 500, burn = 200, 
                    y = y, group = g, 
                   nclus_start = 2,
                   maxK = 20, maxL = 20,
                   alpha = 1, beta = 1)
out 

}
\references{
D’Angelo, L., Canale, A., Yu, Z., and Guindani, M. (2023). 
Bayesian nonparametric analysis for the detection of spikes in noisy calcium imaging data. \emph{Biometrics}, 79(2), 1370–1382. <doi:10.1111/biom.13626>

Frühwirth-Schnatter, S., Malsiner-Walli, G. and Grün, B. (2021).
Generalized mixtures of finite mixtures and telescoping sampling. \emph{Bayesian Analysis}, 16(4), 1279–1307. <doi:10.1214/21-BA1294>
}
