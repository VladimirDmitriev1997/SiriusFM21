//
//  DiffusionOUL.h
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
    class DiffusionOUL
    {
    private:
        
        
        double const m_sigma;
        double const m_cappa;
        double const m_theta;
        
    public:
        double mu(double a_S, double a_t) const
        {
            return m_cappa*(m_theta - a_S);
        }
        double sigma(double a_S, double a_t) const
        {
            if (a_S < 0) return 0;
            
            return m_sigma*a_S;
        }
        DiffusionOUL(double a_cappa, double a_sigma, double a_theta)
        :m_sigma ( a_sigma),
        m_cappa  (a_cappa),
        m_theta  (a_theta)
        {
            if (m_sigma <= 0) throw std::invalid_argument("Invalid sigma");
            if (m_cappa < 0) throw std::invalid_argument("Invalid beta");
        }
    };
    
    
    
    
}
