/* 
 * Copyright 2009-2011 The VOTCA Development Team (http://www.votca.org)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef __VOTCA_TOOLS_CONSTANTS_H
#define	__VOTCA_TOOLS_CONSTANTS_H

#include <boost/math/constants/constants.hpp>

namespace votca { namespace tools {
    
    
    namespace conv{
        
        // mathematical constants 
        
    const double Pi = boost::math::constants::pi<double>();
        // natural constants
        
    const double kB = 8.617332478E-5; // eV/K
    const double hbar = 6.5821192815E-16; // eV*s
        
        //length conversions
    
    const double bohr2nm =0.052917721092;
    const double nm2bohr =18.897259886;
    const double ang2bohr = 1.8897259886; 
    
    }

}}

#endif	/* CONVERSIONFACTORS */

