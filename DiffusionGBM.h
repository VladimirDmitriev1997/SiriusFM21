//
//  Header.h
//  Problem 1
//
//  Created by admin on 05.02.2021.
//  Copyright © 2021 admin. All rights reserved.
//

#pragma once
#include <stdexcept>
namespace SiriusFM
{
    
    class DiffusionGBM
    {
    private:
        
        double const m_mu;
        double const m_sigma;
    
    public:
        double mu(double a_S, double a_t) const
        {
            return a_S*m_mu;
        }
        double sigma(double a_S, double a_t) const
        {
            if (a_S < 0) return 0;
            
            return m_sigma*a_S;
        }
        DiffusionGBM(double a_mu, double a_sigma)
        :m_mu ( a_mu),
         m_sigma (a_sigma)
        {
            if (m_sigma <= 0) throw std::invalid_argument("AAAAA");
        }
    };
    
};


