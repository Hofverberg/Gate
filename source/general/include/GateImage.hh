/*----------------------
  Copyright (C): OpenGATE Collaboration

  This software is distributed under the terms
  of the GNU Lesser General  Public Licence (LGPL)
  See GATE/LICENSE.txt for further details
  ----------------------*/


/*!
  \class GateImage
  \ingroup data_structures
  \author thibault.frisson@creatis.insa-lyon.fr
  laurent.guigues@creatis.insa-lyon.fr
  david.sarrut@creatis.insa-lyon.fr
*/

#ifndef __GATEIMAGE_HH__
#define __GATEIMAGE_HH__

// gate
#include "GateImageT.hh"
#include "GateSparseImageT.hh"


typedef GateImageT<float> GateImage;
typedef GateImageT<float> GateImageFloat;
typedef GateImageT<double> GateImageDouble;
typedef GateImageT<int> GateImageInt;

typedef GateSparseImageT<float> GateSparseImage;
typedef GateSparseImageT<float> GateSparseImageFloat;
typedef GateSparseImageT<double> GateSparseImageDouble;
typedef GateSparseImageT<int> GateSparseImageInt;

#endif
