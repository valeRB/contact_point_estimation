/*
 *  ContactPointESTIMATORParams.h
 *
 *
 *  Created on: Jan 14, 2014
 *  Authors:   Francisco Viña
 *            fevb <at> kth.se
 */

/* Copyright (c) 2014, Francisco Viña, CVAP, KTH
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are met:
      * Redistributions of source code must retain the above copyright
        notice, this list of conditions and the following disclaimer.
      * Redistributions in binary form must reproduce the above copyright
        notice, this list of conditions and the following disclaimer in the
        documentation and/or other materials provided with the distribution.
      * Neither the name of KTH nor the
        names of its contributors may be used to endorse or promote products
        derived from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
   ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
   WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
   DISCLAIMED. IN NO EVENT SHALL KTH BE LIABLE FOR ANY
   DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
   (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
   LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
   ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
   (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/


#ifndef CONTACTPOINTESTIMATORPARAMS_H_
#define CONTACTPOINTESTIMATORPARAMS_H_

#include <eigen3/Eigen/Core>
using namespace Eigen;

class ContactPointEstimatorParams
{
public:
	ContactPointEstimatorParams();
	virtual ~ContactPointEstimatorParams();

	// gamma_r is the gain of the contact point (r) estimator
	double getGammaR() const;
	void setGammaR(double gamma_r);

	// gamma_r gain of the robustifying term of the contact point estimator
	double getKappaR() const;
	void setKappaR(double kappa_r);

	// beta_r is the gain for Lr and Qr in the contact point estimator
	double getBetaR() const;
	void setBetaR(double beta_r);

	// initial estimate of the contact point (r) expressed in FT sensor frame
	Vector3d getInitialR() const;
	void setInitialR(const Vector3d &initial_r);

	// estimator update frequency
    double getUpdateFrequency() const;
    void setUpdateFrequency(double update_frequency);

private:


	double m_gamma_r;
	double m_beta_r;

	double m_kappa_r;

	Vector3d m_initial_r;

    double m_update_frequency;
};

#endif /* CONTACTPOINTESTIMATORPARAMS_H_ */
