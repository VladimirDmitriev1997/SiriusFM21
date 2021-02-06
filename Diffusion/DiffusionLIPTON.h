//
//  DiffusionLIPTON.h
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
    
    class DiffusionLIPTON
    {
    private:
        
        double const m_mu;
        double const m_sigma_0;
        double const m_sigma_1;
        double const m_sigma_2;
        
    public:
        double mu(double a_S, double a_t) const
        {
            return a_S*m_mu;
        }
        double sigma(double a_S, double a_t) const
        {
            if (a_S < 0) return 0;
            
            return m_sigma_0 + m_sigma_1*a_S + m_sigma_2*pow(a_S,2);
        }
        DiffusionLIPTON(double a_mu, double a_sigma_0,double a_sigma_1,double a_sigma_2)
        :m_mu ( a_mu),
        m_sigma_0 (a_sigma_0),
        m_sigma_1 ( a_sigma_1),
        m_sigma_2 ( a_sigma_2)
        {
            if (pow(m_sigma_1,2) - 4*m_sigma_0*m_sigma_2 >= 0) throw std::invalid_argument("AAAAA");
            
        }
    };
    
}
