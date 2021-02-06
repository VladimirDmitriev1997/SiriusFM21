//
//  DiffusionCEV.h
//  Problem 1
//
//  Created by admin on 05.02.2021.
//  Copyright © 2021 admin. All rights reserved.
//
#pragma once
#include <stdexcept>
#include <cmath>
namespace SiriusFM
{
    class DiffusionCEV
    {
    private:
        
        double const m_mu;
        double const m_sigma;
        double const m_beta;
        
    public:
        double mu(double a_S, double a_t) const
        {
            return a_S*m_mu;
        }
        double sigma(double a_S, double a_t) const
        {
            if (a_S < 0) return 0;
            
            return m_sigma*pow(a_S, m_beta);
        }
        DiffusionCEV(double a_mu, double a_sigma, double a_beta)
        :m_mu ( a_mu),
        m_sigma (a_sigma),
        m_beta ( a_beta)
        {
            if (m_sigma <= 0) throw std::invalid_argument("Invalid sigma");
            if (m_beta < 0) throw std::invalid_argument("Invalid beta");
        }
    };




}



